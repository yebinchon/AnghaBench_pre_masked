
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_reg {int RegFireCount; int EP0vm_state; } ;
struct hw_data {struct wb35_reg reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3( struct hw_data * VAR_1 )
{
 struct wb35_reg *VAR_2 = &VAR_1->reg;

 if (FUNC_2(&VAR_2->RegFireCount) == 1) {
  VAR_2->EP0vm_state = VAR_0;
  FUNC_0(VAR_1);
 } else
  FUNC_1(&VAR_2->RegFireCount);
}
