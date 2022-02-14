
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_console_data {char (* getc ) () ;int (* putc ) (char) ;scalar_t__ (* tstc ) () ;} ;
struct TYPE_2__ {struct serial_console_data* data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 char FUNC_3 () ;
 int FUNC_4 (char) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(char *VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4;
 char VAR_5, *VAR_6;
 struct serial_console_data *VAR_7 = VAR_0.data;

 VAR_6 = VAR_1;
 VAR_4 = FUNC_1(VAR_1);
 VAR_6 = &VAR_1[VAR_4];
 VAR_4++;

 while (VAR_3++ < 5*1000) {
  if (VAR_7->tstc()) {
   while (((VAR_5 = VAR_7->getc()) != '\n') && (VAR_5 != '\r')) {

    if ((VAR_5 == '\b') || (VAR_5 == '\177')) {
     if (VAR_6 != VAR_1) {
      VAR_6--;
      VAR_4--;
      FUNC_0("\b \b");
     }

    } else if ((VAR_5 == '\030') || (VAR_5 == '\025')) {
     while (VAR_6 != VAR_1) {
      VAR_6--;
      VAR_4--;
      FUNC_0("\b \b");
     }
    } else if (VAR_4 < VAR_2) {
      *VAR_6++ = VAR_5;
      VAR_4++;
      VAR_7->putc(VAR_5);
    }
   }
   break;
  }
  FUNC_5(1000);
 }
 *VAR_6 = 0;
}
