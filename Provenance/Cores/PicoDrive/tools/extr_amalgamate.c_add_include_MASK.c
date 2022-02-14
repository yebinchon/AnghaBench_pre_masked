
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int processed_inc ;


 int FUNC_0 (char*) ;
 char const** VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_1)
{
 int VAR_2;
 char VAR_3[128+4];


 FUNC_2(VAR_3, sizeof(VAR_3), (VAR_1[0] != '<') ? "\"%s\"" : "%s", VAR_1);


 for (VAR_2 = 0; VAR_0[VAR_2] && VAR_2 < 128; VAR_2++)
 {
  if (FUNC_3(VAR_3, VAR_0[VAR_2]) == 0) break;
 }
 if (VAR_2 == 128) FUNC_0("add_include: includes overflowed\n");
 if (VAR_0[VAR_2] != ((void*)0))
 {
  FUNC_1("already have: %s\n", VAR_3);
  return ((void*)0);
 }
 else
 {
  FUNC_1("adding: %s\n", VAR_3);
  VAR_0[VAR_2] = FUNC_4(VAR_3);
  if (VAR_0[VAR_2] == ((void*)0)) FUNC_0("add_include: OOM\n");
  return VAR_0[VAR_2];
 }
}
