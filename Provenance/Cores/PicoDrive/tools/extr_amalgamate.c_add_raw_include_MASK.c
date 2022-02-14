
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static const char *FUNC_8(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 char VAR_4[128];

 for (VAR_2 = VAR_0; *VAR_2 && FUNC_2(*VAR_2); VAR_2++);

 if (*VAR_2 == '<')
 {
  int VAR_5 = 1;

  for (VAR_3 = VAR_2; *VAR_3 && *VAR_3 != '>'; VAR_3++, VAR_5++);
  if (*VAR_3 == 0 || VAR_5 > 127) FUNC_1("add_raw_include: failed sysinclude, len=%i\n", VAR_5);
  FUNC_6(VAR_4, VAR_2, VAR_5);
  VAR_4[VAR_5] = 0;
 }
 else if (*VAR_2 == '\"')
 {
  int VAR_6, VAR_7;

  FUNC_3(VAR_4, VAR_1);
  VAR_2++;
  while (*VAR_2 == '.')
  {
   if (FUNC_5(VAR_2, "../", 3) == 0)
   {
    char *VAR_8;
    if (VAR_4[0] == 0)
     FUNC_1("add_raw_include: already in root, can't go down: %s | %s\n", VAR_2, VAR_0);
    VAR_8 = FUNC_7(VAR_4, '/');
    if (VAR_8 == ((void*)0)) FUNC_1("add_raw_include: can't happen\n");
    *VAR_8 = 0;
    VAR_8 = FUNC_7(VAR_4, '/');
    if (VAR_8 != ((void*)0)) VAR_8[1] = 0;
    else VAR_4[0] = 0;
    VAR_2 += 3;
   }
   else if (FUNC_5(VAR_2, "./", 2) == 0)
   {
    VAR_2 += 2;
   }
   while (*VAR_2 == '/') VAR_2++;
  }
  if (*VAR_2 == 0) FUNC_1("add_raw_include: failed with %s\n", VAR_0);

  VAR_6 = VAR_7 = FUNC_4(VAR_4);
  for (VAR_3 = VAR_2; *VAR_3 && *VAR_3 != '\"'; VAR_3++, VAR_6++);
  if (*VAR_3 == 0 || VAR_6 > 127) FUNC_1("add_raw_include: failed with %s, len=%i\n", VAR_0, VAR_6);
  FUNC_6(VAR_4 + VAR_7, VAR_2, VAR_6 - VAR_7);
  VAR_4[VAR_6] = 0;
 }
 else
  FUNC_1("add_raw_include: unhandled include: %s\n", VAR_2);

 return FUNC_0(VAR_4);
}
