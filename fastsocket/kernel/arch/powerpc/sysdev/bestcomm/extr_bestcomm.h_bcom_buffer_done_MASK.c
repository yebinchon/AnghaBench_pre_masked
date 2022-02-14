
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {int outdex; } ;
struct bcom_bd {int status; } ;


 int VAR_0 ;
 struct bcom_bd* FUNC_0 (struct bcom_task*,int ) ;
 scalar_t__ FUNC_1 (struct bcom_task*) ;

__attribute__((used)) static inline int
FUNC_2(struct bcom_task *VAR_1)
{
 struct bcom_bd *VAR_2;
 if (FUNC_1(VAR_1))
  return 0;

 VAR_2 = FUNC_0(VAR_1, VAR_1->outdex);
 return !(VAR_2->status & VAR_0);
}
