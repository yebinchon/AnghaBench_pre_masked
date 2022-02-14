
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_10 (scalar_t__) ;
 int FUNC_11 (unsigned int,scalar_t__) ;

void FUNC_12(int VAR_12)
{
 unsigned int VAR_13 = VAR_12 & VAR_7;
 unsigned int VAR_14 = (VAR_12 & VAR_8) >> VAR_9;
 unsigned int VAR_15 = (VAR_12 & VAR_3) >> VAR_4;
 unsigned int VAR_16;


 VAR_16 = FUNC_10(VAR_11 + FUNC_9(VAR_14));
 if (VAR_12 & VAR_10)
  VAR_16 |= (1 << VAR_13);
 else
  VAR_16 &= ~(1 << VAR_13);
 FUNC_11(VAR_16, VAR_11 + FUNC_9(VAR_14));


 VAR_16 = FUNC_10(VAR_11 + FUNC_0(VAR_14));
 if (VAR_12 & VAR_5)
  VAR_16 |= 1 << VAR_13;
 else
  VAR_16 &= ~(1 << VAR_13);
 FUNC_11(VAR_16, VAR_11 + FUNC_0(VAR_14));


 VAR_16 = FUNC_10(VAR_11 + FUNC_2(VAR_14));
 if (VAR_12 & VAR_0)
  VAR_16 |= (1 << VAR_13);
 else
  VAR_16 &= ~(1 << VAR_13);
 FUNC_11(VAR_16, VAR_11 + FUNC_2(VAR_14));


 VAR_16 = FUNC_10(VAR_11 + FUNC_1(VAR_14));
 if (VAR_12 & (VAR_6 | VAR_0))
  VAR_16 &= ~(1 << VAR_13);
 else
  VAR_16 |= (1 << VAR_13);
 FUNC_11(VAR_16, VAR_11 + FUNC_1(VAR_14));

 if (VAR_13 < 16) {
  VAR_16 = FUNC_10(VAR_11 + FUNC_7(VAR_14));
  VAR_16 &= ~(3 << (VAR_13 * 2));
  VAR_16 |= (VAR_15 << (VAR_13 * 2));
  FUNC_11(VAR_16, VAR_11 + FUNC_7(VAR_14));

  VAR_16 = FUNC_10(VAR_11 + FUNC_3(VAR_14));
  VAR_16 &= ~(3 << (VAR_13 * 2));
  VAR_16 |= ((VAR_12 >> VAR_1) & 3) << (VAR_13 * 2);
  FUNC_11(VAR_16, VAR_11 + FUNC_3(VAR_14));

  VAR_16 = FUNC_10(VAR_11 + FUNC_5(VAR_14));
  VAR_16 &= ~(3 << (VAR_13 * 2));
  VAR_16 |= ((VAR_12 >> VAR_2) & 3) << (VAR_13 * 2);
  FUNC_11(VAR_16, VAR_11 + FUNC_5(VAR_14));
 } else {
  VAR_13 -= 16;

  VAR_16 = FUNC_10(VAR_11 + FUNC_8(VAR_14));
  VAR_16 &= ~(3 << (VAR_13 * 2));
  VAR_16 |= (VAR_15 << (VAR_13 * 2));
  FUNC_11(VAR_16, VAR_11 + FUNC_8(VAR_14));

  VAR_16 = FUNC_10(VAR_11 + FUNC_4(VAR_14));
  VAR_16 &= ~(3 << (VAR_13 * 2));
  VAR_16 |= ((VAR_12 >> VAR_1) & 3) << (VAR_13 * 2);
  FUNC_11(VAR_16, VAR_11 + FUNC_4(VAR_14));

  VAR_16 = FUNC_10(VAR_11 + FUNC_6(VAR_14));
  VAR_16 &= ~(3 << (VAR_13 * 2));
  VAR_16 |= ((VAR_12 >> VAR_2) & 3) << (VAR_13 * 2);
  FUNC_11(VAR_16, VAR_11 + FUNC_6(VAR_14));
 }
}
