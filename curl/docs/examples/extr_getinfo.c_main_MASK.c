
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char**) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(void)
{
  CURL *VAR_3;
  CURLcode VAR_4;

  VAR_3 = FUNC_2();
  if(VAR_3) {
    FUNC_4(VAR_3, VAR_2, "https://www.example.com/");
    VAR_4 = FUNC_3(VAR_3);

    if(VAR_0 == VAR_4) {
      char *VAR_5;

      VAR_4 = FUNC_1(VAR_3, VAR_1, &VAR_5);

      if((VAR_0 == VAR_4) && VAR_5)
        FUNC_5("We received Content-Type: %s\n", VAR_5);
    }


    FUNC_0(VAR_3);
  }
  return 0;
}
