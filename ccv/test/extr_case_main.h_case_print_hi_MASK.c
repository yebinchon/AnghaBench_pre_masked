
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const* const) ;
 int FUNC_1 (char) ;
 size_t FUNC_2 (char const* const) ;
 char* FUNC_3 (char*,char const* const) ;

__attribute__((used)) static int FUNC_4(char* VAR_0, const char* const VAR_1)
{
 if (!VAR_1)
  return FUNC_0("%s", VAR_0);
 const size_t VAR_2 = FUNC_2(VAR_1);
 char* VAR_3 = FUNC_3(VAR_0, VAR_1);
 int VAR_4 = 0;
 while (VAR_3)
 {
  for (;VAR_0 < VAR_3; ++VAR_0, ++VAR_4)
   FUNC_1(VAR_0[0]);
  VAR_4 += FUNC_0("\033[7m%s\033[0m", VAR_1);
  VAR_0 += VAR_2;
  VAR_3 = FUNC_3(VAR_0, VAR_1);
 }
 VAR_4 += FUNC_0("%s", VAR_0);
 return VAR_4;
}
