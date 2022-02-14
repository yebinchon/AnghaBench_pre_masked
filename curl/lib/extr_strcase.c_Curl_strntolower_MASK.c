
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

void FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
  if(VAR_2 < 1)
    return;

  do {
    *VAR_0++ = FUNC_0(*VAR_1);
  } while(*VAR_1++ && --VAR_2);
}
