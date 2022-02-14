
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_status {scalar_t__ lines_read; } ;
struct curl_slist {int dummy; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,int ) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*,char*) ;
 long VAR_10 ;
 int VAR_11 ;

int FUNC_8(void)
{
  CURL *VAR_12;
  CURLcode VAR_13 = VAR_1;
  struct curl_slist *VAR_14 = ((void*)0);
  struct upload_status VAR_15;

  VAR_15.lines_read = 0;

  VAR_12 = FUNC_1();
  if(VAR_12) {

    FUNC_3(VAR_12, VAR_7, "smtp://mail.example.com");
    FUNC_3(VAR_12, VAR_2, VAR_8);




    VAR_14 = FUNC_5(VAR_14, VAR_9);
    VAR_14 = FUNC_5(VAR_14, VAR_0);
    FUNC_3(VAR_12, VAR_3, VAR_14);




    FUNC_3(VAR_12, VAR_5, VAR_10);
    FUNC_3(VAR_12, VAR_4, &VAR_15);
    FUNC_3(VAR_12, VAR_6, 1L);


    VAR_13 = FUNC_2(VAR_12);


    if(VAR_13 != VAR_1)
      FUNC_7(VAR_11, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_13));


    FUNC_6(VAR_14);
    FUNC_0(VAR_12);
  }

  return (int)VAR_13;
}
