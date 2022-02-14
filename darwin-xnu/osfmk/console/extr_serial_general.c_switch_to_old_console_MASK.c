
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

void
FUNC_1(int VAR_3)
{
 static boolean_t VAR_4;
 uint32_t VAR_5 = VAR_3;

 if ((VAR_5 >= VAR_2) && !VAR_4) {
  VAR_4 = VAR_0;
  FUNC_0("switch_to_old_console: unknown ops %d\n", VAR_5);
 } else
  VAR_1 = VAR_5;
}
