
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(char *VAR_1, char **VAR_2)
{
 int VAR_3 = VAR_0 - 1;

 while (((*VAR_2[0] >= '0' && *VAR_2[0] <= '9') ||

  (*VAR_2[0] == ',') || (*VAR_2[0] == ':')) &&
  (VAR_3--))
  *VAR_1++ = *VAR_2[0]++;
 *VAR_1 = '\0';
}
