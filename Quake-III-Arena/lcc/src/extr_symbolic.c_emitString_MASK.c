
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_1, const char *VAR_2) {
 for ( ; VAR_1-- > 0; VAR_2++)
  if (*VAR_2 == '&' && VAR_0)
   FUNC_0("&amp;");
  else if (*VAR_2 == '<' && VAR_0)
   FUNC_0("&lt;");
  else if (*VAR_2 == '>' && VAR_0)
   FUNC_0("&lt;");
  else if (*VAR_2 == '"' || *VAR_2 == '\\')
   FUNC_0("\\%c", *VAR_2);
  else if (*VAR_2 >= ' ' && *VAR_2 < 0177)
   FUNC_0("%c", *VAR_2);
  else
   FUNC_0("\\%d%d%d", (*VAR_2>>6)&3, (*VAR_2>>3)&7, *VAR_2&7);
}
