
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**) ;
 char const** VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static unsigned short FUNC_4(const char *VAR_1)
{
 static const char *VAR_2[] = { "gmv", "pat" };
 const char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, '.');
 if (VAR_3++ == ((void*)0)) {
  VAR_3 = VAR_1 + FUNC_2(VAR_1) - 3;
  if (VAR_3 < VAR_1) VAR_3 = VAR_1;
 }

 for (VAR_4 = 0; VAR_0[VAR_4] != ((void*)0); VAR_4++)
  if (FUNC_1(VAR_3, VAR_0[VAR_4]) == 0) return 0xbdff;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  if (FUNC_1(VAR_3, VAR_2[VAR_4]) == 0) return 0xaff5;
 return 0xffff;
}
