
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,...) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,char*) ;
 int VAR_4 ;

int FUNC_8(void)
{
  CURL *VAR_5;
  CURLcode VAR_6;
  char *VAR_7;
  long VAR_8;

  VAR_5 = FUNC_2();
  if(VAR_5) {
    FUNC_4(VAR_5, VAR_3, "https://example.com");




    VAR_6 = FUNC_3(VAR_5);

    if(VAR_6 != VAR_0)
      FUNC_6(VAR_4, "curl_easy_perform() failed: %s\n",
              FUNC_5(VAR_6));
    else {
      VAR_6 = FUNC_1(VAR_5, VAR_2, &VAR_8);
      if((VAR_6 == VAR_0) &&
         ((VAR_8 / 100) != 3)) {

        FUNC_6(VAR_4, "Not a redirect.\n");
      }
      else {
        VAR_6 = FUNC_1(VAR_5, VAR_1, &VAR_7);

        if((VAR_6 == VAR_0) && VAR_7) {


          FUNC_7("Redirected to: %s\n", VAR_7);
        }
      }
    }


    FUNC_0(VAR_5);
  }
  return 0;
}
