
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_1 ;

bool FUNC_3(const char *VAR_2, char *VAR_3, size_t VAR_4)
{
  size_t VAR_5;




  for(VAR_5 = 0; VAR_5 < VAR_4 && VAR_2[VAR_5]; ++VAR_5) {
    char VAR_6 = VAR_2[VAR_5];
    if((VAR_6 == ':') && (VAR_2[VAR_5 + 1] == '/')) {
      if(VAR_3)
        VAR_3[VAR_5] = 0;
      return VAR_1;
    }



    else if(FUNC_0(VAR_6) || (VAR_6 == '+') || (VAR_6 == '-') || (VAR_6 == '.') ) {
      if(VAR_3)
        VAR_3[VAR_5] = (char)FUNC_2(VAR_6);
    }
    else
      break;
  }
  return VAR_0;
}
