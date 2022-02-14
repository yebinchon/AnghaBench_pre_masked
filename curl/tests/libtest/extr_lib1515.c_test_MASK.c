
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_url ;
typedef int dns_entry ;
typedef int CURLM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (char*,int,char*,char*,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;

int FUNC_8(char *VAR_4)
{
  CURLM *VAR_5 = ((void*)0);
  int VAR_6 = 0;
  char *VAR_7 = VAR_2;
  char *VAR_8 = VAR_3;
  char *VAR_9 = VAR_4;
  char VAR_10[256];
  int VAR_11;
  int VAR_12 = 2;

  FUNC_4(VAR_10, sizeof(VAR_10), "testserver.example.com:%s:%s",
            VAR_8, VAR_7);

  FUNC_7();

  FUNC_3(VAR_0);
  FUNC_5(VAR_5);

  for(VAR_11 = 1; VAR_11 <= VAR_12; VAR_11++) {
    char VAR_13[256];
    FUNC_4(VAR_13, sizeof(VAR_13),
              "http://testserver.example.com:%s/%s%04d", VAR_8, VAR_9, VAR_11);


    VAR_6 = FUNC_2(VAR_5, VAR_13, VAR_10);
    if(VAR_6)
      goto test_cleanup;

    if(VAR_11 < VAR_12)
      FUNC_6(VAR_1 + 1);
  }

test_cleanup:

  FUNC_1(VAR_5);
  FUNC_0();

  return (int) VAR_6;
}
