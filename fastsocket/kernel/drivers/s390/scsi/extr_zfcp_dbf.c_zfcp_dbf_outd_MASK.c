
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, const char *VAR_1, char *VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 if (!VAR_4)
  *VAR_0 += FUNC_0(*VAR_0, "%-24s  ", VAR_1);
 while (VAR_3--) {
  if (VAR_4 > 0) {
   if ((VAR_4 % 32) == 0)
    *VAR_0 += FUNC_0(*VAR_0, "\n%-24c  ", ' ');
   else if ((VAR_4 % 4) == 0)
    *VAR_0 += FUNC_0(*VAR_0, " ");
  }
  *VAR_0 += FUNC_0(*VAR_0, "%02x", *VAR_2++);
  if (++VAR_4 == VAR_5) {
   *VAR_0 += FUNC_0(*VAR_0, "\n");
   break;
  }
 }
 if (!VAR_5)
  *VAR_0 += FUNC_0(*VAR_0, "\n");
}
