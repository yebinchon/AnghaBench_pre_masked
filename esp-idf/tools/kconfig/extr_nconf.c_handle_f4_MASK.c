
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int *VAR_2, struct menu *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0,
   FUNC_0("Show all symbols?"),
   2,
   "   <Show All>   ",
   "<Don't show all>");
 if (VAR_4 == 0)
  VAR_1 = 1;
 else if (VAR_4 == 1)
  VAR_1 = 0;

 return;
}
