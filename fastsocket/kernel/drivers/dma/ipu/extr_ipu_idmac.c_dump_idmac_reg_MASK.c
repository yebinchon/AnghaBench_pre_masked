
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu {int dev; } ;


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
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ipu*,int ) ;
 int FUNC_2 (struct ipu*,int ) ;

__attribute__((used)) static void FUNC_3(struct ipu *VAR_10)
{
 FUNC_0(VAR_10->dev, "IDMAC_CONF 0x%x, IC_CONF 0x%x, IDMAC_CHA_EN 0x%x, "
  "IDMAC_CHA_PRI 0x%x, IDMAC_CHA_BUSY 0x%x\n",
  FUNC_1(VAR_10, VAR_4),
  FUNC_1(VAR_10, VAR_0),
  FUNC_1(VAR_10, VAR_2),
  FUNC_1(VAR_10, VAR_3),
  FUNC_1(VAR_10, VAR_1));
 FUNC_0(VAR_10->dev, "BUF0_RDY 0x%x, BUF1_RDY 0x%x, CUR_BUF 0x%x, "
  "DB_MODE 0x%x, TASKS_STAT 0x%x\n",
  FUNC_2(VAR_10, VAR_5),
  FUNC_2(VAR_10, VAR_6),
  FUNC_2(VAR_10, VAR_7),
  FUNC_2(VAR_10, VAR_8),
  FUNC_2(VAR_10, VAR_9));
}
