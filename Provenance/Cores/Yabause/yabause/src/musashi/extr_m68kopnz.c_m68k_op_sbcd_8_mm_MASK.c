
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;

void FUNC_9(void)
{
 uint VAR_5 = FUNC_5();
 uint VAR_6 = FUNC_0();
 uint VAR_7 = FUNC_7(VAR_6);
 uint VAR_8 = FUNC_2(VAR_7) - FUNC_2(VAR_5) - FUNC_6();

 VAR_2 = ~VAR_8;

 if(VAR_8 > 9)
  VAR_8 -= 6;
 VAR_8 += FUNC_1(VAR_7) - FUNC_1(VAR_5);
 VAR_3 = VAR_0 = (VAR_8 > 0x99) << 8;
 if(VAR_0)
  VAR_8 += 0xa0;

 VAR_8 = FUNC_3(VAR_8);

 VAR_2 &= VAR_8;
 VAR_1 = FUNC_4(VAR_8);
 VAR_4 |= VAR_8;

 FUNC_8(VAR_6, VAR_8);
}
