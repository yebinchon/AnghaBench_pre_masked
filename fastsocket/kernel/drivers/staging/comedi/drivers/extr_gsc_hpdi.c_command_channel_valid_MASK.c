
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(unsigned int VAR_0)
{
 if (VAR_0 == 0 || VAR_0 > 6) {
  FUNC_0("gsc_hpdi: bug! invalid cable command channel\n");
  return 0;
 }
 return 1;
}
