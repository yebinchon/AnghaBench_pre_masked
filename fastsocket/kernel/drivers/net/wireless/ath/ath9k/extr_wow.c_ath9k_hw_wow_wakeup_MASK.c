
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int wow_event_mask; scalar_t__ is_pciexpress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_16 ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 int FUNC_8 (struct ath_hw*,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int) ;

u32 FUNC_10(struct ath_hw *VAR_17)
{
 u32 VAR_18 = 0;
 u32 VAR_19 = 0, VAR_20;




 VAR_20 = FUNC_5(VAR_17, VAR_15);
 VAR_19 = FUNC_4(VAR_20);







 VAR_19 &= VAR_17->wow_event_mask;

 if (VAR_19) {

  if (VAR_19 & VAR_14)
   VAR_18 |= VAR_2;

  if (FUNC_3(VAR_19))
   VAR_18 |= VAR_3;

  if (VAR_19 & VAR_13)
   VAR_18 |= VAR_1;

  if (VAR_19 & VAR_12)
   VAR_18 |= VAR_0;

 }
 FUNC_6(VAR_17, VAR_4, VAR_6,
  VAR_5);




 FUNC_8(VAR_17, VAR_15,
    FUNC_2(FUNC_5(VAR_17, VAR_15)));






 if (!FUNC_1(VAR_17)) {
  FUNC_7(VAR_17, VAR_8, VAR_11 |
       VAR_9 | VAR_10);
 }





 FUNC_8(VAR_17, VAR_7, VAR_16);
 if (FUNC_0(VAR_17) && VAR_17->is_pciexpress)
  FUNC_9(VAR_17, 0);

 VAR_17->wow_event_mask = 0;

 return VAR_18;
}
