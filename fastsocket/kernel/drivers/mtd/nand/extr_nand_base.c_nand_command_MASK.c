
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; int chipsize; int (* read_byte ) (struct mtd_info*) ;int chip_delay; int dev_ready; int (* cmd_ctrl ) (struct mtd_info*,int,int) ;} ;
struct mtd_info {int writesize; struct nand_chip* priv; } ;


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
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mtd_info*,int,int) ;
 int FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (struct mtd_info*,unsigned int,int) ;
 int FUNC_5 (struct mtd_info*,int,int) ;
 int FUNC_6 (struct mtd_info*,int,int) ;
 int FUNC_7 (struct mtd_info*,int,int) ;
 int FUNC_8 (struct mtd_info*,int,int) ;
 int FUNC_9 (struct mtd_info*,int,int) ;
 int FUNC_10 (struct mtd_info*,int const,int) ;
 int FUNC_11 (struct mtd_info*,int,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct mtd_info *VAR_10, unsigned int VAR_11,
    int VAR_12, int VAR_13)
{
 register struct nand_chip *VAR_14 = VAR_10->priv;
 int VAR_15 = VAR_7 | VAR_6;




 if (VAR_11 == 129) {
  int VAR_16;

  if (VAR_12 >= VAR_10->writesize) {

   VAR_12 -= VAR_10->writesize;
   VAR_16 = VAR_4;
  } else if (VAR_12 < 256) {

   VAR_16 = VAR_2;
  } else {
   VAR_12 -= 256;
   VAR_16 = VAR_3;
  }
  VAR_14->cmd_ctrl(VAR_10, VAR_16, VAR_15);
  VAR_15 &= ~VAR_6;
 }
 VAR_14->cmd_ctrl(VAR_10, VAR_11, VAR_15);




 VAR_15 = VAR_5 | VAR_6;

 if (VAR_12 != -1) {

  if (VAR_14->options & VAR_0)
   VAR_12 >>= 1;
  VAR_14->cmd_ctrl(VAR_10, VAR_12, VAR_15);
  VAR_15 &= ~VAR_6;
 }
 if (VAR_13 != -1) {
  VAR_14->cmd_ctrl(VAR_10, VAR_13, VAR_15);
  VAR_15 &= ~VAR_6;
  VAR_14->cmd_ctrl(VAR_10, VAR_13 >> 8, VAR_15);

  if (VAR_14->chipsize > (32 << 20))
   VAR_14->cmd_ctrl(VAR_10, VAR_13 >> 16, VAR_15);
 }
 VAR_14->cmd_ctrl(VAR_10, VAR_1, VAR_8 | VAR_6);





 switch (VAR_11) {

 case 131:
 case 133:
 case 132:
 case 129:
 case 128:
  return;

 case 130:
  if (VAR_14->dev_ready)
   break;
  FUNC_12(VAR_14->chip_delay);
  VAR_14->cmd_ctrl(VAR_10, 128,
          VAR_7 | VAR_6);
  VAR_14->cmd_ctrl(VAR_10,
          VAR_1, VAR_8 | VAR_6);
  while (!(VAR_14->read_byte(VAR_10) & VAR_9)) ;
  return;


 default:




  if (!VAR_14->dev_ready) {
   FUNC_12(VAR_14->chip_delay);
   return;
  }
 }


 FUNC_1(100);

 FUNC_0(VAR_10);
}
