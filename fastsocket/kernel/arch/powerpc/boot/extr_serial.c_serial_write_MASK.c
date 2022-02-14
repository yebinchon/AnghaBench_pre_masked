
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_console_data {int (* putc ) (int ) ;} ;
struct TYPE_2__ {struct serial_console_data* data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, int VAR_2)
{
 struct serial_console_data *VAR_3 = VAR_0.data;

 while (*VAR_1 != '\0')
  VAR_3->putc(*VAR_1++);
}
