
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
 long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 long VAR_8 ;
 int VAR_9 ;

int FUNC_8(void)
{
  CURL *VAR_10;
  CURLcode VAR_11;
  struct FtpFile VAR_12 = {
    "yourfile.bin",
    ((void*)0)
  };

  FUNC_5(VAR_7);

  VAR_10 = FUNC_1();
  if(VAR_10) {



    FUNC_3(VAR_10, VAR_2,
                     "sftp://user@server/home/user/file.txt");

    FUNC_3(VAR_10, VAR_5, VAR_8);

    FUNC_3(VAR_10, VAR_4, &VAR_12);





    FUNC_3(VAR_10, VAR_1, VAR_6);



    FUNC_3(VAR_10, VAR_3, 1L);

    VAR_11 = FUNC_2(VAR_10);


    FUNC_0(VAR_10);

    if(VAR_0 != VAR_11) {

      FUNC_7(VAR_9, "curl told us %d\n", VAR_11);
    }
  }

  if(VAR_12.stream)
    FUNC_6(VAR_12.stream);

  FUNC_4();

  return 0;
}
