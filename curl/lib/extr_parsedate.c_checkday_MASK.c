
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const* const) ;
 char** VAR_3 ;

__attribute__((used)) static int FUNC_1(const char *VAR_4, size_t VAR_5)
{
  int VAR_6;
  const char * const *VAR_7;
  bool VAR_8 = VAR_1;
  if(VAR_5 > 3)
    VAR_7 = &VAR_3[0];
  else
    VAR_7 = &VAR_0[0];
  for(VAR_6 = 0; VAR_6<7; VAR_6++) {
    if(FUNC_0(VAR_4, VAR_7[0])) {
      VAR_8 = VAR_2;
      break;
    }
    VAR_7++;
  }
  return VAR_8?VAR_6:-1;
}
