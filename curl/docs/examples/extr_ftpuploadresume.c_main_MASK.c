
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
 int FUNC_4 (int *,char*,char*,int ,int) ;

int FUNC_5(void)
{
  CURL *VAR_1 = ((void*)0);

  FUNC_3(VAR_0);
  VAR_1 = FUNC_1();

  FUNC_4(VAR_1, "ftp://user:pass@example.com/path/file", "C:\\file",
         0, 3);

  FUNC_0(VAR_1);
  FUNC_2();

  return 0;
}
