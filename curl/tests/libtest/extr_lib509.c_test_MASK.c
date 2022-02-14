
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int a ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,char*,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,char*) ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,char*) ;

int FUNC_8(char *VAR_10)
{
  unsigned char VAR_11[] = {0x2f, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
                       0x91, 0xa2, 0xb3, 0xc4, 0xd5, 0xe6, 0xf7};
  CURLcode VAR_12;
  CURL *VAR_13;
  int VAR_14;
  char *VAR_15 = ((void*)0);

  (void)VAR_10;

  VAR_12 = FUNC_5(VAR_2,
                             VAR_6,
                             VAR_5,
                             VAR_7,
                             VAR_8,
                             VAR_4);
  if(VAR_12 != VAR_0) {
    FUNC_6(VAR_9, "curl_global_init_mem() failed\n");
    return VAR_3;
  }

  VAR_13 = FUNC_2();
  if(!VAR_13) {
    FUNC_6(VAR_9, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_3;
  }

  FUNC_7(VAR_13, VAR_1, "test509");

  VAR_14 = (int)sizeof(VAR_11);
  VAR_15 = FUNC_1(VAR_13, (char *)VAR_11, VAR_14);

test_cleanup:

  if(VAR_15)
    FUNC_3(VAR_15);

  FUNC_0(VAR_13);
  FUNC_4();

  return (int)VAR_12;
}
