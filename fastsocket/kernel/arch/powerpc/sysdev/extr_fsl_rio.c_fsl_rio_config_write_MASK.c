
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_priv {scalar_t__ maint_win; TYPE_1__* maint_atmu_regs; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_2__ {int rowtar; } ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct rio_mport *VAR_0, int VAR_1, u16 VAR_2,
   u8 VAR_3, u32 VAR_4, int VAR_5, u32 VAR_6)
{
 struct rio_priv *VAR_7 = VAR_0->priv;
 u8 *VAR_8;
 FUNC_3
     ("fsl_rio_config_write: index %d destid %d hopcount %d offset %8.8x len %d val %8.8x\n",
      VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(&VAR_7->maint_atmu_regs->rowtar,
   (VAR_2 << 22) | (VAR_3 << 12) | ((VAR_4 & ~0x3) >> 9));

 VAR_8 = (u8 *) VAR_7->maint_win + VAR_4;
 switch (VAR_5) {
 case 1:
  FUNC_0((u8 *) VAR_8, VAR_6);
  break;
 case 2:
  FUNC_1((u16 *) VAR_8, VAR_6);
  break;
 default:
  FUNC_2((u32 *) VAR_8, VAR_6);
  break;
 }

 return 0;
}
