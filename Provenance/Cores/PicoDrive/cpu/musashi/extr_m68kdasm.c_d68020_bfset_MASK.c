
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
 uint VAR_4;
 char VAR_5[3];
 char VAR_6[3];

 FUNC_2(VAR_0);

 VAR_4 = FUNC_4();

 if(FUNC_1(VAR_4))
  FUNC_5(VAR_5, "D%d", (VAR_4>>6)&7);
 else
  FUNC_5(VAR_5, "%d", (VAR_4>>6)&31);
 if(FUNC_0(VAR_4))
  FUNC_5(VAR_6, "D%d", VAR_4&7);
 else
  FUNC_5(VAR_6, "%d", VAR_1[VAR_4&31]);
 FUNC_5(VAR_3, "bfset   %s {%s:%s}; (2+)", FUNC_3(VAR_2), VAR_5, VAR_6);
}
