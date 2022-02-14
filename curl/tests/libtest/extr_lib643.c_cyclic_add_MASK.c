
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_mimepart ;
typedef int curl_mime ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(void)
{
  CURL *VAR_1 = FUNC_1();
  curl_mime *VAR_2 = FUNC_4(VAR_1);
  curl_mimepart *VAR_3 = FUNC_2(VAR_2);
  CURLcode VAR_4 = FUNC_5(VAR_3, VAR_2);

  if(VAR_4 == VAR_0) {
    curl_mime *VAR_5 = FUNC_4(VAR_1);
    curl_mimepart *VAR_6 = FUNC_2(VAR_5);

    FUNC_5(VAR_3, VAR_5);
    VAR_4 = FUNC_5(VAR_6, VAR_2);
  }

  FUNC_3(VAR_2);
  FUNC_0(VAR_1);
  if(VAR_4 != VAR_0)

    return 1;

  return 0;
}
