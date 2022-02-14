
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,char const*,int) ;
 int FUNC_3 (char const*) ;

void FUNC_4(const char *VAR_6)
{
 const char *VAR_7 = VAR_6 + FUNC_3(VAR_6);
 int VAR_8;

 while (VAR_7 > VAR_6 && *VAR_7 != '/')
  VAR_7--;


 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  FUNC_0(1, 1);
  FUNC_2(1, 1, "Loading", 0xffff);
  FUNC_2(1, VAR_5, VAR_7, 0xffff);
  FUNC_1();
 }

 VAR_1 = VAR_4;
 VAR_0 = VAR_3;
 VAR_2 = 0;
}
