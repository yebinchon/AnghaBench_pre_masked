
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int a ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,char const*,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int VAR_3 ;

int FUNC_8(char *VAR_4)
{
  static const unsigned char VAR_5[] = {
      0x9c, 0x26, 0x4b, 0x3d, 0x49, 0x4, 0xa1, 0x1,
      0xe0, 0xd8, 0x7c, 0x20, 0xb7, 0xef, 0x53, 0x29, 0xfa,
      0x1d, 0x57, 0xe1};

  CURL *VAR_6;
  int VAR_7;
  char *VAR_8;
  CURLcode VAR_9 = VAR_0;
  (void)VAR_4;

  FUNC_6(VAR_1);
  VAR_6 = FUNC_2();
  if(!VAR_6) {
    FUNC_5(VAR_3, "curl_easy_init() failed\n");
    return VAR_2;
  }

  VAR_7 = (int)sizeof(VAR_5);

  VAR_8 = FUNC_1(VAR_6, (const char *)VAR_5, VAR_7);

  if(VAR_8)
    FUNC_7("%s\n", VAR_8);

  if(VAR_8)
    FUNC_3(VAR_8);

  FUNC_0(VAR_6);
  FUNC_4();

  return 0;
}
