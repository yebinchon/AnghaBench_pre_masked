
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; } ;
struct nand_chip {int (* write_buf ) (struct mtd_info*,int const*,int) ;TYPE_1__ ecc; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0, struct nand_chip *VAR_1,
       const uint8_t *VAR_2)
{
 int VAR_3, VAR_4 = VAR_1->ecc.size;
 int VAR_5 = VAR_1->ecc.bytes;
 int VAR_6 = VAR_1->ecc.steps;
 const uint8_t *VAR_7 = VAR_2;

 for (VAR_3 = 0; VAR_6; VAR_6--, VAR_3 += VAR_5, VAR_7 += VAR_4)
  VAR_1->write_buf(VAR_0, VAR_7, VAR_4);
}
