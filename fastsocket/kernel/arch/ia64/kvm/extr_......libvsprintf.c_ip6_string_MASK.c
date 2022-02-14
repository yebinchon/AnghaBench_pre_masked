
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int ) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_0 = FUNC_0(VAR_0, *VAR_1++);
  VAR_0 = FUNC_0(VAR_0, *VAR_1++);
  if (VAR_2[0] == 'I' && VAR_3 != 7)
   *VAR_0++ = ':';
 }

 *VAR_0 = '\0';
 return VAR_0;
}
