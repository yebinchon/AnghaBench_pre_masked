
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_size; } ;
typedef TYPE_1__ struct_stat ;
typedef char curl_slist ;
typedef char* curl_off_t ;
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
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (char*,int ) ;
 int VAR_17 ;
 char* VAR_18 ;
 char* FUNC_14 (char*,int ) ;
 int FUNC_15 (int *,int ,...) ;

int FUNC_16(char *VAR_19)
{
  int VAR_20;
  CURL *VAR_21;
  int VAR_22;
  FILE *VAR_23 = ((void*)0);
  struct_stat VAR_24;
  char *VAR_25 = ((void*)0);
  int VAR_26 = 1;
  struct curl_slist *VAR_27 = ((void*)0);

  if(FUNC_5(VAR_11) != VAR_0) {
    FUNC_10(VAR_17, "curl_global_init() failed\n");
    return VAR_16;
  }

  VAR_21 = FUNC_2();
  if(!VAR_21) {
    FUNC_10(VAR_17, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_16;
  }

  FUNC_15(VAR_21, VAR_1, VAR_18);
  FUNC_15(VAR_21, VAR_10, VAR_18);

  FUNC_15(VAR_21, VAR_9, VAR_19);

  VAR_25 = FUNC_14(VAR_19, VAR_26++);
  if(!VAR_25) {
    VAR_20 = VAR_16;
    goto test_cleanup;
  }
  FUNC_15(VAR_21, VAR_7, VAR_25);
  FUNC_11(VAR_25);
  VAR_25 = ((void*)0);

  VAR_22 = FUNC_13("log/file568.txt", VAR_15);
  FUNC_12(VAR_22, &VAR_24);
  FUNC_0(VAR_22);

  VAR_23 = FUNC_9("log/file568.txt", "rb");
  if(VAR_23 == ((void*)0)) {
    FUNC_10(VAR_17, "can't open log/file568.txt\n");
    VAR_20 = VAR_16;
    goto test_cleanup;
  }
  FUNC_15(VAR_21, VAR_6, VAR_12);

  FUNC_15(VAR_21, VAR_4, VAR_23);
  FUNC_15(VAR_21, VAR_8, 1L);
  FUNC_15(VAR_21, VAR_2, (curl_off_t) VAR_24.st_size);


  VAR_20 = FUNC_3(VAR_21);
  if(VAR_20)
    goto test_cleanup;

  FUNC_15(VAR_21, VAR_8, 0L);
  FUNC_8(VAR_23);
  VAR_23 = ((void*)0);


  VAR_25 = FUNC_14(VAR_19, VAR_26++);
  if(!VAR_25) {
    VAR_20 = VAR_16;
    goto test_cleanup;
  }
  FUNC_15(VAR_21, VAR_7, VAR_25);
  FUNC_11(VAR_25);
  VAR_25 = ((void*)0);

  FUNC_15(VAR_21, VAR_6, VAR_13);
  VAR_20 = FUNC_3(VAR_21);
  if(VAR_20)
    goto test_cleanup;



  VAR_25 = FUNC_14(VAR_19, VAR_26++);
  if(!VAR_25) {
    VAR_20 = VAR_16;
    goto test_cleanup;
  }
  FUNC_15(VAR_21, VAR_7, VAR_25);
  FUNC_11(VAR_25);
  VAR_25 = ((void*)0);

  VAR_27 = FUNC_6(VAR_27,
                                     "Content-Type: posty goodness");
  if(!VAR_27) {
    VAR_20 = VAR_16;
    goto test_cleanup;
  }
  FUNC_15(VAR_21, VAR_5, VAR_27);
  FUNC_15(VAR_21, VAR_6, VAR_12);
  FUNC_15(VAR_21, VAR_3,
              "postyfield=postystuff&project=curl\n");

  VAR_20 = FUNC_3(VAR_21);
  if(VAR_20)
    goto test_cleanup;

  FUNC_15(VAR_21, VAR_3, ((void*)0));
  FUNC_15(VAR_21, VAR_5, ((void*)0));
  FUNC_7(VAR_27);
  VAR_27 = ((void*)0);


  VAR_25 = FUNC_14(VAR_19, VAR_26++);
  if(!VAR_25) {
    VAR_20 = VAR_16;
    goto test_cleanup;
  }
  FUNC_15(VAR_21, VAR_7, VAR_25);
  FUNC_11(VAR_25);
  VAR_25 = ((void*)0);

  FUNC_15(VAR_21, VAR_6, VAR_14);
  VAR_20 = FUNC_3(VAR_21);

test_cleanup:

  if(VAR_23)
    FUNC_8(VAR_23);

  FUNC_11(VAR_25);

  if(VAR_27)
    FUNC_7(VAR_27);

  FUNC_1(VAR_21);
  FUNC_4();

  return VAR_20;
}
