
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_mimepart ;
typedef int curl_mime ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
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
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int ,int ,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int*) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 () ;
 long VAR_12 ;

int FUNC_19(char *VAR_13)
{
  CURL *VAR_14 = ((void*)0);
  CURLM *VAR_15 = ((void*)0);
  int VAR_16;
  int VAR_17 = 0;
  int VAR_18 = 0;
  curl_mimepart *VAR_19 = ((void*)0);
  curl_mime *VAR_20 = ((void*)0);
  int VAR_21 = 1;

  FUNC_18();

  FUNC_13(VAR_8);

  FUNC_15(VAR_15);

  FUNC_11(VAR_14);

  VAR_20 = FUNC_6(VAR_14);
  VAR_19 = FUNC_3(VAR_20);
  FUNC_7(VAR_19, "name");
  FUNC_4(VAR_19, "value", VAR_9);

  FUNC_12(VAR_14, VAR_4, VAR_13);
  FUNC_12(VAR_14, VAR_1, 1L);
  FUNC_12(VAR_14, VAR_6, 1L);
  FUNC_12(VAR_14, VAR_2, VAR_20);
  FUNC_12(VAR_14, VAR_5, "u:s");
  FUNC_12(VAR_14, VAR_7, VAR_12);
  FUNC_12(VAR_14, VAR_3, 1L);

  FUNC_14(VAR_15, VAR_14);

  FUNC_16(VAR_15, &VAR_16);

  FUNC_0();

  while(VAR_16 && VAR_21--) {
    int VAR_22;
    VAR_18 = FUNC_10(VAR_15, ((void*)0), 0, VAR_11, &VAR_22);
    if(VAR_18 != VAR_0) {
      FUNC_17("curl_multi_wait() returned %d\n", VAR_18);
      VAR_18 = VAR_10;
      goto test_cleanup;
    }

    FUNC_0();

    FUNC_16(VAR_15, &VAR_16);

    FUNC_0();
  }

test_cleanup:

  FUNC_5(VAR_20);
  FUNC_9(VAR_15, VAR_14);
  FUNC_8(VAR_15);
  FUNC_1(VAR_14);
  FUNC_2();

  if(VAR_18)
    VAR_17 = VAR_18;

  return VAR_17;
}
