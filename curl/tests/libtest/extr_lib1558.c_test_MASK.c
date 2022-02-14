
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,long*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int ,char*,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,long) ;
 int VAR_3 ;

int FUNC_10(char *VAR_4)
{
  CURLcode VAR_5 = 0;
  CURL *VAR_6 = ((void*)0);
  long VAR_7 = 0;

  FUNC_8(VAR_2);
  FUNC_5(VAR_6);

  FUNC_6(VAR_6, VAR_1, VAR_4);
  VAR_5 = FUNC_2(VAR_6);
  if(VAR_5) {
    FUNC_7(VAR_3, "curl_easy_perform() returned %d (%s)\n",
            VAR_5, FUNC_3(VAR_5));
    goto test_cleanup;
  }

  VAR_5 = FUNC_1(VAR_6, VAR_0, &VAR_7);
  if(VAR_5) {
    FUNC_7(VAR_3, "curl_easy_getinfo() returned %d (%s)\n",
            VAR_5, FUNC_3(VAR_5));
    goto test_cleanup;
  }

  FUNC_9("Protocol: %x\n", VAR_7);

  FUNC_0(VAR_6);
  FUNC_4();

  return 0;

test_cleanup:

  FUNC_0(VAR_6);
  FUNC_4();

  return VAR_5;
}
