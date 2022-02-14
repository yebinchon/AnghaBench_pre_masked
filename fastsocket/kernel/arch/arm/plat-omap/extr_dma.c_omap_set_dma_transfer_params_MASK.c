
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
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

void FUNC_9(int VAR_2, int VAR_3, int VAR_4,
      int VAR_5, int VAR_6,
      int VAR_7, int VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_7(FUNC_4(VAR_2));
 VAR_9 &= ~0x03;
 VAR_9 |= VAR_3;
 FUNC_8(VAR_9, FUNC_4(VAR_2));

 if (FUNC_5()) {
  u16 VAR_10;

  VAR_10 = FUNC_7(FUNC_0(VAR_2));
  VAR_10 &= ~(1 << 5);
  if (VAR_6 == VAR_1)
   VAR_10 |= 1 << 5;
  FUNC_8(VAR_10, FUNC_0(VAR_2));

  VAR_10 = FUNC_7(FUNC_1(VAR_2));
  VAR_10 &= ~(1 << 2);
  if (VAR_6 == VAR_0)
   VAR_10 |= 1 << 2;
  FUNC_8(VAR_10, FUNC_1(VAR_2));
 }

 if (FUNC_6() && VAR_7) {
  u32 VAR_11;

  VAR_11 = FUNC_7(FUNC_0(VAR_2));


  VAR_11 &= ~((3 << 19) | 0x1f);
  VAR_11 |= (VAR_7 & ~0x1f) << 14;
  VAR_11 |= VAR_7 & 0x1f;

  if (VAR_6 & VAR_1)
   VAR_11 |= 1 << 5;
  else
   VAR_11 &= ~(1 << 5);

  if (VAR_6 & VAR_0)
   VAR_11 |= 1 << 18;
  else
   VAR_11 &= ~(1 << 18);

  if (VAR_8)
   VAR_11 |= 1 << 24;
  else
   VAR_11 &= ~(1 << 24);

  FUNC_8(VAR_11, FUNC_0(VAR_2));
 }

 FUNC_8(VAR_4, FUNC_2(VAR_2));
 FUNC_8(VAR_5, FUNC_3(VAR_2));
}
