
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_console_data {int tstc; int getc; int putc; int open; } ;


 int FUNC_0 (void*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(void *VAR_5, struct serial_console_data *VAR_6)
{

 if (FUNC_0(VAR_5, &VAR_0, 1) < 1)
  return -1;

 VAR_6->open = VAR_2;
 VAR_6->putc = VAR_3;
 VAR_6->getc = VAR_1;
 VAR_6->tstc = VAR_4;

 return 0;
}
