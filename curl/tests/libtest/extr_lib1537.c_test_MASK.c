
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int a ;
typedef int CURLcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,char*,int,int*) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (char*,unsigned char const*,int) ;
 int FUNC_9 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (char*) ;

int FUNC_11(char *VAR_4)
{
  const unsigned char VAR_5[] = {0x2f, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
                             0x91, 0xa2, 0xb3, 0xc4, 0xd5, 0xe6, 0xf7};
  CURLcode VAR_6 = VAR_0;
  char *VAR_7 = ((void*)0);
  int VAR_8;
  int VAR_9 = 0;
  char *VAR_10;

  (void)VAR_4;

  if(FUNC_5(VAR_1) != VAR_0) {
    FUNC_7(VAR_3, "curl_global_init() failed\n");
    return VAR_2;
  }

  VAR_8 = (int)sizeof(VAR_5);
  VAR_7 = FUNC_0(((void*)0), (char *)VAR_5, VAR_8);
  FUNC_9("%s\n", VAR_7);
  FUNC_3(VAR_7);


  VAR_7 = FUNC_2((char *)VAR_5, VAR_8);
  FUNC_9("%s\n", VAR_7);
  if(!VAR_7) {
    VAR_6 = VAR_2;
    goto test_cleanup;
  }

  VAR_10 = FUNC_1(((void*)0), VAR_7, (int)FUNC_10(VAR_7), &VAR_9);
  FUNC_9("outlen == %d\n", VAR_9);
  FUNC_9("unescape == original? %s\n",
         FUNC_8(VAR_10, VAR_5, VAR_9) ? "no" : "YES");
  FUNC_3(VAR_10);


  VAR_10 = FUNC_6(VAR_7, (int)FUNC_10(VAR_7));
  if(!VAR_10) {
    VAR_6 = VAR_2;
    goto test_cleanup;
  }
  VAR_9 = (int)FUNC_10(VAR_10);
  FUNC_9("[old] outlen == %d\n", VAR_9);
  FUNC_9("[old] unescape == original? %s\n",
         FUNC_8(VAR_10, VAR_5, VAR_9) ? "no" : "YES");
  FUNC_3(VAR_10);
  FUNC_3(VAR_7);


  VAR_7 = FUNC_0(((void*)0), (char *)VAR_5, -1);
  FUNC_9("escape -1 length: %s\n", VAR_7);


  VAR_9 = 2017;
  VAR_7 = FUNC_1(((void*)0), (char *)"moahahaha", -1, &VAR_9);
  FUNC_9("unescape -1 length: %s %d\n", VAR_7, VAR_9);

test_cleanup:
  FUNC_3(VAR_7);
  FUNC_4();

  return (int)VAR_6;
}
