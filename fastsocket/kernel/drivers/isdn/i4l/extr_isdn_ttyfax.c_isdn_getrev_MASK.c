
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0)
{
 char *VAR_1;
 char *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, ':'))) {
  VAR_1 = VAR_2 + 2;
  VAR_2 = FUNC_0(VAR_1, '$');
  *--VAR_2 = 0;
 } else
  VAR_1 = "???";
 return VAR_1;
}
