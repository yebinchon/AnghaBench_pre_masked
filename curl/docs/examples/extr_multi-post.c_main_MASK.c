
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef char curl_slist ;
typedef int fd_set ;
typedef int curl_mimepart ;
typedef char curl_mime ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,...) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int *,int *,int *,int*) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int*) ;
 int FUNC_16 (int *,long*) ;
 char* FUNC_17 (char*,char const*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,char*,scalar_t__) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int,int *,int *,int *,struct timeval*) ;
 int VAR_6 ;

int FUNC_22(void)
{
  CURL *VAR_7;

  CURLM *VAR_8;
  int VAR_9 = 0;

  curl_mime *VAR_10 = ((void*)0);
  curl_mimepart *VAR_11 = ((void*)0);
  struct curl_slist *VAR_12 = ((void*)0);
  static const char VAR_13[] = "Expect:";

  VAR_7 = FUNC_3();
  VAR_8 = FUNC_14();

  if(VAR_7 && VAR_8) {

    VAR_10 = FUNC_9(VAR_7);


    VAR_11 = FUNC_5(VAR_10);
    FUNC_10(VAR_11, "sendfile");
    FUNC_7(VAR_11, "multi-post.c");


    VAR_11 = FUNC_5(VAR_10);
    FUNC_10(VAR_11, "filename");
    FUNC_6(VAR_11, "multi-post.c", VAR_5);


    VAR_11 = FUNC_5(VAR_10);
    FUNC_10(VAR_11, "submit");
    FUNC_6(VAR_11, "send", VAR_5);



    VAR_12 = FUNC_17(VAR_12, VAR_13);


    FUNC_4(VAR_7, VAR_3, "https://www.example.com/upload.cgi");
    FUNC_4(VAR_7, VAR_4, 1L);

    FUNC_4(VAR_7, VAR_1, VAR_12);
    FUNC_4(VAR_7, VAR_2, VAR_10);

    FUNC_11(VAR_8, VAR_7);

    FUNC_15(VAR_8, &VAR_9);

    while(VAR_9) {
      struct timeval VAR_14;
      int VAR_15;
      CURLMcode VAR_16;

      fd_set VAR_17;
      fd_set VAR_18;
      fd_set VAR_19;
      int VAR_20 = -1;

      long VAR_21 = -1;

      FUNC_0(&VAR_17);
      FUNC_0(&VAR_18);
      FUNC_0(&VAR_19);


      VAR_14.tv_sec = 1;
      VAR_14.tv_usec = 0;

      FUNC_16(VAR_8, &VAR_21);
      if(VAR_21 >= 0) {
        VAR_14.tv_sec = VAR_21 / 1000;
        if(VAR_14.tv_sec > 1)
          VAR_14.tv_sec = 1;
        else
          VAR_14.tv_usec = (VAR_21 % 1000) * 1000;
      }


      VAR_16 = FUNC_13(VAR_8, &VAR_17, &VAR_18, &VAR_19, &VAR_20);

      if(VAR_16 != VAR_0) {
        FUNC_19(VAR_6, "curl_multi_fdset() failed, code %ld.\n", VAR_16);
        break;
      }







      if(VAR_20 == -1) {





        struct timeval VAR_22 = { 0, 100 * 1000 };
        VAR_15 = FUNC_21(0, ((void*)0), ((void*)0), ((void*)0), &VAR_22);

      }
      else {


        VAR_15 = FUNC_21(VAR_20 + 1, &VAR_17, &VAR_18, &VAR_19, &VAR_14);
      }

      switch(VAR_15) {
      case -1:

        break;
      case 0:
      default:

        FUNC_20("perform!\n");
        FUNC_15(VAR_8, &VAR_9);
        FUNC_20("running: %d!\n", VAR_9);
        break;
      }
    }

    FUNC_12(VAR_8);


    FUNC_2(VAR_7);


    FUNC_8(VAR_10);


    FUNC_18(VAR_12);
  }
  return 0;
}
