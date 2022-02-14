
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_mimepart ;
typedef int curl_mime ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,...) ;
 int FUNC_10 (int ) ;

int FUNC_11(char *VAR_7)
{
  CURL *VAR_8 = ((void*)0);
  int VAR_9 = 0;
  curl_mimepart *VAR_10 = ((void*)0);
  curl_mime *VAR_11 = ((void*)0);

  FUNC_10(VAR_5);
  FUNC_8(VAR_8);

  VAR_11 = FUNC_6(VAR_8);
  VAR_10 = FUNC_3(VAR_11);
  FUNC_7(VAR_10, "name");
  FUNC_4(VAR_10, "short value", VAR_6);

  FUNC_9(VAR_8, VAR_3, VAR_7);
  FUNC_9(VAR_8, VAR_0, 1L);
  FUNC_9(VAR_8, VAR_4, 1L);
  FUNC_9(VAR_8, VAR_1, VAR_11);
  FUNC_9(VAR_8, VAR_2, 1L);

  VAR_9 = FUNC_1(VAR_8);
  if(VAR_9)
    goto test_cleanup;


  FUNC_4(VAR_10, "long value for length change", VAR_6);
  VAR_9 = FUNC_1(VAR_8);

test_cleanup:
  FUNC_5(VAR_11);
  FUNC_0(VAR_8);
  FUNC_2();
  return (int) VAR_9;
}
