
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int sym; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_4(struct menu *VAR_6)
{
 if (!VAR_6->sym)
  return;

 FUNC_2(VAR_6->sym);
 if (VAR_5 == VAR_0)
  FUNC_3(&VAR_4, ((void*)0));
 else if (VAR_5 == VAR_2) {
  FUNC_3(VAR_3, ((void*)0));
  FUNC_0();
 }
 else if (VAR_5 == VAR_1)
  FUNC_1();
}
