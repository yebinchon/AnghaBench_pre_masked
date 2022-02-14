
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1)
{
 FUNC_0("mpc8xxx_wdt: %s, expect the %s soon!\n", VAR_1,
  VAR_0 ? "reset" : "machine check exception");
}
