
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {scalar_t__ priv; } ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,int ) ;

int FUNC_1(struct mtd_info *VAR_0, unsigned char *VAR_1,
        unsigned char *VAR_2, unsigned char *VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
       ((struct nand_chip *)VAR_0->priv)->ecc.size);
}
