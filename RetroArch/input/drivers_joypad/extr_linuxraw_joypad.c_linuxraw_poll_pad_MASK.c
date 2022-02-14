
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linuxraw_joypad {int * axes; int buttons; int fd; } ;
struct js_event {unsigned int type; size_t number; int value; } ;
typedef scalar_t__ ssize_t ;
typedef int event ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (int ,struct js_event*,int) ;

__attribute__((used)) static void FUNC_3(struct linuxraw_joypad *VAR_3)
{
   struct js_event VAR_4;

   while (FUNC_2(VAR_3->fd, &VAR_4, sizeof(VAR_4)) == (ssize_t)sizeof(VAR_4))
   {
      unsigned VAR_5 = VAR_4.type & ~VAR_0;

      switch (VAR_5)
      {
         case 128:
            if (VAR_4.number < VAR_2)
            {
               if (VAR_4.value)
                  FUNC_1(VAR_3->buttons, VAR_4.number);
               else
                  FUNC_0(VAR_3->buttons, VAR_4.number);
            }
            break;

         case 129:
            if (VAR_4.number < VAR_1)
               VAR_3->axes[VAR_4.number] = VAR_4.value;
            break;
      }
   }
}
