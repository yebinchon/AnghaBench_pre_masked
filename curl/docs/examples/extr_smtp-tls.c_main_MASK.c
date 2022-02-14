
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
 scalar_t__ VAR_13 ;
 long VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,int ) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*,char*) ;
 long VAR_16 ;
 int VAR_17 ;

int FUNC_8(void)
{
  CURL *VAR_18;
  CURLcode VAR_19 = VAR_1;
  struct curl_slist *VAR_20 = ((void*)0);
  struct upload_status VAR_21;

  VAR_21.lines_read = 0;

  VAR_18 = FUNC_1();
  if(VAR_18) {

    FUNC_3(VAR_18, VAR_10, "user");
    FUNC_3(VAR_18, VAR_5, "secret");





    FUNC_3(VAR_18, VAR_9, "smtp://mainserver.example.net:587");






    FUNC_3(VAR_18, VAR_11, (long)VAR_13);
    FUNC_3(VAR_18, VAR_2, "/path/to/certificate.pem");
    FUNC_3(VAR_18, VAR_3, VAR_14);




    VAR_20 = FUNC_5(VAR_20, VAR_15);
    VAR_20 = FUNC_5(VAR_20, VAR_0);
    FUNC_3(VAR_18, VAR_4, VAR_20);




    FUNC_3(VAR_18, VAR_7, VAR_16);
    FUNC_3(VAR_18, VAR_6, &VAR_21);
    FUNC_3(VAR_18, VAR_8, 1L);




    FUNC_3(VAR_18, VAR_12, 1L);


    VAR_19 = FUNC_2(VAR_18);


    if(VAR_19 != VAR_1)
      FUNC_7(VAR_17, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_19));


    FUNC_6(VAR_20);


    FUNC_0(VAR_18);
  }

  return (int)VAR_19;
}
