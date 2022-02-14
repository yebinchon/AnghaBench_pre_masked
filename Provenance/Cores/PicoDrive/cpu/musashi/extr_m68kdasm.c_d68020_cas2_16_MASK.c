
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
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int,int,int,int,char,int,char,int) ;

__attribute__((used)) static void FUNC_5(void)
{






 uint VAR_2;
 FUNC_2(VAR_0);
 VAR_2 = FUNC_3();
 FUNC_4(VAR_1, "cas2.w  D%d:D%d:D%d:D%d, (%c%d):(%c%d); (2+)",
  (VAR_2>>16)&7, VAR_2&7, (VAR_2>>22)&7, (VAR_2>>6)&7,
  FUNC_0(VAR_2) ? 'A' : 'D', (VAR_2>>28)&7,
  FUNC_1(VAR_2) ? 'A' : 'D', (VAR_2>>12)&7);
}
