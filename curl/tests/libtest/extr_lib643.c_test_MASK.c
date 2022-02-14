
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_5 ;

int FUNC_5(char *VAR_6)
{
  int VAR_7;

  if(FUNC_1(VAR_1) != VAR_0) {
    FUNC_3(VAR_5, "curl_global_init() failed\n");
    return VAR_3;
  }

  VAR_7 = FUNC_4(VAR_6, VAR_4);
  if(!VAR_7)
    VAR_7 = FUNC_4(VAR_6, VAR_2);

  if(!VAR_7)
    VAR_7 = FUNC_2();

  FUNC_0();

  return VAR_7;
}
