
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(void)
{
  uint VAR_2 = FUNC_0();
  uint VAR_3 = FUNC_1(VAR_2);
  uint VAR_4 = 1 << (VAR_0 & 7);

  VAR_1 = VAR_3 & VAR_4;
  FUNC_2(VAR_2, VAR_3 & ~VAR_4);
}
