
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct TYPE_4__ {int width; } ;
struct fsl_upm_nand {unsigned int last_ctrl; int* mchip_offsets; size_t mchip_number; int wait_flags; TYPE_1__ upm; int upm_cmd_offset; int upm_addr_offset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct fsl_upm_nand*) ;
 struct fsl_upm_nand* FUNC_4 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_5, int VAR_6, unsigned int VAR_7)
{
 struct nand_chip *VAR_8 = VAR_5->priv;
 struct fsl_upm_nand *VAR_9 = FUNC_4(VAR_5);
 u32 VAR_10;

 if (!(VAR_7 & VAR_9->last_ctrl)) {
  FUNC_0(&VAR_9->upm);

  if (VAR_6 == VAR_3)
   return;

  VAR_9->last_ctrl = VAR_7 & (VAR_1 | VAR_2);
 }

 if (VAR_7 & VAR_4) {
  if (VAR_7 & VAR_1)
   FUNC_2(&VAR_9->upm, VAR_9->upm_addr_offset);
  else if (VAR_7 & VAR_2)
   FUNC_2(&VAR_9->upm, VAR_9->upm_cmd_offset);
 }

 VAR_10 = (VAR_6 << (32 - VAR_9->upm.width)) |
  VAR_9->mchip_offsets[VAR_9->mchip_number];
 FUNC_1(&VAR_9->upm, VAR_8->IO_ADDR_R, VAR_10);

 if (VAR_9->wait_flags & VAR_0)
  FUNC_3(VAR_9);
}
