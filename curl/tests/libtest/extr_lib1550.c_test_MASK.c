
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,char const* const*) ;
 int FUNC_4 (int ) ;

int FUNC_5(char *VAR_4)
{
  CURLM *VAR_5;
  int VAR_6 = VAR_0;
  static const char * const VAR_7[] =
     {"Microsoft-IIS/6.0", "nginx/0.8.54", ((void*)0)};
  static const char * const VAR_8[] =
     {"curl.haxx.se:443", "example.com:80", ((void*)0)};

  FUNC_4(VAR_3);
  VAR_5 = FUNC_2();
  (void)VAR_4;

  FUNC_3(VAR_5, VAR_1, VAR_7);
  FUNC_3(VAR_5, VAR_2, VAR_8);
  FUNC_1(VAR_5);
  FUNC_0();
  return 0;
}
