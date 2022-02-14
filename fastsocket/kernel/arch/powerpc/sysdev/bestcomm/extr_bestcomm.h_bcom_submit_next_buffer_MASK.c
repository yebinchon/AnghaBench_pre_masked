
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {size_t index; int flags; void** cookie; } ;
struct bcom_bd {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bcom_task*) ;
 int FUNC_1 (struct bcom_task*) ;
 struct bcom_bd* FUNC_2 (struct bcom_task*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct bcom_task *VAR_2, void *VAR_3)
{
 struct bcom_bd *VAR_4 = FUNC_2(VAR_2, VAR_2->index);

 VAR_2->cookie[VAR_2->index] = VAR_3;
 FUNC_3();
 VAR_4->status |= VAR_0;
 VAR_2->index = FUNC_0(VAR_2);
 if (VAR_2->flags & VAR_1)
  FUNC_1(VAR_2);
}
