
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_httppost {int dummy; } ;
struct WriteThis {void* sizeleft; void* readptr; } ;
typedef int curl_off_t ;
typedef int CURLcode ;
typedef scalar_t__ CURLFORMcode ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct curl_httppost**,struct curl_httppost**,int ,char*,int ,...) ;
 int FUNC_4 (struct curl_httppost*) ;
 int FUNC_5 () ;
 void* VAR_20 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int) ;
 long VAR_21 ;
 int VAR_22 ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (int *,int ,...) ;

__attribute__((used)) static int FUNC_10(char *VAR_23, bool VAR_24)
{
  CURL *VAR_25;
  CURLcode VAR_26 = VAR_0;
  CURLFORMcode VAR_27;

  struct curl_httppost *VAR_28 = ((void*)0);
  struct curl_httppost *VAR_29 = ((void*)0);
  struct WriteThis VAR_30;
  struct WriteThis VAR_31;

  VAR_30.readptr = VAR_20;
  VAR_30.sizeleft = FUNC_8(VAR_20);


  if(VAR_24) {
    VAR_27 = FUNC_3(&VAR_28,
                          &VAR_29,
                          VAR_8, "sendfile",
                          VAR_11, &VAR_30,
                          VAR_5, (long)VAR_30.sizeleft,
                          VAR_10, "postit2.c",
                          VAR_9);
  }
  else {

    VAR_27 = FUNC_3(&VAR_28,
                          &VAR_29,
                          VAR_8, "sendfile alternative",
                          VAR_11, &VAR_30,
                          VAR_4, (curl_off_t)VAR_30.sizeleft,
                          VAR_10, "file name 2",
                          VAR_9);
  }

  if(VAR_27)
    FUNC_7("curl_formadd(1) = %d\n", (int)VAR_27);




  VAR_31 = VAR_20;
  VAR_31 = FUNC_8(VAR_20);


  VAR_27 = FUNC_3(&VAR_28,
                        &VAR_29,
                        VAR_8, "callbackdata",
                        VAR_11, &VAR_31,
                        VAR_5, (long)VAR_31,
                        VAR_9);

  if(VAR_27)
    FUNC_7("curl_formadd(2) = %d\n", (int)VAR_27);


  VAR_27 = FUNC_3(&VAR_28,
                        &VAR_29,
                        VAR_8, "filename",






                        VAR_7, "postit2.c",

                        VAR_9);

  if(VAR_27)
    FUNC_7("curl_formadd(3) = %d\n", (int)VAR_27);


  VAR_27 = FUNC_3(&VAR_28,
                        &VAR_29,
                        VAR_8, "submit",





                        VAR_7, "send",

                        VAR_6, "text/plain",
                        VAR_9);

  if(VAR_27)
    FUNC_7("curl_formadd(4) = %d\n", (int)VAR_27);

  VAR_27 = FUNC_3(&VAR_28, &VAR_29,
                        VAR_8, "somename",
                        VAR_1, "somefile.txt",
                        VAR_3, "blah blah",
                        VAR_2, (long)9,
                        VAR_9);

  if(VAR_27)
    FUNC_7("curl_formadd(5) = %d\n", (int)VAR_27);

  VAR_25 = FUNC_1();
  if(!VAR_25) {
    FUNC_6(VAR_22, "curl_easy_init() failed\n");
    FUNC_4(VAR_28);
    FUNC_5();
    return VAR_19;
  }


  FUNC_9(VAR_25, VAR_17, VAR_23);


  FUNC_9(VAR_25, VAR_14, 1L);


  FUNC_9(VAR_25, VAR_15, (long)VAR_30.sizeleft);


  FUNC_9(VAR_25, VAR_16, VAR_21);


  FUNC_9(VAR_25, VAR_13, VAR_28);


  FUNC_9(VAR_25, VAR_18, 1L);


  FUNC_9(VAR_25, VAR_12, 1L);


  VAR_26 = FUNC_2(VAR_25);

test_cleanup:


  FUNC_0(VAR_25);


  FUNC_4(VAR_28);

  return VAR_26;
}
