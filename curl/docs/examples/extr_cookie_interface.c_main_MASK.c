
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nline ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,...) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int *) ;

int
FUNC_12(void)
{
  CURL *VAR_7;
  CURLcode VAR_8;

  FUNC_6(VAR_5);
  VAR_7 = FUNC_1();
  if(VAR_7) {
    char VAR_9[256];

    FUNC_3(VAR_7, VAR_3, "https://www.example.com/");
    FUNC_3(VAR_7, VAR_4, 1L);
    FUNC_3(VAR_7, VAR_1, "");
    VAR_8 = FUNC_2(VAR_7);
    if(VAR_8 != VAR_0) {
      FUNC_7(VAR_6, "Curl perform failed: %s\n", FUNC_4(VAR_8));
      return 1;
    }

    FUNC_8(VAR_7);

    FUNC_9("Erasing curl's knowledge of cookies!\n");
    FUNC_3(VAR_7, VAR_2, "ALL");

    FUNC_8(VAR_7);

    FUNC_9("-----------------------------------------------\n"
           "Setting a cookie \"PREF\" via cookie interface:\n");




    FUNC_10(VAR_9, sizeof(VAR_9), "%s\t%s\t%s\t%s\t%lu\t%s\t%s",
             ".example.com", "TRUE", "/", "FALSE",
             (unsigned long)FUNC_11(((void*)0)) + 31337UL,
             "PREF", "hello example, i like you very much!");
    VAR_8 = FUNC_3(VAR_7, VAR_2, VAR_9);
    if(VAR_8 != VAR_0) {
      FUNC_7(VAR_6, "Curl curl_easy_setopt failed: %s\n",
              FUNC_4(VAR_8));
      return 1;
    }







    FUNC_10(VAR_9, sizeof(VAR_9),
      "Set-Cookie: OLD_PREF=3d141414bf4209321; "
      "expires=Sun, 17-Jan-2038 19:14:07 GMT; path=/; domain=.example.com");
    VAR_8 = FUNC_3(VAR_7, VAR_2, VAR_9);
    if(VAR_8 != VAR_0) {
      FUNC_7(VAR_6, "Curl curl_easy_setopt failed: %s\n",
              FUNC_4(VAR_8));
      return 1;
    }

    FUNC_8(VAR_7);

    VAR_8 = FUNC_2(VAR_7);
    if(VAR_8 != VAR_0) {
      FUNC_7(VAR_6, "Curl perform failed: %s\n", FUNC_4(VAR_8));
      return 1;
    }

    FUNC_0(VAR_7);
  }
  else {
    FUNC_7(VAR_6, "Curl init failed!\n");
    return 1;
  }

  FUNC_5();
  return 0;
}
