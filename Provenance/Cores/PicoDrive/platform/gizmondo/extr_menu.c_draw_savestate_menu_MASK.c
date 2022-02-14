
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int) ;
 int VAR_0 ;
 int FUNC_4 (int,int,char*,...) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2)
{
 int VAR_3 = 25, VAR_4 = 60, VAR_5, VAR_6;

 if (VAR_0 & (1 << VAR_1))
  FUNC_0(VAR_1);
 FUNC_1(1);

 FUNC_4(VAR_3, 30, VAR_2 ? "Load state" : "Save state");

 FUNC_3(VAR_3 - 16, VAR_4 + VAR_1*10, 108);


 VAR_5 = VAR_4;
 for (VAR_6 = 0; VAR_6 < 10; VAR_6++, VAR_5+=10)
 {
  FUNC_4(VAR_3, VAR_5, "SLOT %i (%s)", VAR_6, (VAR_0 & (1 << VAR_6)) ? "USED" : "free");
 }
 FUNC_4(VAR_3, VAR_5, "back");

 FUNC_2();
}
