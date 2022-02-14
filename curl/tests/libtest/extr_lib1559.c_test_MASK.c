
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef scalar_t__ CURLUcode ;
typedef int CURLU ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,char,int) ;
 int FUNC_11 (char*,int,int) ;

int FUNC_12(char *VAR_8)
{
  CURLcode VAR_9 = 0;
  CURL *VAR_10 = ((void*)0);
  char *VAR_11 = FUNC_9(VAR_7);
  CURLU *VAR_12;
  (void)VAR_8;

  FUNC_10(VAR_11, 'a', VAR_7);
  VAR_11[VAR_7-1] = 0;

  FUNC_8(VAR_6);
  FUNC_6(VAR_10);

  VAR_9 = FUNC_1(VAR_10, VAR_1, VAR_11);
  FUNC_11("CURLOPT_URL %d bytes URL == %d\n",
         VAR_7, (int)VAR_9);

  VAR_9 = FUNC_1(VAR_10, VAR_0, VAR_11);
  FUNC_11("CURLOPT_POSTFIELDS %d bytes data == %d\n",
         VAR_7, (int)VAR_9);

  VAR_12 = FUNC_3();
  if(VAR_12) {
    CURLUcode VAR_13 = FUNC_5(VAR_12, VAR_3, VAR_11, 0);
    FUNC_11("CURLUPART_URL %d bytes URL == %d\n",
           VAR_7, (int)VAR_13);
    VAR_13 = FUNC_5(VAR_12, VAR_2, VAR_11, VAR_5);
    FUNC_11("CURLUPART_SCHEME %d bytes scheme == %d\n",
           VAR_7, (int)VAR_13);
    VAR_13 = FUNC_5(VAR_12, VAR_4, VAR_11, 0);
    FUNC_11("CURLUPART_USER %d bytes user == %d\n",
           VAR_7, (int)VAR_13);
    FUNC_4(VAR_12);
  }

  FUNC_7(VAR_11);

  FUNC_0(VAR_10);
  FUNC_2();

  return 0;

test_cleanup:

  FUNC_0(VAR_10);
  FUNC_2();

  return VAR_9;
}
