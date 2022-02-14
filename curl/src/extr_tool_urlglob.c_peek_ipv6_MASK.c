
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(const char *VAR_2, size_t *VAR_3)
{





  size_t VAR_4 = 0;
  size_t VAR_5 = 0;
  if(VAR_2[VAR_4++] != '[') {
    return VAR_0;
  }
  for(;;) {
    const char VAR_6 = VAR_2[VAR_4++];
    if(FUNC_0(VAR_6) || VAR_6 == '.' || VAR_6 == '%') {

    }
    else if(VAR_6 == ':') {
      VAR_5++;
    }
    else if(VAR_6 == ']') {
      *VAR_3 = VAR_4;
      return VAR_5 >= 2 ? VAR_1 : VAR_0;
    }
    else {
      return VAR_0;
    }
  }
}
