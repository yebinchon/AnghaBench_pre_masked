
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_strategy_args {int a_bp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct vnop_strategy_args *VAR_1)
{

 if (FUNC_3(VAR_1->a_bp) == ((void*)0) || !FUNC_4(FUNC_3(VAR_1->a_bp))) {
         FUNC_2(VAR_1->a_bp, VAR_0);
  FUNC_1(VAR_1->a_bp);
  return (VAR_0);
 }
 return (FUNC_0(VAR_1->a_bp));
}
