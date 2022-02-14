
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int wow_event_mask; } ;


 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct ath_hw*,int ,int,int) ;
 int FUNC_9 (struct ath_hw*,int ,int ) ;
 int FUNC_10 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_11 (int*,int *,int) ;

void FUNC_12(struct ath_hw *VAR_8, u8 *VAR_9,
    u8 *VAR_10, int VAR_11,
    int VAR_12)
{
 int VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;


 if (VAR_11 >= VAR_5)
  return;

 FUNC_9(VAR_8, VAR_3, FUNC_7(VAR_11));


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13 += 4) {
  FUNC_11(&VAR_14, VAR_9, 4);
  FUNC_10(VAR_8, (FUNC_6(VAR_11) + VAR_13),
     VAR_14);
  VAR_9 += 4;
 }


 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13 += 4) {
  FUNC_11(&VAR_15, VAR_10, 4);
  FUNC_10(VAR_8, (FUNC_5(VAR_11) + VAR_13), VAR_15);
  VAR_10 += 4;
 }
 VAR_8->wow_event_mask |= FUNC_7(VAR_11 + VAR_4);

 if (!FUNC_0(VAR_8))
  return;

 if (VAR_11 < 4) {

  VAR_16 = (VAR_12 & VAR_2) <<
         FUNC_1(VAR_11);
  VAR_17 = FUNC_3(VAR_11);
  FUNC_8(VAR_8, VAR_0, VAR_16, VAR_17);
 } else {

  VAR_16 = (VAR_12 & VAR_2) <<
         FUNC_2(VAR_11);
  VAR_17 = FUNC_4(VAR_11);
  FUNC_8(VAR_8, VAR_1, VAR_16, VAR_17);
 }

}
