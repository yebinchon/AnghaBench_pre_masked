
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef char* curl_off_t ;
typedef char FILE ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
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
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,char*) ;
 char* VAR_8 ;
 int FUNC_10 (char*,struct stat*) ;
 int VAR_9 ;

int FUNC_11(int VAR_10, char **VAR_11)
{
  CURL *VAR_12;
  CURLcode VAR_13;
  FILE * VAR_14;
  struct stat VAR_15;

  char *VAR_16;
  char *VAR_17;

  if(VAR_10 < 3)
    return 1;

  VAR_16 = VAR_11[1];
  VAR_17 = VAR_11[2];


  FUNC_10(VAR_16, &VAR_15);




  VAR_14 = FUNC_8(VAR_16, "rb");


  FUNC_6(VAR_7);


  VAR_12 = FUNC_1();
  if(VAR_12) {

    FUNC_3(VAR_12, VAR_4, VAR_8);


    FUNC_3(VAR_12, VAR_5, 1L);


    FUNC_3(VAR_12, VAR_2, 1L);



    FUNC_3(VAR_12, VAR_6, VAR_17);


    FUNC_3(VAR_12, VAR_3, VAR_14);



    FUNC_3(VAR_12, VAR_1,
                     (curl_off_t)VAR_15.st_size);


    VAR_13 = FUNC_2(VAR_12);

    if(VAR_13 != VAR_0)
      FUNC_9(VAR_9, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_13));


    FUNC_0(VAR_12);
  }
  FUNC_7(VAR_14);

  FUNC_5();
  return 0;
}
