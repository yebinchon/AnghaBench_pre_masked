
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nand_chip {int (* read_byte ) (struct mtd_info*) ;} ;
struct mtd_info {scalar_t__ priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static uint16_t FUNC_3(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = (struct nand_chip *)VAR_0->priv;

 FUNC_0("read_word\n");

 return VAR_1->read_byte(VAR_0) | (VAR_1->read_byte(VAR_0) << 8);
}
