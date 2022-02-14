
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,int ,int,int,int) ;
 int FUNC_2 (int,int,char const*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 2;
 FUNC_3();
 FUNC_4(VAR_0);
 FUNC_1(0x9a, 0x94, 0, 1, 39, 23);
 while (*VAR_1 != '\n') {
  FUNC_2(0x9a, 0x94, VAR_1, VAR_2++);
  while (*VAR_1++ != '\0');
 }
 FUNC_0("Press any key to continue", 1);
}
