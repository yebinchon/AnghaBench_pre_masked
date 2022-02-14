
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2,
                                      const char *VAR_3,
                                      char *VAR_4,
                                      size_t VAR_5,
                                      char VAR_6)
{
  char *VAR_7;
  size_t VAR_8;

  VAR_7 = FUNC_1(VAR_2, VAR_3);
  if(!VAR_7)
    return VAR_0;

  VAR_7 += FUNC_0(VAR_3);

  for(VAR_8 = 0; *VAR_7 && *VAR_7 != VAR_6 && VAR_8 < VAR_5 - 1; ++VAR_8)
    VAR_4[VAR_8] = *VAR_7++;
  VAR_4[VAR_8] = '\0';

  return VAR_1;
}
