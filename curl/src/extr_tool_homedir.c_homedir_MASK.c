
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct passwd* FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;

char *FUNC_4(void)
{
  char *VAR_2;

  VAR_2 = FUNC_0("CURL_HOME", VAR_0);
  if(VAR_2)
    return VAR_2;

  VAR_2 = FUNC_0("HOME", VAR_0);
  if(VAR_2)
    return VAR_2;
  return VAR_2;
}
