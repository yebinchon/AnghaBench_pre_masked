
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef char curl_slist ;
typedef char curl_httppost ;
typedef int fd_set ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,...) ;
 int FUNC_5 (char**,char**,int ,char*,int ,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *,int*) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *,long*) ;
 char* FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,scalar_t__) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int,int *,int *,int *,struct timeval*) ;
 int VAR_9 ;

int FUNC_18(void)
{
  CURL *VAR_10;

  CURLM *VAR_11;
  int VAR_12 = 0;

  struct curl_httppost *VAR_13 = ((void*)0);
  struct curl_httppost *VAR_14 = ((void*)0);
  struct curl_slist *VAR_15 = ((void*)0);
  static const char VAR_16[] = "Expect:";



  FUNC_5(&VAR_13,
               &VAR_14,
               VAR_1, "sendfile",
               VAR_3, "postit2.c",
               VAR_2);


  FUNC_5(&VAR_13,
               &VAR_14,
               VAR_1, "filename",
               VAR_0, "postit2.c",
               VAR_2);


  FUNC_5(&VAR_13,
               &VAR_14,
               VAR_1, "submit",
               VAR_0, "send",
               VAR_2);

  VAR_10 = FUNC_3();
  VAR_11 = FUNC_10();



  VAR_15 = FUNC_13(VAR_15, VAR_16);
  if(VAR_10 && VAR_11) {


    FUNC_4(VAR_10, VAR_7, "https://www.example.com/upload.cgi");
    FUNC_4(VAR_10, VAR_8, 1L);

    FUNC_4(VAR_10, VAR_5, VAR_15);
    FUNC_4(VAR_10, VAR_6, VAR_13);

    FUNC_7(VAR_11, VAR_10);

    FUNC_11(VAR_11, &VAR_12);

    while(VAR_12) {
      struct timeval VAR_17;
      int VAR_18;
      CURLMcode VAR_19;

      fd_set VAR_20;
      fd_set VAR_21;
      fd_set VAR_22;
      int VAR_23 = -1;

      long VAR_24 = -1;

      FUNC_0(&VAR_20);
      FUNC_0(&VAR_21);
      FUNC_0(&VAR_22);


      VAR_17.tv_sec = 1;
      VAR_17.tv_usec = 0;

      FUNC_12(VAR_11, &VAR_24);
      if(VAR_24 >= 0) {
        VAR_17.tv_sec = VAR_24 / 1000;
        if(VAR_17.tv_sec > 1)
          VAR_17.tv_sec = 1;
        else
          VAR_17.tv_usec = (VAR_24 % 1000) * 1000;
      }


      VAR_19 = FUNC_9(VAR_11, &VAR_20, &VAR_21, &VAR_22, &VAR_23);

      if(VAR_19 != VAR_4) {
        FUNC_15(VAR_9, "curl_multi_fdset() failed, code %ld.\n", VAR_19);
        break;
      }







      if(VAR_23 == -1) {





        struct timeval VAR_25 = { 0, 100 * 1000 };
        VAR_18 = FUNC_17(0, ((void*)0), ((void*)0), ((void*)0), &VAR_25);

      }
      else {


        VAR_18 = FUNC_17(VAR_23 + 1, &VAR_20, &VAR_21, &VAR_22, &VAR_17);
      }

      switch(VAR_18) {
      case -1:

        break;
      case 0:
      default:

        FUNC_16("perform!\n");
        FUNC_11(VAR_11, &VAR_12);
        FUNC_16("running: %d!\n", VAR_12);
        break;
      }
    }

    FUNC_8(VAR_11);


    FUNC_2(VAR_10);


    FUNC_6(VAR_13);


    FUNC_14(VAR_15);
  }
  return 0;
}
