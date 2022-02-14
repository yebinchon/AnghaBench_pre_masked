
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ) ;

void FUNC_11(int VAR_0, int VAR_1, int VAR_2,
        unsigned long VAR_3,
        int VAR_4, int VAR_5)
{
 u32 VAR_6;

 if (FUNC_7()) {
  u16 VAR_7;

  VAR_7 = FUNC_9(FUNC_1(VAR_0));
  VAR_7 &= ~(0x1f << 2);
  VAR_7 |= VAR_1 << 2;
  FUNC_10(VAR_7, FUNC_1(VAR_0));
 }

 VAR_6 = FUNC_9(FUNC_0(VAR_0));
 VAR_6 &= ~(0x03 << 12);
 VAR_6 |= VAR_2 << 12;
 FUNC_10(VAR_6, FUNC_0(VAR_0));

 if (FUNC_7()) {
  FUNC_10(VAR_3 >> 16, FUNC_6(VAR_0));
  FUNC_10((u16)VAR_3, FUNC_5(VAR_0));
 }

 if (FUNC_8())
  FUNC_10(VAR_3, FUNC_4(VAR_0));

 FUNC_10(VAR_4, FUNC_2(VAR_0));
 FUNC_10(VAR_5, FUNC_3(VAR_0));
}
