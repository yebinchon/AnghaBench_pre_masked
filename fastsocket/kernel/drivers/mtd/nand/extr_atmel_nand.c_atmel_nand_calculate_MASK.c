
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_4__ {TYPE_1__* layout; } ;
struct nand_chip {TYPE_2__ ecc; struct atmel_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct atmel_nand_host {int ecc; } ;
struct TYPE_3__ {int * eccpos; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_3,
  const u_char *VAR_4, unsigned char *VAR_5)
{
 struct nand_chip *VAR_6 = VAR_3->priv;
 struct atmel_nand_host *VAR_7 = VAR_6->priv;
 uint32_t *VAR_8 = VAR_6->ecc.layout->eccpos;
 unsigned int VAR_9;


 VAR_9 = FUNC_0(VAR_7->ecc, VAR_2);

 VAR_5[0] = VAR_9 & 0xFF;
 VAR_5[1] = (VAR_9 >> 8) & 0xFF;


 VAR_9 = FUNC_0(VAR_7->ecc, VAR_1) & VAR_0;

 VAR_5[2] = VAR_9 & 0xFF;
 VAR_5[3] = (VAR_9 >> 8) & 0xFF;

 return 0;
}
