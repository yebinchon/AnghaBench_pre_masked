
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct solos_card {scalar_t__ fpga_version; TYPE_1__* dev; scalar_t__ config_regs; int fw_wq; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct solos_card*,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct firmware const*) ;
 scalar_t__ FUNC_5 (struct firmware const**,char const*,int *) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct solos_card *VAR_11, int VAR_12)
{
 const struct firmware *VAR_13;
 const char *VAR_14;
 uint32_t VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18;

 if (VAR_12 == 0) {
  VAR_14 = "solos-FPGA.bin";
  VAR_16 = VAR_6;
 }

 if (VAR_12 == 1) {
  VAR_14 = "solos-Firmware.bin";
  VAR_16 = VAR_9;
 }

 if (VAR_12 == 2){
  if (VAR_11->fpga_version > VAR_8){
   VAR_14 = "solos-db-FPGA.bin";
   VAR_16 = VAR_6;
  } else {
   FUNC_1(&VAR_11->dev->dev, "FPGA version doesn't support daughter board upgrades\n");
   return -VAR_1;
  }
 }

 if (VAR_12 == 3){
  if (VAR_11->fpga_version > VAR_8){
   VAR_14 = "solos-Firmware.bin";
   VAR_16 = VAR_9;
  } else {
  FUNC_1(&VAR_11->dev->dev, "FPGA version doesn't support daughter board upgrades\n");
  return -VAR_1;
  }
 }

 if (FUNC_5(&VAR_13, VAR_14, &VAR_11->dev->dev))
  return -VAR_0;

 FUNC_1(&VAR_11->dev->dev, "Flash upgrade starting\n");

 VAR_17 = VAR_13->size / VAR_16;
 FUNC_1(&VAR_11->dev->dev, "Firmware size: %zd\n", VAR_13->size);
 FUNC_1(&VAR_11->dev->dev, "Number of blocks: %d\n", VAR_17);

 FUNC_1(&VAR_11->dev->dev, "Changing FPGA to Update mode\n");
 FUNC_3(1, VAR_11->config_regs + VAR_7);
 VAR_15 = FUNC_2(VAR_11->config_regs + VAR_7);


 if(VAR_12 == 0 || VAR_12 == 2)
  FUNC_1(&VAR_11->dev->dev, "Set FPGA Flash mode to FPGA Chip Erase\n");
 if(VAR_12 == 1 || VAR_12 == 3)
  FUNC_1(&VAR_11->dev->dev, "Set FPGA Flash mode to Solos Chip Erase\n");
 FUNC_3((VAR_12 * 2), VAR_11->config_regs + VAR_5);


 FUNC_3(1, VAR_11->config_regs + VAR_10);
 FUNC_7(VAR_11->fw_wq, !FUNC_2(VAR_11->config_regs + VAR_4));

 for (VAR_18 = 0; VAR_18 < VAR_13->size; VAR_18 += VAR_16) {
  int VAR_19;


  FUNC_3(0, VAR_11->config_regs + VAR_10);



  FUNC_3(((VAR_12 * 2) + 1), VAR_11->config_regs + VAR_5);


  for(VAR_19 = 0; VAR_19 < VAR_16; VAR_19 += 4) {
   uint32_t VAR_20 = FUNC_6((uint32_t *)(VAR_13->data + VAR_18 + VAR_19));
   if(VAR_11->fpga_version > VAR_8)
    FUNC_3(VAR_20, VAR_3 + VAR_19);
   else
    FUNC_3(VAR_20, FUNC_0(VAR_11, 3) + VAR_19);
  }


  FUNC_3(VAR_18 / VAR_16, VAR_11->config_regs + VAR_2);
  FUNC_3(1, VAR_11->config_regs + VAR_10);
  FUNC_7(VAR_11->fw_wq, !FUNC_2(VAR_11->config_regs + VAR_4));
 }

 FUNC_4(VAR_13);
 FUNC_3(0, VAR_11->config_regs + VAR_10);
 FUNC_3(0, VAR_11->config_regs + VAR_7);
 FUNC_3(0, VAR_11->config_regs + VAR_5);
 FUNC_1(&VAR_11->dev->dev, "Returning FPGA to Data mode\n");
 return 0;
}
