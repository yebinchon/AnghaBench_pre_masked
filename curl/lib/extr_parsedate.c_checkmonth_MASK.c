
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const* const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3)
{
  int VAR_4;
  const char * const *VAR_5;
  bool VAR_6 = VAR_1;

  VAR_5 = &VAR_0[0];
  for(VAR_4 = 0; VAR_4<12; VAR_4++) {
    if(FUNC_0(VAR_3, VAR_5[0])) {
      VAR_6 = VAR_2;
      break;
    }
    VAR_5++;
  }
  return VAR_6?VAR_4:-1;
}
