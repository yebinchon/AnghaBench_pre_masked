
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*,char const) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_2, const char *VAR_3)
{





  if(VAR_3 && VAR_3[0]) {
    size_t VAR_4;
    size_t VAR_5;
    const char *VAR_6 = ", ";
    size_t VAR_7;
    size_t VAR_8;
    char *VAR_9;
    if(FUNC_0("*", VAR_3)) {
      return VAR_1;
    }



    VAR_7 = FUNC_2(VAR_3);
    if(VAR_2[0] == '[') {

      VAR_9 = FUNC_1(VAR_2, ']');
      if(!VAR_9)
        return VAR_0;
      VAR_2++;
      VAR_8 = VAR_9 - VAR_2;
    }
    else
      VAR_8 = FUNC_2(VAR_2);

    for(VAR_4 = 0; VAR_4 < VAR_7; VAR_4 = VAR_5 + 1) {
      while(VAR_4 < VAR_7 &&
            FUNC_1(VAR_6, VAR_3[VAR_4]) != ((void*)0)) {

        ++VAR_4;
      }

      if(VAR_4 == VAR_7)
        break;

      for(VAR_5 = VAR_4; VAR_5 < VAR_7 &&
            FUNC_1(VAR_6, VAR_3[VAR_5]) == ((void*)0); ++VAR_5)

        ;





      if(VAR_3[VAR_4] == '.')
        ++VAR_4;

      if((VAR_5 - VAR_4) <= VAR_8) {

        const char *VAR_10 = VAR_2 + VAR_8 - (VAR_5 - VAR_4);
        if(FUNC_3(VAR_3 + VAR_4, VAR_10,
                           VAR_5 - VAR_4)) {
          if((VAR_5 - VAR_4) == VAR_8 || *(VAR_10 - 1) == '.') {



            return VAR_1;
          }
        }
      }
    }

  }

  return VAR_0;
}
