
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 char *VAR_3 = FUNC_1();
 if (VAR_3 == ((void*)0))
  FUNC_2("Break on BRK is %sabled\n", VAR_1 ? "en" : "dis");
 else if (FUNC_0(VAR_3, "ON") == 0)
  VAR_1 = VAR_2;
 else if (FUNC_0(VAR_3, "OFF") == 0)
  VAR_1 = VAR_0;
 else
  FUNC_2("Invalid argument. Usage: BBRK ON or OFF\n");
}
