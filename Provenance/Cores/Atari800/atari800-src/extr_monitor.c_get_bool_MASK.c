
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 const char *VAR_0;
 VAR_0 = FUNC_1();
 if (VAR_0 != ((void*)0)) {
  int VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 >= 0)
   return VAR_1;
 }
 FUNC_2("Invalid argument (should be 0 or 1)!\n");
 return -1;
}
