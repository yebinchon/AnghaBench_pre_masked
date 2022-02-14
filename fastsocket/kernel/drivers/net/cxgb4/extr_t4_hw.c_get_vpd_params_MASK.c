
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd ;
typedef scalar_t__ u8 ;
struct vpd_params {int sn; int ec; int id; } ;
struct adapter {int pdev_dev; int pdev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,scalar_t__*,unsigned int) ;
 unsigned int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,int,int ) ;
 int FUNC_6 (scalar_t__*) ;
 unsigned int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct adapter *VAR_10, struct vpd_params *VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 u8 VAR_16[VAR_9], VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20;

 VAR_13 = FUNC_4(VAR_10->pdev, VAR_8, sizeof(VAR_16), VAR_16);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_16[0] != VAR_4) {
  FUNC_1(VAR_10->pdev_dev, "missing VPD ID string\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_7(VAR_16);
 if (VAR_20 > VAR_2)
  VAR_20 = VAR_2;

 VAR_12 = FUNC_5(VAR_16, 0, VAR_9, VAR_5);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10->pdev_dev, "missing VPD-R section\n");
  return -VAR_1;
 }

 VAR_18 = FUNC_7(&VAR_16[VAR_12]);
 VAR_19 = VAR_12 + VAR_6;
 if (VAR_18 + VAR_19 > VAR_9) {
  FUNC_1(VAR_10->pdev_dev, "bad VPD-R length %u\n", VAR_18);
  return -VAR_1;
 }
 do { VAR_12 = FUNC_0(VAR_16, VAR_19, VAR_18, "RV"); if (VAR_12 < 0) { FUNC_1(VAR_10->pdev_dev, "missing VPD keyword " "RV" "\n"); return -VAR_1; } VAR_12 += VAR_3; } while (0);
 for (VAR_17 = 0; VAR_12 >= 0; VAR_12--)
  VAR_17 += VAR_16[VAR_12];

 if (VAR_17) {
  FUNC_1(VAR_10->pdev_dev,
   "corrupted VPD EEPROM, actual csum %u\n", VAR_17);
  return -VAR_1;
 }

 do { VAR_14 = FUNC_0(VAR_16, VAR_19, VAR_18, "EC"); if (VAR_14 < 0) { FUNC_1(VAR_10->pdev_dev, "missing VPD keyword " "EC" "\n"); return -VAR_1; } VAR_14 += VAR_3; } while (0);
 do { VAR_15 = FUNC_0(VAR_16, VAR_19, VAR_18, "SN"); if (VAR_15 < 0) { FUNC_1(VAR_10->pdev_dev, "missing VPD keyword " "SN" "\n"); return -VAR_1; } VAR_15 += VAR_3; } while (0);


 FUNC_2(VAR_11->id, VAR_16 + VAR_6, VAR_20);
 FUNC_8(VAR_11->id);
 FUNC_2(VAR_11->ec, VAR_16 + VAR_14, VAR_0);
 FUNC_8(VAR_11->ec);
 VAR_12 = FUNC_6(VAR_16 + VAR_15 - VAR_3);
 FUNC_2(VAR_11->sn, VAR_16 + VAR_15, FUNC_3(VAR_12, VAR_7));
 FUNC_8(VAR_11->sn);
 return 0;
}
