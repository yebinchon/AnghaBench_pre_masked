
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_status {scalar_t__ lines_read; } ;
struct curl_slist {int dummy; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,int ) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*,char*) ;
 long VAR_13 ;
 int VAR_14 ;

int FUNC_8(void)
{
  CURL *VAR_15;
  CURLcode VAR_16 = VAR_0;
  struct curl_slist *VAR_17 = ((void*)0);
  struct upload_status VAR_18;

  VAR_18.lines_read = 0;

  VAR_15 = FUNC_1();
  if(VAR_15) {


    FUNC_3(VAR_15, VAR_9, "smtp://mail.example.com:587");


    FUNC_3(VAR_15, VAR_10, "kurt");
    FUNC_3(VAR_15, VAR_4, "xipj3plmq");


    FUNC_3(VAR_15, VAR_7, "ursel");


    FUNC_3(VAR_15, VAR_1, "AUTH=PLAIN");
    FUNC_3(VAR_15, VAR_2, VAR_11);



    VAR_17 = FUNC_5(VAR_17, VAR_12);
    FUNC_3(VAR_15, VAR_3, VAR_17);




    FUNC_3(VAR_15, VAR_6, VAR_13);
    FUNC_3(VAR_15, VAR_5, &VAR_18);
    FUNC_3(VAR_15, VAR_8, 1L);


    VAR_16 = FUNC_2(VAR_15);


    if(VAR_16 != VAR_0)
      FUNC_7(VAR_14, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_16));


    FUNC_6(VAR_17);
    FUNC_0(VAR_15);
  }

  return (int)VAR_16;
}
