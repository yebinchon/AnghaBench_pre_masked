
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
struct WriteThis {int freecount; scalar_t__ sizeleft; int readptr; } ;
typedef scalar_t__ curl_off_t ;
typedef int curl_mimepart ;
typedef char curl_mime ;
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
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,scalar_t__,int ,int *,int ,struct WriteThis*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,struct curl_slist*,int ) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*) ;
 struct curl_slist* FUNC_16 (struct curl_slist*,char*) ;
 int VAR_10 ;
 int FUNC_17 (int ,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int *,int ,...) ;

int FUNC_20(char *VAR_14)
{
  CURL *VAR_15 = ((void*)0);
  CURL *VAR_16 = ((void*)0);
  curl_mime *VAR_17 = ((void*)0);
  curl_mimepart *VAR_18;
  struct curl_slist *VAR_19 = ((void*)0);
  CURLcode VAR_20;
  int VAR_21 = VAR_7;
  struct WriteThis VAR_22;






  if(FUNC_5(VAR_5) != VAR_0) {
    FUNC_17(VAR_13, "curl_global_init() failed\n");
    return VAR_8;
  }

  VAR_15 = FUNC_2();


  FUNC_19(VAR_15, VAR_3, VAR_14);


  FUNC_19(VAR_15, VAR_4, 1L);


  FUNC_19(VAR_15, VAR_1, 1L);


  VAR_22.readptr = VAR_10;
  VAR_22.sizeleft = (curl_off_t) FUNC_18(VAR_10);
  VAR_22.freecount = 0;


  VAR_17 = FUNC_13(VAR_15);
  VAR_18 = FUNC_6(VAR_17);
  FUNC_7(VAR_18, "hello", VAR_6);
  FUNC_14(VAR_18, "greeting");
  FUNC_15(VAR_18, "application/X-Greeting");
  FUNC_9(VAR_18, "base64");
  VAR_19 = FUNC_16(VAR_19, "X-Test-Number: 654");
  FUNC_12(VAR_18, VAR_19, VAR_9);
  VAR_18 = FUNC_6(VAR_17);
  FUNC_10(VAR_18, "log/file654.txt");
  VAR_18 = FUNC_6(VAR_17);
  FUNC_8(VAR_18, (curl_off_t) -1, VAR_12, ((void*)0), VAR_11,
                    &VAR_22);


  FUNC_19(VAR_15, VAR_2, VAR_17);


  VAR_16 = FUNC_1(VAR_15);
  if(!VAR_16) {
    FUNC_17(VAR_13, "curl_easy_duphandle() failed\n");
    VAR_21 = VAR_7;
    goto test_cleanup;
  }



  FUNC_11(VAR_17);
  VAR_17 = ((void*)0);


  VAR_20 = FUNC_3(VAR_15);
  if(VAR_20) {
    FUNC_17(VAR_13, "curl_easy_perform(original) failed\n");
    VAR_21 = (int) VAR_20;
    goto test_cleanup;
  }



  VAR_20 = FUNC_3(VAR_16);
  if(VAR_20) {
    FUNC_17(VAR_13, "curl_easy_perform(duplicated) failed\n");
    VAR_21 = (int) VAR_20;
    goto test_cleanup;
  }




  FUNC_0(VAR_16);
  VAR_16 = ((void*)0);

  if(VAR_22.freecount != 2) {
    FUNC_17(VAR_13, "free_callback() called %d times instead of 2\n",
            VAR_22.freecount);
    VAR_21 = VAR_7;
    goto test_cleanup;
  }

test_cleanup:
  FUNC_0(VAR_15);
  FUNC_0(VAR_16);
  FUNC_11(VAR_17);
  FUNC_4();
  return VAR_21;
}
