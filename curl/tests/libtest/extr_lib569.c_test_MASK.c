
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char**) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 char* FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,int ,...) ;

int FUNC_12(char *VAR_18)
{
  int VAR_19;
  CURL *VAR_20;
  char *VAR_21 = ((void*)0);
  char *VAR_22;
  int VAR_23 = 1;
  int VAR_24;

  FILE *VAR_25 = FUNC_7(VAR_15, "wb");
  if(VAR_25 == ((void*)0)) {
    FUNC_8(&VAR_16, "couldn't open the Session ID File\n");
    return VAR_14;
  }

  if(FUNC_5(VAR_11) != VAR_1) {
    FUNC_8(&VAR_16, "curl_global_init() failed\n");
    FUNC_6(VAR_25);
    return VAR_14;
  }

  VAR_20 = FUNC_2();
  if(!VAR_20) {
    FUNC_8(&VAR_16, "curl_easy_init() failed\n");
    FUNC_4();
    FUNC_6(VAR_25);
    return VAR_14;
  }

  FUNC_11(VAR_20, VAR_3, VAR_17);
  FUNC_11(VAR_20, VAR_10, VAR_17);
  FUNC_11(VAR_20, VAR_9, 1L);

  FUNC_11(VAR_20, VAR_8, VAR_18);

  FUNC_11(VAR_20, VAR_4, VAR_12);
  VAR_19 = FUNC_3(VAR_20);
  if(VAR_19 != (int)VAR_0) {
    FUNC_8(&VAR_16, "This should have failed. "
            "Cannot setup without a Transport: header");
    VAR_19 = VAR_14;
    goto test_cleanup;
  }


  for(VAR_24 = 0; VAR_24 < 3; VAR_24++) {
    VAR_21 = FUNC_10(VAR_18, VAR_23++);
    if(!VAR_21) {
      VAR_19 = VAR_14;
      goto test_cleanup;
    }
    FUNC_11(VAR_20, VAR_6, VAR_21);
    FUNC_9(VAR_21);
    VAR_21 = ((void*)0);

    FUNC_11(VAR_20, VAR_4, VAR_12);
    FUNC_11(VAR_20, VAR_7,
                "Fake/NotReal/JustATest;foo=baz");
    VAR_19 = FUNC_3(VAR_20);
    if(VAR_19)
      goto test_cleanup;

    FUNC_1(VAR_20, VAR_2, &VAR_22);
    FUNC_8(VAR_25, "Got Session ID: [%s]\n", VAR_22);
    VAR_22 = ((void*)0);

    VAR_21 = FUNC_10(VAR_18, VAR_23++);
    if(!VAR_21) {
      VAR_19 = VAR_14;
      goto test_cleanup;
    }
    FUNC_11(VAR_20, VAR_6, VAR_21);
    FUNC_9(VAR_21);
    VAR_21 = ((void*)0);

    FUNC_11(VAR_20, VAR_4, VAR_13);
    VAR_19 = FUNC_3(VAR_20);


    FUNC_11(VAR_20, VAR_5, ((void*)0));
  }

test_cleanup:

  if(VAR_25)
    FUNC_6(VAR_25);

  FUNC_9(VAR_21);
  FUNC_0(VAR_20);
  FUNC_4();

  return VAR_19;
}
