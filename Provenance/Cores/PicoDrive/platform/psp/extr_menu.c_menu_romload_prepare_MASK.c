
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,int,char*,int) ;
 int FUNC_4 (int,int,char const*,int,int) ;
 int FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_7)
{
 const char *VAR_8 = VAR_7 + FUNC_5(VAR_7);
 while (VAR_8 > VAR_7 && *VAR_8 != '/') VAR_8--;

 FUNC_2();
 if (VAR_6) FUNC_1();
 else FUNC_0(VAR_5, 0, 512*272*2/4);

 FUNC_3(1, 1, "Loading", 0xffff);
 FUNC_4(1, 10, VAR_8, 0xffff, 80);
 VAR_1 = VAR_4;
 VAR_0 = VAR_2;
 VAR_3 = 2;
}
