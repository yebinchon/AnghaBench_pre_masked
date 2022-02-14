
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef char* curl_off_t ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,...) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int,struct stat*) ;
 char* VAR_13 ;
 int FUNC_10 (char*,int ) ;
 char* VAR_14 ;
 int VAR_15 ;

int FUNC_11(int VAR_16, char **VAR_17)
{
  CURL *VAR_18;
  CURLcode VAR_19;
  int VAR_20;
  struct stat VAR_21;

  char *VAR_22;
  char *VAR_23;

  if(VAR_16 < 3)
    return 1;

  VAR_22 = VAR_17[1];
  VAR_23 = VAR_17[2];


  VAR_20 = FUNC_10(VAR_22, VAR_12);
  FUNC_9(VAR_20, &VAR_21);


  FUNC_7(VAR_11);


  VAR_18 = FUNC_2();
  if(VAR_18) {

    FUNC_4(VAR_18, VAR_7, VAR_14);


    FUNC_4(VAR_18, VAR_6, (void *)&VAR_20);


    FUNC_4(VAR_18, VAR_5, VAR_13);


    FUNC_4(VAR_18, VAR_4, (void *)&VAR_20);


    FUNC_4(VAR_18, VAR_8, 1L);



    FUNC_4(VAR_18, VAR_9, VAR_23);



    FUNC_4(VAR_18, VAR_3,
                     (curl_off_t)VAR_21.st_size);




    FUNC_4(VAR_18, VAR_2, (long)VAR_0);


    FUNC_4(VAR_18, VAR_10, "user:password");


    VAR_19 = FUNC_3(VAR_18);

    if(VAR_19 != VAR_1)
      FUNC_8(VAR_15, "curl_easy_perform() failed: %s\n",
              FUNC_5(VAR_19));


    FUNC_1(VAR_18);
  }
  FUNC_0(VAR_20);

  FUNC_6();
  return 0;
}
