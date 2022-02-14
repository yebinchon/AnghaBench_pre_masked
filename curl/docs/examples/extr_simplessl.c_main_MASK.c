
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_13 ;

int FUNC_9(void)
{
  CURL *VAR_14;
  CURLcode VAR_15;
  FILE *VAR_16;
  const char *VAR_17 = ((void*)0);

  static const char *VAR_18 = "testcert.pem";
  static const char *VAR_19 = "cacert.pem";
  static const char *VAR_20 = "dumpit";

  const char *VAR_21;
  const char *VAR_22;

  const char *VAR_23;






  VAR_21 = "testkey.pem";
  VAR_22 = "PEM";
  VAR_23 = ((void*)0);


  VAR_16 = FUNC_7(VAR_20, "wb");

  FUNC_6(VAR_12);

  VAR_14 = FUNC_1();
  if(VAR_14) {

    FUNC_3(VAR_14, VAR_11, "HTTPS://your.favourite.ssl.site");
    FUNC_3(VAR_14, VAR_2, VAR_16);

    do {
      if(VAR_23) {

        if(FUNC_3(VAR_14, VAR_6, VAR_23) != VAR_0) {

          FUNC_8(VAR_13, "can't set crypto engine\n");
          break;
        }
        if(FUNC_3(VAR_14, VAR_7, 1L) != VAR_0) {



          FUNC_8(VAR_13, "can't set crypto engine as default\n");
          break;
        }
      }


      FUNC_3(VAR_14, VAR_5, "PEM");


      FUNC_3(VAR_14, VAR_4, VAR_18);



      if(VAR_17)
        FUNC_3(VAR_14, VAR_3, VAR_17);



      FUNC_3(VAR_14, VAR_9, VAR_22);


      FUNC_3(VAR_14, VAR_8, VAR_21);


      FUNC_3(VAR_14, VAR_1, VAR_19);


      FUNC_3(VAR_14, VAR_10, 1L);


      VAR_15 = FUNC_2(VAR_14);

      if(VAR_15 != VAR_0)
        FUNC_8(VAR_13, "curl_easy_perform() failed: %s\n",
                FUNC_4(VAR_15));


    } while(0);

    FUNC_0(VAR_14);
  }

  FUNC_5();

  return 0;
}
