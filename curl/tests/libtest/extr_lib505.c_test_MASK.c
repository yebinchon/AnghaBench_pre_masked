
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
typedef int CURLcode ;
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
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 char* VAR_11 ;
 int VAR_12 ;
 char* FUNC_12 (int) ;
 int FUNC_13 (int *,int ,...) ;

int FUNC_14(char *VAR_13)
{
  CURL *VAR_14;
  CURLcode VAR_15 = VAR_0;
  FILE *VAR_16;
  int VAR_17;
  struct_stat VAR_18;
  struct curl_slist *VAR_19;

  struct curl_slist *VAR_20 = ((void*)0);
  const char *VAR_21 = "RNFR 505";
  const char *VAR_22 = "RNTO 505-forreal";

  if(!VAR_11) {
    FUNC_10(VAR_12, "Usage: <url> <file-to-upload>\n");
    return VAR_9;
  }

  VAR_16 = FUNC_9(VAR_11, "rb");
  if(((void*)0) == VAR_16) {
    FUNC_10(VAR_12, "fopen failed with error: %d %s\n",
            VAR_10, FUNC_12(VAR_10));
    FUNC_10(VAR_12, "Error opening file: %s\n", VAR_11);
    return VAR_8;
  }


  VAR_17 = FUNC_11(FUNC_8(VAR_16), &VAR_18);
  if(VAR_17 == -1) {

    FUNC_10(VAR_12, "fstat() failed with error: %d %s\n",
            VAR_10, FUNC_12(VAR_10));
    FUNC_10(VAR_12, "ERROR: cannot open file %s\n", VAR_11);
    FUNC_7(VAR_16);
    return VAR_8;
  }

  if(! VAR_18.st_size) {
    FUNC_10(VAR_12, "ERROR: file %s has zero size!\n", VAR_11);
    FUNC_7(VAR_16);
    return VAR_8;
  }

  if(FUNC_4(VAR_7) != VAR_0) {
    FUNC_10(VAR_12, "curl_global_init() failed\n");
    FUNC_7(VAR_16);
    return VAR_8;
  }


  VAR_14 = FUNC_1();
  if(!VAR_14) {
    FUNC_10(VAR_12, "curl_easy_init() failed\n");
    FUNC_3();
    FUNC_7(VAR_16);
    return VAR_8;
  }



  VAR_19 = FUNC_5(VAR_20, VAR_21);
  if(!VAR_19) {
    FUNC_10(VAR_12, "curl_slist_append() failed\n");
    FUNC_0(VAR_14);
    FUNC_3();
    FUNC_7(VAR_16);
    return VAR_8;
  }
  VAR_20 = FUNC_5(VAR_19, VAR_22);
  if(!VAR_20) {
    FUNC_10(VAR_12, "curl_slist_append() failed\n");
    FUNC_6(VAR_19);
    FUNC_0(VAR_14);
    FUNC_3();
    FUNC_7(VAR_16);
    return VAR_8;
  }
  VAR_20 = VAR_19;


  FUNC_13(VAR_14, VAR_4, 1L);


  FUNC_13(VAR_14, VAR_6, 1L);


  FUNC_13(VAR_14, VAR_5, VAR_13);


  FUNC_13(VAR_14, VAR_2, VAR_20);


  FUNC_13(VAR_14, VAR_3, VAR_16);


  FUNC_13(VAR_14, VAR_1,
                   (curl_off_t)VAR_18.st_size);


  VAR_15 = FUNC_2(VAR_14);

test_cleanup:


  FUNC_6(VAR_20);


  FUNC_7(VAR_16);

  FUNC_0(VAR_14);
  FUNC_3();

  return VAR_15;
}
