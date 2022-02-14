
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FtpFile {char* member_0; scalar_t__ stream; int * member_1; } ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 long VAR_6 ;
 int VAR_7 ;

int FUNC_8(void)
{
  CURL *VAR_8;
  CURLcode VAR_9;
  struct FtpFile VAR_10 = {
    "curl.tar.gz",
    ((void*)0)
  };

  FUNC_5(VAR_5);

  VAR_8 = FUNC_1();
  if(VAR_8) {



    FUNC_3(VAR_8, VAR_1,
                     "ftp://ftp.example.com/curl/curl-7.9.2.tar.gz");

    FUNC_3(VAR_8, VAR_4, VAR_6);

    FUNC_3(VAR_8, VAR_3, &VAR_10);


    FUNC_3(VAR_8, VAR_2, 1L);

    VAR_9 = FUNC_2(VAR_8);


    FUNC_0(VAR_8);

    if(VAR_0 != VAR_9) {

      FUNC_7(VAR_7, "curl told us %d\n", VAR_9);
    }
  }

  if(VAR_10.stream)
    FUNC_6(VAR_10.stream);

  FUNC_4();

  return 0;
}
