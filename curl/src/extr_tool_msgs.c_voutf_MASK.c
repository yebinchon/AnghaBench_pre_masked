
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct GlobalConfig {int errors; int mute; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,size_t,int,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(struct GlobalConfig *VAR_0,
                  const char *VAR_1,
                  const char *VAR_2,
                  va_list VAR_3)
{
  size_t VAR_4 = (79 - FUNC_5(VAR_1));
  if(!VAR_0->mute) {
    size_t VAR_5;
    char *VAR_6;
    char *VAR_7;

    VAR_7 = FUNC_2(VAR_2, VAR_3);
    if(!VAR_7)
      return;
    VAR_5 = FUNC_5(VAR_7);

    VAR_6 = VAR_7;
    while(VAR_5 > 0) {
      FUNC_3(VAR_1, VAR_0->errors);

      if(VAR_5 > VAR_4) {
        size_t VAR_8 = VAR_4-1;

        while(!FUNC_0(VAR_6[VAR_8]) && VAR_8) {
          VAR_8--;
        }
        if(0 == VAR_8)


          VAR_8 = VAR_4-1;

        (void)FUNC_4(VAR_6, VAR_8 + 1, 1, VAR_0->errors);
        FUNC_3("\n", VAR_0->errors);
        VAR_6 += VAR_8 + 1;
        VAR_5 -= VAR_8 + 1;
      }
      else {
        FUNC_3(VAR_6, VAR_0->errors);
        VAR_5 = 0;
      }
    }
    FUNC_1(VAR_7);
  }
}
