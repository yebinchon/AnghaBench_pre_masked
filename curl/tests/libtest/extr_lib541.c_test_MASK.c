
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_size; } ;
typedef TYPE_1__ struct_stat ;
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
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 char* VAR_9 ;
 int VAR_10 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int *,int ,...) ;

int FUNC_12(char *VAR_11)
{
  CURL *VAR_12;
  CURLcode VAR_13 = VAR_0;
  FILE *VAR_14;
  int VAR_15;
  struct_stat VAR_16;

  if(!VAR_9) {
    FUNC_8(VAR_10, "Usage: <url> <file-to-upload>\n");
    return VAR_7;
  }

  VAR_14 = FUNC_7(VAR_9, "rb");
  if(((void*)0) == VAR_14) {
    FUNC_8(VAR_10, "fopen failed with error: %d %s\n",
            VAR_8, FUNC_10(VAR_8));
    FUNC_8(VAR_10, "Error opening file: %s\n", VAR_9);
    return -2;
  }


  VAR_15 = FUNC_9(FUNC_6(VAR_14), &VAR_16);
  if(VAR_15 == -1) {

    FUNC_8(VAR_10, "fstat() failed with error: %d %s\n",
            VAR_8, FUNC_10(VAR_8));
    FUNC_8(VAR_10, "ERROR: cannot open file %s\n", VAR_9);
    FUNC_5(VAR_14);
    return VAR_6;
  }

  if(! VAR_16.st_size) {
    FUNC_8(VAR_10, "ERROR: file %s has zero size!\n", VAR_9);
    FUNC_5(VAR_14);
    return VAR_6;
  }

  if(FUNC_4(VAR_5) != VAR_0) {
    FUNC_8(VAR_10, "curl_global_init() failed\n");
    FUNC_5(VAR_14);
    return VAR_6;
  }


  VAR_12 = FUNC_1();
  if(!VAR_12) {
    FUNC_8(VAR_10, "curl_easy_init() failed\n");
    FUNC_3();
    FUNC_5(VAR_14);
    return VAR_6;
  }


  FUNC_11(VAR_12, VAR_2, 1L);


  FUNC_11(VAR_12, VAR_4, 1L);


  FUNC_11(VAR_12, VAR_3, VAR_11);


  FUNC_11(VAR_12, VAR_1, VAR_14);


  FUNC_2(VAR_12);



  VAR_13 = FUNC_2(VAR_12);

test_cleanup:


  FUNC_5(VAR_14);

  FUNC_0(VAR_12);
  FUNC_3();

  return VAR_13;
}
