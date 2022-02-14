
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int txrxMask; } ;
struct ar9300_eeprom {TYPE_1__ baseEepHeader; } ;
typedef int (* eeprom_read_op ) (struct ath_hw*,int,int*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct ath_hw*,int (*) (struct ath_hw*,int,int*,int),int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int*,int*,int*,int*,int*) ;
 int FUNC_6 (struct ath_hw*,int,int,int,int*,int*,int,int) ;
 int VAR_10 ;
 int FUNC_7 (struct ath_hw*,int*,int) ;
 int FUNC_8 (struct ath_hw*,int,int*,int) ;
 int FUNC_9 (struct ath_hw*,int,int*,int) ;
 struct ath_common* FUNC_10 (struct ath_hw*) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_common*,int ,char*,...) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int*) ;
 int* FUNC_15 (int,int ) ;
 int FUNC_16 (int*,int *,int) ;

__attribute__((used)) static int FUNC_17(struct ath_hw *VAR_11,
       u8 *VAR_12, int VAR_13)
{


 int VAR_14;
 u8 *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 u16 VAR_23, VAR_24;
 struct ath_common *VAR_25 = FUNC_10(VAR_11);
 struct ar9300_eeprom *VAR_26;
 eeprom_read_op VAR_27;

 if (FUNC_11(VAR_11)) {
  u8 VAR_28;

  FUNC_7(VAR_11, VAR_12, VAR_13);


  VAR_26 = (struct ar9300_eeprom *) VAR_12;
  VAR_28 = VAR_26->baseEepHeader.txrxMask;
  if (VAR_28 != 0 && VAR_28 != 0xff)
   return 0;
 }

 VAR_15 = FUNC_15(2048, VAR_8);
 if (!VAR_15)
  return -VAR_7;

 FUNC_16(VAR_12, &VAR_10, VAR_13);

 VAR_27 = FUNC_8;
 if (FUNC_1(VAR_11))
  VAR_14 = VAR_1;
 else if (FUNC_0(VAR_11))
  VAR_14 = VAR_2;
 else
  VAR_14 = VAR_0;
 FUNC_12(VAR_25, VAR_5, "Trying EEPROM access at Address 0x%04x\n",
  VAR_14);
 if (FUNC_2(VAR_11, VAR_27, VAR_14))
  goto found;

 VAR_14 = VAR_2;
 FUNC_12(VAR_25, VAR_5, "Trying EEPROM access at Address 0x%04x\n",
  VAR_14);
 if (FUNC_2(VAR_11, VAR_27, VAR_14))
  goto found;

 VAR_27 = FUNC_9;
 VAR_14 = VAR_0;
 FUNC_12(VAR_25, VAR_5, "Trying OTP access at Address 0x%04x\n", VAR_14);
 if (FUNC_2(VAR_11, VAR_27, VAR_14))
  goto found;

 VAR_14 = VAR_2;
 FUNC_12(VAR_25, VAR_5, "Trying OTP access at Address 0x%04x\n", VAR_14);
 if (FUNC_2(VAR_11, VAR_27, VAR_14))
  goto found;

 goto fail;

found:
 FUNC_12(VAR_25, VAR_5, "Found valid EEPROM data\n");

 for (VAR_22 = 0; VAR_22 < 100; VAR_22++) {
  if (!VAR_27(VAR_11, VAR_14, VAR_15, VAR_4))
   goto fail;

  if (!FUNC_3(VAR_15))
   break;

  FUNC_5(VAR_15, &VAR_16, &VAR_17,
           &VAR_18, &VAR_19, &VAR_20);
  FUNC_12(VAR_25, VAR_5,
   "Found block at %x: code=%d ref=%d length=%d major=%d minor=%d\n",
   VAR_14, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
  if ((!FUNC_1(VAR_11) && VAR_18 >= 1024) ||
      (FUNC_1(VAR_11) && VAR_18 > VAR_6)) {
   FUNC_12(VAR_25, VAR_5, "Skipping bad header\n");
   VAR_14 -= VAR_4;
   continue;
  }

  VAR_21 = VAR_18;
  VAR_27(VAR_11, VAR_14, VAR_15, VAR_4 + VAR_21 + VAR_3);
  VAR_23 = FUNC_4(&VAR_15[VAR_4], VAR_18);
  VAR_24 = FUNC_13(&VAR_15[VAR_4 + VAR_21]);
  FUNC_12(VAR_25, VAR_5, "checksum %x %x\n",
   VAR_23, VAR_24);
  if (VAR_23 == VAR_24) {
   FUNC_6(VAR_11, VAR_22, VAR_16, VAR_17, VAR_12,
       VAR_15, VAR_18, VAR_13);
  } else {
   FUNC_12(VAR_25, VAR_5,
    "skipping block with bad checksum\n");
  }
  VAR_14 -= (VAR_4 + VAR_21 + VAR_3);
 }

 FUNC_14(VAR_15);
 return VAR_14;

fail:
 FUNC_14(VAR_15);
 return -1;
}
