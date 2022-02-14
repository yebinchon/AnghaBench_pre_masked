
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,size_t*) ;
 int FUNC_1 (int ,char*,size_t,size_t*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1,
                            double VAR_2,
                            double VAR_3,
                            double VAR_4,
                            double VAR_5)
{
  CURLcode VAR_6 = 0;
  char VAR_7[256];
  size_t VAR_8 = 0;
  (void)VAR_1;
  (void)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  (void)VAR_5;
  VAR_6 = FUNC_0(VAR_0, VAR_7, 256, &VAR_8);
  FUNC_2("curl_easy_recv returned %d\n", VAR_6);
  VAR_6 = FUNC_1(VAR_0, VAR_7, VAR_8, &VAR_8);
  FUNC_2("curl_easy_send returned %d\n", VAR_6);

  return 1;
}
