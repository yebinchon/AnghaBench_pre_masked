
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_status {scalar_t__ lines_read; } ;
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
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;
 long VAR_8 ;
 char** VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char const*) ;

int FUNC_7(void)
{
  CURL *VAR_11;
  CURLcode VAR_12 = VAR_0;

  VAR_11 = FUNC_1();
  if(VAR_11) {
    const char **VAR_13;
    long VAR_14;
    struct upload_status VAR_15;

    VAR_15.lines_read = 0;


    FUNC_3(VAR_11, VAR_7, "user");
    FUNC_3(VAR_11, VAR_2, "secret");




    FUNC_3(VAR_11, VAR_6, "imap://imap.example.com/100");




    FUNC_3(VAR_11, VAR_4, VAR_8);
    FUNC_3(VAR_11, VAR_3, &VAR_15);
    FUNC_3(VAR_11, VAR_5, 1L);

    VAR_14 = 0;
    for(VAR_13 = VAR_9; *VAR_13; ++VAR_13) {
      VAR_14 += (long)FUNC_6(*VAR_13);
    }
    FUNC_3(VAR_11, VAR_1, VAR_14);


    VAR_12 = FUNC_2(VAR_11);


    if(VAR_12 != VAR_0)
      FUNC_5(VAR_10, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_12));


    FUNC_0(VAR_11);
  }

  return (int)VAR_12;
}
