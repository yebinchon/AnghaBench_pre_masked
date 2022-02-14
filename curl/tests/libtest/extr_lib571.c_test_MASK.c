
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char FILE ;
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
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 char* FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,int ,...) ;

int FUNC_11(char *VAR_19)
{
  int VAR_20;
  CURL *VAR_21;
  char *VAR_22 = ((void*)0);
  int VAR_23 = 1;

  FILE *VAR_24 = FUNC_6(VAR_15, "wb");
  if(VAR_24 == ((void*)0)) {
    FUNC_7(VAR_18, "Couldn't open the protocol dump file\n");
    return VAR_14;
  }

  if(FUNC_4(VAR_9) != VAR_0) {
    FUNC_7(VAR_18, "curl_global_init() failed\n");
    FUNC_5(VAR_24);
    return VAR_14;
  }

  VAR_21 = FUNC_1();
  if(!VAR_21) {
    FUNC_7(VAR_18, "curl_easy_init() failed\n");
    FUNC_5(VAR_24);
    FUNC_3();
    return VAR_14;
  }
  FUNC_10(VAR_21, VAR_6, VAR_19);

  VAR_22 = FUNC_9(VAR_19, VAR_23++);
  if(!VAR_22) {
    VAR_20 = VAR_14;
    goto test_cleanup;
  }
  FUNC_10(VAR_21, VAR_3, VAR_22);
  FUNC_8(VAR_22);
  VAR_22 = ((void*)0);

  FUNC_10(VAR_21, VAR_1, VAR_17);
  FUNC_10(VAR_21, VAR_5, 3L);
  FUNC_10(VAR_21, VAR_7, 1L);
  FUNC_10(VAR_21, VAR_8, VAR_24);

  FUNC_10(VAR_21, VAR_4, "RTP/AVP/TCP;interleaved=0-1");
  FUNC_10(VAR_21, VAR_2, VAR_13);

  VAR_20 = FUNC_2(VAR_21);
  if(VAR_20)
    goto test_cleanup;


  VAR_22 = FUNC_9(VAR_19, VAR_23++);
  if(!VAR_22) {
    VAR_20 = VAR_14;
    goto test_cleanup;
  }
  FUNC_10(VAR_21, VAR_3, VAR_22);
  FUNC_8(VAR_22);
  VAR_22 = ((void*)0);
  FUNC_10(VAR_21, VAR_2, VAR_11);

  VAR_20 = FUNC_2(VAR_21);
  if(VAR_20)
    goto test_cleanup;


  VAR_22 = FUNC_9(VAR_19, VAR_23++);
  if(!VAR_22) {
    VAR_20 = VAR_14;
    goto test_cleanup;
  }
  FUNC_10(VAR_21, VAR_3, VAR_22);
  FUNC_8(VAR_22);
  VAR_22 = ((void*)0);
  FUNC_10(VAR_21, VAR_2, VAR_10);

  VAR_20 = FUNC_2(VAR_21);
  if(VAR_20)
    goto test_cleanup;

  VAR_22 = FUNC_9(VAR_19, VAR_23++);
  if(!VAR_22) {
    VAR_20 = VAR_14;
    goto test_cleanup;
  }
  FUNC_10(VAR_21, VAR_3, VAR_22);
  FUNC_8(VAR_22);
  VAR_22 = ((void*)0);
  FUNC_10(VAR_21, VAR_2, VAR_11);

  VAR_20 = FUNC_2(VAR_21);
  if(VAR_20)
    goto test_cleanup;

  FUNC_7(VAR_18, "PLAY COMPLETE\n");


  while(!VAR_20 && VAR_16 < 13) {
    FUNC_7(VAR_18, "LOOPY LOOP!\n");
    FUNC_10(VAR_21, VAR_2, VAR_12);
    VAR_20 = FUNC_2(VAR_21);
  }

test_cleanup:
  FUNC_8(VAR_22);

  if(VAR_24)
    FUNC_5(VAR_24);

  FUNC_0(VAR_21);
  FUNC_3();

  return VAR_20;
}
