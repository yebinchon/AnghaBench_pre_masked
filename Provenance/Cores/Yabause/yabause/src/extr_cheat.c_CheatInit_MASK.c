
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef TYPE_1__ cheatlist_struct ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int FUNC_1(void)
{
   VAR_2 = 10;
   if ((VAR_1 = (cheatlist_struct *)FUNC_0(VAR_2, sizeof(cheatlist_struct))) == ((void*)0))
      return -1;
   VAR_1[0].type = VAR_0;

   return 0;
}
