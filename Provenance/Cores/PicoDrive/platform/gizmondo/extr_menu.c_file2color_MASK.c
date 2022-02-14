
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rom_exts ;
typedef int other_exts ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static unsigned short FUNC_2(const char *VAR_0)
{
 const char *VAR_1 = VAR_0 + FUNC_1(VAR_0) - 3;
 static const char *VAR_2[] = { "zip", "bin", "smd", "gen", "iso", "cso" };
 static const char *VAR_3[] = { "gmv", "pat" };
 int VAR_4;

 if (VAR_1 < VAR_0) VAR_1 = VAR_0;
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_4++)
  if (FUNC_0(VAR_1, VAR_2[VAR_4]) == 0) return 0xbdff;
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_4++)
  if (FUNC_0(VAR_1, VAR_3[VAR_4]) == 0) return 0xaff5;
 return 0xffff;
}
