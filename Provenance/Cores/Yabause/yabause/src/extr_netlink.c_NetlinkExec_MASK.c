
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int cycles; int thb_write_time; int escape_count; int connectstatus; int outbufferupdate; int connect_timeout; int connect_time; int internet_enable; void* modemstate; } ;


 int FUNC_0 (char*) ;



 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(u32 VAR_4)
{
   VAR_3->cycles += VAR_4;
   VAR_3->connect_time += VAR_4;
   if (VAR_3->thb_write_time != 0xFFFFFFFF)
      VAR_3->thb_write_time += VAR_4;

   if (VAR_3->cycles >= 20000)
   {
      VAR_3->cycles -= 20000;

      if (VAR_3->escape_count == 3 && VAR_3->thb_write_time >= 1000000)
      {

         FUNC_0("Detected escape sequence, switching back to command mode\n");
         VAR_3->modemstate = VAR_1;
      }

      switch(VAR_3->connectstatus)
      {
         case 128:
         {
            break;
         }
         case 130:
         {
            break;
         }
         case 129:
         {
            break;
         }
         default: break;
      }
   }
}
