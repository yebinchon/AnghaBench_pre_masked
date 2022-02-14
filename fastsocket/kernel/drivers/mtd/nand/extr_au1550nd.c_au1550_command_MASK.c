
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u8 ;
struct nand_chip {int options; int chipsize; int chip_delay; int (* dev_ready ) (struct mtd_info*) ;} ;
struct mtd_info {int writesize; struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct mtd_info *VAR_7, unsigned VAR_8, int VAR_9, int VAR_10)
{
 register struct nand_chip *VAR_11 = VAR_7->priv;
 int VAR_12 = 0, VAR_13;
 ulong VAR_14;


 FUNC_0(VAR_7, VAR_5);



 if (VAR_8 == 129) {
  int VAR_15;

  if (VAR_9 >= VAR_7->writesize) {

   VAR_9 -= VAR_7->writesize;
   VAR_15 = 131;
  } else if (VAR_9 < 256) {

   VAR_15 = 133;
  } else {
   VAR_9 -= 256;
   VAR_15 = 132;
  }
  FUNC_1(VAR_7, VAR_15);
 }
 FUNC_1(VAR_7, VAR_8);


 FUNC_0(VAR_7, VAR_2);

 if (VAR_9 != -1 || VAR_10 != -1) {
  FUNC_0(VAR_7, VAR_4);


  if (VAR_9 != -1) {

   if (VAR_11->options & VAR_0)
    VAR_9 >>= 1;
   FUNC_1(VAR_7, VAR_9);
  }
  if (VAR_10 != -1) {
   FUNC_1(VAR_7, (u8)(VAR_10 & 0xff));

   if (VAR_8 == 133 ||
       VAR_8 == 132 ||
       VAR_8 == 131) {
    VAR_12 = 1;
    FUNC_3(VAR_14);
    FUNC_0(VAR_7, VAR_6);
   }

   FUNC_1(VAR_7, (u8)(VAR_10 >> 8));


   if (VAR_11->chipsize > (32 << 20))
    FUNC_1(VAR_7, (u8)((VAR_10 >> 16) & 0x0f));
  }

  FUNC_0(VAR_7, VAR_1);
 }





 switch (VAR_8) {

 case 134:
 case 136:
 case 135:
 case 129:
 case 128:
  return;

 case 130:
  break;

 case 133:
 case 132:
 case 131:

  if (FUNC_8(!VAR_12))
   break;


  FUNC_4(100);

  for (VAR_13 = VAR_11->chip_delay; !VAR_11->dev_ready(VAR_7) && VAR_13 > 0; --VAR_13)
   FUNC_7(1);


  FUNC_0(VAR_7, VAR_3);
  FUNC_2(VAR_14);
  return;
 }

 FUNC_4(100);

 while(!VAR_11->dev_ready(VAR_7));
}
