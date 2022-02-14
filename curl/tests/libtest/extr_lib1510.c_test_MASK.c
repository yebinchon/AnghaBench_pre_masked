
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_url ;
typedef char curl_slist ;
typedef int dnsentry ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_10 (char*,int,char*,int,char*,...) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int VAR_9 ;

int FUNC_13(char *VAR_10)
{
  int VAR_11 = 0;
  CURL *VAR_12 = ((void*)0);
  int VAR_13;
  char VAR_14[256];
  char VAR_15[256];
  struct curl_slist *VAR_16 = ((void*)0), *VAR_17;
  char *VAR_18 = VAR_8;
  char *VAR_19 = VAR_7;

  (void)VAR_10;


  for(VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
    FUNC_10(VAR_15, sizeof(VAR_15), "server%d.example.com:%s:%s", VAR_13 + 1,
              VAR_18, VAR_19);
    FUNC_11("%s\n", VAR_15);
    VAR_17 = FUNC_4(VAR_16, VAR_15);
    if(!VAR_17) {
      FUNC_8(VAR_9, "curl_slist_append() failed\n");
      goto test_cleanup;
    }
    VAR_16 = VAR_17;
  }

  FUNC_12();

  FUNC_9(VAR_5);


  FUNC_6(VAR_12);


  FUNC_7(VAR_12, VAR_4, 1L);

  FUNC_7(VAR_12, VAR_0, 1L);

  FUNC_7(VAR_12, VAR_2, VAR_16);

  FUNC_7(VAR_12, VAR_1, 3L);


  for(VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {

    FUNC_10(VAR_14, sizeof(VAR_14),
              "http://server%d.example.com:%s/path/1510%04i",
              VAR_13 + 1, VAR_18, VAR_13 + 1);
    VAR_14[sizeof(VAR_14) - 1] = '\0';
    FUNC_7(VAR_12, VAR_3, VAR_14);

    VAR_11 = FUNC_2(VAR_12);

    FUNC_0();
  }

test_cleanup:



  FUNC_1(VAR_12);

  FUNC_5(VAR_16);

  FUNC_3();

  return VAR_11;
}
