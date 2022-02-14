
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_joypad {int buttons; scalar_t__* button_enable; int fd; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct parport_joypad *VAR_2)
{
   int VAR_3;
   char VAR_4;
   char VAR_5;

   if (FUNC_4(VAR_2->fd, VAR_0, &VAR_4) < 0)
      return;
   if (FUNC_4(VAR_2->fd, VAR_1, &VAR_5) < 0)
      return;

   for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
   {
      if (!(VAR_4 & FUNC_3(1 << VAR_3)) && VAR_2->button_enable[VAR_3])
         FUNC_2(VAR_2->buttons, VAR_3);
      else
         FUNC_0(VAR_2->buttons, VAR_3);
   }
   for (VAR_3 = 3; VAR_3 < 8; VAR_3++)
   {
      if (!(VAR_5 & FUNC_3(1 << VAR_3)) && VAR_2->button_enable[VAR_3 + 5])
         FUNC_2(VAR_2->buttons, VAR_3 + 5);
      else
         FUNC_0(VAR_2->buttons, VAR_3 + 5);
   }

   if (FUNC_1(VAR_2->buttons, 12) && VAR_2->button_enable[12])
      FUNC_0(VAR_2->buttons, 12);
   else
      FUNC_2(VAR_2->buttons, 12);
}
