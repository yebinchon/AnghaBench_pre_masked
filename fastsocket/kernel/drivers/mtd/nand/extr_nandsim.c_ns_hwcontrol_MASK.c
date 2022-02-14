
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cle; int ale; int ce; } ;
struct nandsim {TYPE_1__ lines; } ;
struct nand_chip {struct nandsim* priv; } ;
struct mtd_info {scalar_t__ priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct mtd_info*,int) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct nandsim *VAR_7 = ((struct nand_chip *)VAR_4->priv)->priv;

 VAR_7->lines.cle = VAR_6 & VAR_1 ? 1 : 0;
 VAR_7->lines.ale = VAR_6 & VAR_0 ? 1 : 0;
 VAR_7->lines.ce = VAR_6 & VAR_3 ? 1 : 0;

 if (VAR_5 != VAR_2)
  FUNC_0(VAR_4, VAR_5);
}
