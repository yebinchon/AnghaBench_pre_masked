
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int options; struct atmel_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct atmel_nand_host {int dev; int ecc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_9, u_char *VAR_10,
  u_char *VAR_11, u_char *VAR_12)
{
 struct nand_chip *VAR_13 = VAR_9->priv;
 struct atmel_nand_host *VAR_14 = VAR_13->priv;
 unsigned int VAR_15;
 unsigned int VAR_16, VAR_17;


 VAR_15 = FUNC_1(VAR_14->ecc, VAR_8);


 if (FUNC_2(!(VAR_15 & VAR_3)))
  return 0;


 VAR_17 = FUNC_1(VAR_14->ecc, VAR_7) & VAR_0;

 VAR_16 = FUNC_1(VAR_14->ecc, VAR_7) & VAR_4;
 VAR_16 >>= 4;


 if (VAR_15 & VAR_2) {


  if ((VAR_17 == VAR_0)
    && (VAR_16 == (VAR_4 >> 4))) {

   return 0;
  }



  FUNC_0(VAR_14->dev, "atmel_nand : multiple errors detected."
    " Unable to correct.\n");
  return -VAR_5;
 }


 if (VAR_15 & VAR_1) {



  FUNC_0(VAR_14->dev, "atmel_nand : one bit error on ECC code."
    " Nothing to correct\n");
  return 0;
 }

 FUNC_0(VAR_14->dev, "atmel_nand : one bit error on data."
   " (word offset in the page :"
   " 0x%x bit offset : 0x%x)\n",
   VAR_16, VAR_17);

 if (VAR_13->options & VAR_6) {

  ((unsigned short *) VAR_10)[VAR_16] ^= (1 << VAR_17);
 } else {

  VAR_10[VAR_16] ^= (1 << VAR_17);
 }
 FUNC_0(VAR_14->dev, "atmel_nand : error corrected\n");
 return 1;
}
