
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

int FUNC_3(int VAR_1, char *VAR_2[])
{
  char VAR_3[VAR_0];
  if(VAR_1 != 2) {
    FUNC_1("Usage: %s EXPECTED_HOSTNAME\n", VAR_2[0]);
    return 1;
  }

  if(FUNC_0(VAR_3, VAR_0)) {
    FUNC_1("Curl_gethostname() failed\n");
    return 1;
  }


  if(FUNC_2(VAR_3, VAR_2[1], VAR_0)) {
    FUNC_1("got unexpected host name back, LD_PRELOAD failed\n");
    return 1;
  }
  return 0;
}
