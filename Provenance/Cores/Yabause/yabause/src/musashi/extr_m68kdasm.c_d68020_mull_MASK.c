
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,char,char*,int,...) ;

__attribute__((used)) static void FUNC_6(void)
{
 uint VAR_3;
 FUNC_2(VAR_0);
 VAR_3 = FUNC_4();

 if(FUNC_0(VAR_3))
  FUNC_5(VAR_2, "mul%c.l %s, D%d:D%d; (2+)", FUNC_1(VAR_3) ? 's' : 'u', FUNC_3(VAR_1), VAR_3&7, (VAR_3>>12)&7);
 else
  FUNC_5(VAR_2, "mul%c.l  %s, D%d; (2+)", FUNC_1(VAR_3) ? 's' : 'u', FUNC_3(VAR_1), (VAR_3>>12)&7);
}
