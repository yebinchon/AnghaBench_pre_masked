
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,int ) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*,char*) ;
 long VAR_15 ;
 int VAR_16 ;

int FUNC_8(void)
{
  CURL *VAR_17;
  CURLcode VAR_18 = VAR_1;
  struct curl_slist *VAR_19 = ((void*)0);
  struct upload_status VAR_20;

  VAR_20.lines_read = 0;

  VAR_17 = FUNC_1();
  if(VAR_17) {

    FUNC_3(VAR_17, VAR_11, "user");
    FUNC_3(VAR_17, VAR_4, "secret");



    FUNC_3(VAR_17, VAR_10, "smtps://mainserver.example.net");
    FUNC_3(VAR_17, VAR_2, VAR_13);




    VAR_19 = FUNC_5(VAR_19, VAR_14);
    VAR_19 = FUNC_5(VAR_19, VAR_0);
    FUNC_3(VAR_17, VAR_3, VAR_19);




    FUNC_3(VAR_17, VAR_6, VAR_15);
    FUNC_3(VAR_17, VAR_5, &VAR_20);
    FUNC_3(VAR_17, VAR_9, 1L);




    FUNC_3(VAR_17, VAR_12, 1L);


    VAR_18 = FUNC_2(VAR_17);


    if(VAR_18 != VAR_1)
      FUNC_7(VAR_16, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_18));


    FUNC_6(VAR_19);


    FUNC_0(VAR_17);
  }

  return (int)VAR_18;
}
