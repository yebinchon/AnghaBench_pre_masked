
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char const*,char const*) ;

int FUNC_7(void)
{
  const char *VAR_1 = "sftp://user:pass@example.com/path/filename";
  const char *VAR_2 = "filename";
  CURL *VAR_3 = ((void*)0);

  FUNC_3(VAR_0);
  VAR_3 = FUNC_1();

  if(!FUNC_6(VAR_3, VAR_1, VAR_2)) {
    FUNC_5("resumed upload using curl %s failed\n", FUNC_4());
  }

  FUNC_0(VAR_3);
  FUNC_2();

  return 0;
}
