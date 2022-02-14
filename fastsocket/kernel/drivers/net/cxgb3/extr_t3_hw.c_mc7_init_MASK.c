
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
struct mc7_timing_params {int member_0; int member_1; int member_2; int member_4; int member_5; int member_6; int RdToWrDly; int WrToRdDly; int BkCyc; int * RefCyc; int PreCyc; int ActToRdWrDly; int ActToPreDly; TYPE_1__ member_3; } ;
struct mc7 {unsigned int size; scalar_t__ offset; int name; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct adapter*,char*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct adapter*,scalar_t__) ;
 int FUNC_14 (struct adapter*,scalar_t__,int ,int ) ;
 int FUNC_15 (struct adapter*,scalar_t__,unsigned int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (struct adapter*,scalar_t__,unsigned int const) ;

__attribute__((used)) static int FUNC_18(struct mc7 *VAR_28, unsigned int VAR_29, int VAR_30)
{
 static const unsigned int VAR_31[] = {
  0x632, 0x642, 0x652, 0x432, 0x442
 };
 static const struct mc7_timing_params VAR_32[] = {
  {12, 3, 4, {20, 28, 34, 52, 0}, 15, 6, 4},
  {12, 4, 5, {20, 28, 34, 52, 0}, 16, 7, 4},
  {12, 5, 6, {20, 28, 34, 52, 0}, 17, 8, 4},
  {9, 3, 4, {15, 21, 26, 39, 0}, 12, 6, 4},
  {9, 4, 5, {15, 21, 26, 39, 0}, 13, 7, 4}
 };

 u32 VAR_33;
 unsigned int VAR_34, VAR_35, VAR_36, VAR_37;
 struct adapter *VAR_38 = VAR_28->adapter;
 const struct mc7_timing_params *VAR_39 = &VAR_32[VAR_30];

 if (!VAR_28->size)
  return 0;

 VAR_33 = FUNC_13(VAR_38, VAR_28->offset + VAR_5);
 VAR_36 = VAR_33 & VAR_26;
 VAR_34 = FUNC_2(VAR_33);
 VAR_35 = FUNC_1(VAR_33);

 FUNC_15(VAR_38, VAR_28->offset + VAR_5, VAR_33 | VAR_22);
 VAR_33 = FUNC_13(VAR_38, VAR_28->offset + VAR_5);
 FUNC_12(1);

 if (!VAR_36) {
  FUNC_15(VAR_38, VAR_28->offset + VAR_4, VAR_25);
  FUNC_13(VAR_38, VAR_28->offset + VAR_4);
  FUNC_12(1);
  if (FUNC_13(VAR_38, VAR_28->offset + VAR_4) &
      (VAR_15 | VAR_25 | VAR_16)) {
   FUNC_0(VAR_38, "%s MC7 calibration timed out\n",
          VAR_28->name);
   goto out_fail;
  }
 }

 FUNC_15(VAR_38, VAR_28->offset + VAR_12,
       FUNC_3(VAR_39->ActToPreDly) |
       FUNC_4(VAR_39->ActToRdWrDly) | FUNC_7(VAR_39->PreCyc) |
       FUNC_10(VAR_39->RefCyc[VAR_35]) | FUNC_5(VAR_39->BkCyc) |
       FUNC_11(VAR_39->WrToRdDly) | FUNC_9(VAR_39->RdToWrDly));

 FUNC_15(VAR_38, VAR_28->offset + VAR_5,
       VAR_33 | VAR_17 | VAR_27);
 FUNC_13(VAR_38, VAR_28->offset + VAR_5);

 if (!VAR_36)
  FUNC_14(VAR_38, VAR_28->offset + VAR_6, VAR_18,
     VAR_18);
 FUNC_16(1);

 VAR_33 = VAR_36 ? 3 : 6;
 if (FUNC_17(VAR_38, VAR_28->offset + VAR_13, 0) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_9, 0) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_10, 0) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_8, VAR_33))
  goto out_fail;

 if (!VAR_36) {
  FUNC_15(VAR_38, VAR_28->offset + VAR_11, 0x100);
  FUNC_14(VAR_38, VAR_28->offset + VAR_6, VAR_19, 0);
  FUNC_16(5);
 }

 if (FUNC_17(VAR_38, VAR_28->offset + VAR_13, 0) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_14, 0) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_14, 0) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_11,
         VAR_31[VAR_30]) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_8, VAR_33 | 0x380) ||
     FUNC_17(VAR_38, VAR_28->offset + VAR_8, VAR_33))
  goto out_fail;


 VAR_29 = VAR_29 * 7812 + VAR_29 / 2;
 VAR_29 /= 1000000;

 FUNC_15(VAR_38, VAR_28->offset + VAR_14,
       VAR_23 | FUNC_8(VAR_29));
 FUNC_13(VAR_38, VAR_28->offset + VAR_14);

 FUNC_15(VAR_38, VAR_28->offset + VAR_7, VAR_21 | VAR_20);
 FUNC_15(VAR_38, VAR_28->offset + VAR_2, 0);
 FUNC_15(VAR_38, VAR_28->offset + VAR_0, 0);
 FUNC_15(VAR_38, VAR_28->offset + VAR_1,
       (VAR_28->size << VAR_34) - 1);
 FUNC_15(VAR_38, VAR_28->offset + VAR_3, FUNC_6(1));
 FUNC_13(VAR_38, VAR_28->offset + VAR_3);

 VAR_37 = 50;
 do {
  FUNC_12(250);
  VAR_33 = FUNC_13(VAR_38, VAR_28->offset + VAR_3);
 } while ((VAR_33 & VAR_15) && --VAR_37);
 if (VAR_33 & VAR_15) {
  FUNC_0(VAR_38, "%s MC7 BIST timed out\n", VAR_28->name);
  goto out_fail;
 }


 FUNC_14(VAR_38, VAR_28->offset + VAR_5, 0, VAR_24);
 return 0;

out_fail:
 return -1;
}
