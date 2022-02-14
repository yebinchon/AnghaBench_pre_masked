
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
typedef int buffer ;
typedef int CURLM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct curl_slist* FUNC_4 (struct curl_slist*,char*) ;
 int FUNC_5 (struct curl_slist*) ;
 int ** VAR_5 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int *,char*,int ,struct curl_slist*) ;
 int FUNC_8 (char*,int,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_12(char *VAR_8)
{
  CURLM *VAR_9 = ((void*)0);
  struct curl_slist *VAR_10 = ((void*)0);
  char VAR_11[246];
  int VAR_12 = 0;
  int VAR_13;

  for(VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
    VAR_5[VAR_13] = ((void*)0);

  FUNC_11();

  if(VAR_7 < 4)
    return 99;

  FUNC_8(VAR_11, sizeof(VAR_11), "Host: %s", VAR_1);


  VAR_10 = FUNC_4(VAR_10, VAR_11);
  if(!VAR_10) {
    FUNC_6(VAR_6, "curl_slist_append() failed\n");
    return VAR_4;
  }

  FUNC_9(VAR_0);
  if(VAR_12) {
    FUNC_5(VAR_10);
    return VAR_12;
  }

  FUNC_10(VAR_9);
  if(VAR_12) {
    FUNC_1();
    FUNC_5(VAR_10);
    return VAR_12;
  }

  VAR_12 = FUNC_7(0, VAR_9, VAR_8, VAR_3, VAR_10);
  if(VAR_12)
    goto test_cleanup;

  FUNC_6(VAR_6, "lib540: now we do the request again\n");

  VAR_12 = FUNC_7(1, VAR_9, VAR_8, VAR_3, VAR_10);

test_cleanup:



  for(VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
    FUNC_3(VAR_9, VAR_5[VAR_13]);
    FUNC_0(VAR_5[VAR_13]);
  }

  FUNC_2(VAR_9);
  FUNC_1();

  FUNC_5(VAR_10);

  return VAR_12;
}
