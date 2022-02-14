
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcom_task {size_t outdex; void** cookie; } ;
struct bcom_bd {int status; } ;


 size_t FUNC_0 (struct bcom_task*) ;
 struct bcom_bd* FUNC_1 (struct bcom_task*,size_t) ;

__attribute__((used)) static inline void *
FUNC_2(struct bcom_task *VAR_0, u32 *VAR_1, struct bcom_bd **VAR_2)
{
 void *VAR_3 = VAR_0->cookie[VAR_0->outdex];
 struct bcom_bd *VAR_4 = FUNC_1(VAR_0, VAR_0->outdex);

 if (VAR_1)
  *VAR_1 = VAR_4->status;
 if (VAR_2)
  *VAR_2 = VAR_4;
 VAR_0->outdex = FUNC_0(VAR_0);
 return VAR_3;
}
