
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,...) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(char *VAR_5)
{
  CURLcode VAR_6;
  int VAR_7 = 99;

  VAR_6 = FUNC_6(VAR_4);
  if(VAR_6 == VAR_0) {
    CURL *VAR_8 = FUNC_2();
    if(VAR_8) {
      CURL *VAR_9;

      FUNC_4(VAR_8, VAR_3, 1L);
      FUNC_4(VAR_8, VAR_1, 1L);

      VAR_9 = FUNC_1(VAR_8);
      if(VAR_9) {

        VAR_6 = FUNC_4(VAR_9, VAR_2, VAR_5);
        if(VAR_6 == VAR_0) {

          VAR_6 = FUNC_3(VAR_9);
          if(VAR_6 == VAR_0)
            VAR_7 = 0;
          else
            VAR_7 = 1;
        }
        else
          VAR_7 = 2;

        FUNC_0(VAR_9);
      }
      else
        VAR_7 = 3;

      FUNC_0(VAR_8);
    }
    else
      VAR_7 = 4;

    FUNC_5();
  }
  else
    VAR_7 = 5;

  return VAR_7;
}
