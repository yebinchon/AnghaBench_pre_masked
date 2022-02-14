
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Buttons; } ;
typedef int SceSize ;
typedef TYPE_1__ SceCtrlData ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(SceSize VAR_2, void *VAR_3)
{
   SceCtrlData VAR_4;

   VAR_1 = 1;

   while (VAR_1)
   {
      FUNC_0(&VAR_4, 1);
      VAR_0 = VAR_4.Buttons;
      FUNC_1(1000000/60);
   }

   FUNC_2(0);

   return 0;
}
