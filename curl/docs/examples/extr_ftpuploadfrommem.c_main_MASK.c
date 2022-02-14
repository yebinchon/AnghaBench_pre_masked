
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {scalar_t__ sizeleft; int readptr; } ;
typedef long curl_off_t ;
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
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int ,char*,char*) ;
 long VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(void)
{
  CURL *VAR_12;
  CURLcode VAR_13;

  struct WriteThis VAR_14;

  VAR_14.readptr = VAR_9;
  VAR_14.sizeleft = FUNC_8(VAR_9);


  VAR_13 = FUNC_6(VAR_8);

  if(VAR_13 != VAR_0) {
    FUNC_7(VAR_11, "curl_global_init() failed: %s\n",
            FUNC_4(VAR_13));
    return 1;
  }


  VAR_12 = FUNC_1();
  if(VAR_12) {

    FUNC_3(VAR_12, VAR_5,
                     "ftp://example.com/path/to/upload/file");


    FUNC_3(VAR_12, VAR_6, "login:secret");


    FUNC_3(VAR_12, VAR_4, 1L);


    FUNC_3(VAR_12, VAR_3, VAR_10);


    FUNC_3(VAR_12, VAR_2, &VAR_14);


    FUNC_3(VAR_12, VAR_7, 1L);


    FUNC_3(VAR_12, VAR_1,
                     (curl_off_t)VAR_14.sizeleft);


    VAR_13 = FUNC_2(VAR_12);

    if(VAR_13 != VAR_0)
      FUNC_7(VAR_11, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_13));


    FUNC_0(VAR_12);
  }
  FUNC_5();
  return 0;
}
