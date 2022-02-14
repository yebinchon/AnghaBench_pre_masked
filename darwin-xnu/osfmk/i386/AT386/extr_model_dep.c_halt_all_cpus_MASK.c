
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((noreturn))
void
FUNC_2(boolean_t VAR_2)
{
 if (VAR_2) {
  FUNC_1("MACH Reboot\n");
  FUNC_0( VAR_1 );
 } else {
  FUNC_1("CPU halted\n");
  FUNC_0( VAR_0 );
 }
 while(1);
}
