
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_8)
{
 FUNC_1(VAR_8->dev, "  R_008010_GRBM_STATUS      = 0x%08X\n",
   FUNC_0(VAR_6));
 FUNC_1(VAR_8->dev, "  R_008014_GRBM_STATUS2     = 0x%08X\n",
   FUNC_0(VAR_7));
 FUNC_1(VAR_8->dev, "  R_000E50_SRBM_STATUS      = 0x%08X\n",
   FUNC_0(VAR_5));
 FUNC_1(VAR_8->dev, "  R_008674_CP_STALLED_STAT1 = 0x%08X\n",
   FUNC_0(VAR_1));
 FUNC_1(VAR_8->dev, "  R_008678_CP_STALLED_STAT2 = 0x%08X\n",
   FUNC_0(VAR_2));
 FUNC_1(VAR_8->dev, "  R_00867C_CP_BUSY_STAT     = 0x%08X\n",
   FUNC_0(VAR_0));
 FUNC_1(VAR_8->dev, "  R_008680_CP_STAT          = 0x%08X\n",
   FUNC_0(VAR_3));
 FUNC_1(VAR_8->dev, "  R_00D034_DMA_STATUS_REG   = 0x%08X\n",
  FUNC_0(VAR_4));
}
