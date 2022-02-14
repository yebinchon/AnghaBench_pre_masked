
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int a ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 char* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (int) ;
 int VAR_3 ;

int FUNC_7(char *VAR_4)
{
  unsigned char VAR_5[] = {0x2f, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
                       0x91, 0xa2, 0xb3, 0xc4, 0xd5, 0xe6, 0xf7};
  CURLcode VAR_6 = VAR_0;
  char *VAR_7 = ((void*)0);
  int VAR_8;

  (void)VAR_4;

  if(FUNC_4(VAR_1) != VAR_0) {
    FUNC_5(VAR_3, "curl_global_init() failed\n");
    return VAR_2;
  }

  VAR_7 = FUNC_6(558);
  FUNC_0(VAR_7);

  VAR_8 = (int)sizeof(VAR_5);
  VAR_7 = FUNC_1(((void*)0), (char *)VAR_5, VAR_8);
  if(VAR_7)
    FUNC_2(VAR_7);

  FUNC_3();

  return (int)VAR_6;
}
