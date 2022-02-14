
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int prev_offset; int max_skipcount; int skipcount; } ;
struct ath_hw {TYPE_2__ pacal_info; TYPE_1__* eep_ops; } ;
struct ath_common {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int**) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,int,int ,int) ;
 int FUNC_4 (struct ath_hw*,int,int) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*) ;
 scalar_t__ FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static inline void FUNC_9(struct ath_hw *VAR_30, bool VAR_31)
{
 struct ath_common *VAR_32 = FUNC_5(VAR_30);
 u32 VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37;
 u32 VAR_38, VAR_39;
 u32 VAR_40[][2] = {
  { 0x786c, 0 },
  { 0x7854, 0 },
  { 0x7820, 0 },
  { 0x7824, 0 },
  { 0x7868, 0 },
  { 0x783c, 0 },
  { 0x7838, 0 },
 };

 FUNC_6(VAR_32, VAR_27, "Running PA Calibration\n");


 if (VAR_30->eep_ops->get_eeprom(VAR_30, VAR_28) ==
     VAR_0)
  return;

 for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_40); VAR_34++)
  VAR_40[VAR_34][1] = FUNC_2(VAR_30, VAR_40[VAR_34][0]);

 VAR_33 = FUNC_2(VAR_30, 0x7834);
 VAR_33 &= (~(0x1));
 FUNC_4(VAR_30, 0x7834, VAR_33);
 VAR_33 = FUNC_2(VAR_30, 0x9808);
 VAR_33 |= (0x1 << 27);
 FUNC_4(VAR_30, 0x9808, VAR_33);

 FUNC_3(VAR_30, VAR_25, VAR_26, 1);
 FUNC_3(VAR_30, VAR_19, VAR_21, 1);
 FUNC_3(VAR_30, VAR_19, VAR_22, 1);
 FUNC_3(VAR_30, VAR_19, VAR_20, 1);
 FUNC_3(VAR_30, VAR_6, VAR_7, 0);
 FUNC_3(VAR_30, VAR_13, VAR_15, 0);
 FUNC_3(VAR_30, VAR_1, VAR_2, 0);
 FUNC_3(VAR_30, VAR_1, VAR_3, 0);
 FUNC_3(VAR_30, VAR_1, VAR_4, 0);
 FUNC_3(VAR_30, VAR_1, VAR_5, 0);
 FUNC_3(VAR_30, VAR_16, VAR_17, 7);
 FUNC_3(VAR_30, VAR_13, VAR_14, 0);
 VAR_38 = FUNC_1(FUNC_2(VAR_30, VAR_10), VAR_11);
 FUNC_3(VAR_30, VAR_10, VAR_11, 0xf);

 FUNC_4(VAR_30, VAR_24, 0xca0358a0);
 FUNC_8(30);
 FUNC_3(VAR_30, VAR_10, VAR_12, 0);
 FUNC_3(VAR_30, VAR_8, VAR_9, 0);

 for (VAR_34 = 6; VAR_34 > 0; VAR_34--) {
  VAR_33 = FUNC_2(VAR_30, 0x7834);
  VAR_33 |= (1 << (19 + VAR_34));
  FUNC_4(VAR_30, 0x7834, VAR_33);
  FUNC_8(1);
  VAR_33 = FUNC_2(VAR_30, 0x7834);
  VAR_33 &= (~(0x1 << (19 + VAR_34)));
  VAR_39 = FUNC_1(FUNC_2(VAR_30, 0x7840), VAR_23);
  VAR_33 |= (VAR_39 << (19 + VAR_34));
  FUNC_4(VAR_30, 0x7834, VAR_33);
 }

 FUNC_3(VAR_30, VAR_8, VAR_9, 1);
 FUNC_8(1);
 VAR_39 = FUNC_1(FUNC_2(VAR_30, VAR_18), VAR_23);
 FUNC_3(VAR_30, VAR_8, VAR_9, VAR_39);
 VAR_36 = FUNC_1(FUNC_2(VAR_30, VAR_10), VAR_12);
 VAR_37 = FUNC_1(FUNC_2(VAR_30, VAR_8), VAR_9);

 VAR_35 = (VAR_36<<1) | VAR_37;
 VAR_35 = VAR_35 - 0;
 VAR_36 = VAR_35>>1;
 VAR_37 = VAR_35 & 1;

 if ((!VAR_31) && (VAR_30->pacal_info.prev_offset == VAR_35)) {
  if (VAR_30->pacal_info.max_skipcount < VAR_29)
   VAR_30->pacal_info.max_skipcount =
    2 * VAR_30->pacal_info.max_skipcount;
  VAR_30->pacal_info.skipcount = VAR_30->pacal_info.max_skipcount;
 } else {
  VAR_30->pacal_info.max_skipcount = 1;
  VAR_30->pacal_info.skipcount = 0;
  VAR_30->pacal_info.prev_offset = VAR_35;
 }

 FUNC_3(VAR_30, VAR_10, VAR_12, VAR_36);
 FUNC_3(VAR_30, VAR_8, VAR_9, VAR_37);

 VAR_33 = FUNC_2(VAR_30, 0x7834);
 VAR_33 |= 0x1;
 FUNC_4(VAR_30, 0x7834, VAR_33);
 VAR_33 = FUNC_2(VAR_30, 0x9808);
 VAR_33 &= (~(0x1 << 27));
 FUNC_4(VAR_30, 0x9808, VAR_33);

 for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_40); VAR_34++)
  FUNC_4(VAR_30, VAR_40[VAR_34][0], VAR_40[VAR_34][1]);

 FUNC_3(VAR_30, VAR_10, VAR_11, VAR_38);
}
