
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath_hw {int shared_chain_lnadiv; scalar_t__ curchan; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 int FUNC_6 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_23,
        bool VAR_24)
{
 u8 VAR_25;
 u32 VAR_26;

 if (!FUNC_0(VAR_23))
  return;

 VAR_23->shared_chain_lnadiv = VAR_24;
 VAR_25 = VAR_23->eep_ops->get_eeprom(VAR_23, VAR_22);

 VAR_26 = FUNC_3(VAR_23, VAR_19);
 VAR_26 &= (~VAR_0);
 VAR_26 |= (VAR_25 & 0x3f) << VAR_1;
 VAR_26 &= ~VAR_12;
 VAR_26 |= ((VAR_25 >> 6) & 0x1) << VAR_13;

 if (VAR_24)
  VAR_26 |= VAR_2;

 FUNC_5(VAR_23, VAR_19, VAR_26);

 VAR_26 = FUNC_3(VAR_23, VAR_18);
 VAR_26 &= ~VAR_5;
 VAR_26 |= ((VAR_25 >> 7) & 0x1) << VAR_6;

 if (VAR_24)
  VAR_26 |= VAR_5;

 FUNC_5(VAR_23, VAR_18, VAR_26);

 if (VAR_24) {
  FUNC_4(VAR_23, VAR_19,
       (1 << VAR_17));
  if (VAR_23->curchan && FUNC_1(VAR_23->curchan))
   FUNC_4(VAR_23, VAR_20,
        VAR_21);
  FUNC_4(VAR_23, VAR_3,
       VAR_4);
 } else {
  FUNC_2(VAR_23, VAR_19, VAR_2);
  FUNC_2(VAR_23, VAR_19,
       (1 << VAR_17));
  FUNC_2(VAR_23, VAR_18, VAR_5);
  FUNC_2(VAR_23, VAR_3,
       VAR_4);

  VAR_26 = FUNC_3(VAR_23, VAR_19);
  VAR_26 &= ~(VAR_15 |
   VAR_8 |
   VAR_14 |
   VAR_7);
  VAR_26 |= (VAR_10 << VAR_16);
  VAR_26 |= (VAR_11 << VAR_9);
  FUNC_5(VAR_23, VAR_19, VAR_26);
 }
}
