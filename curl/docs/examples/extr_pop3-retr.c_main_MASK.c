
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_4 ;

int FUNC_6(void)
{
  CURL *VAR_5;
  CURLcode VAR_6 = VAR_0;

  VAR_5 = FUNC_1();
  if(VAR_5) {

    FUNC_3(VAR_5, VAR_3, "user");
    FUNC_3(VAR_5, VAR_1, "secret");


    FUNC_3(VAR_5, VAR_2, "pop3://pop.example.com/1");


    VAR_6 = FUNC_2(VAR_5);


    if(VAR_6 != VAR_0)
      FUNC_5(VAR_4, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_6));


    FUNC_0(VAR_5);
  }

  return (int)VAR_6;
}
