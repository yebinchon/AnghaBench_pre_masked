
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mtd_info {int writesize; int size; int oobsize; struct cafe_priv* priv; } ;
struct cafe_priv {int ctl2; int ctl1; int data_pos; int datalen; TYPE_1__* pdev; scalar_t__ mmio; int nr_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;







 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 int FUNC_2 (struct cafe_priv*,int ) ;
 int FUNC_3 (struct cafe_priv*,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_11(struct mtd_info *VAR_16, unsigned VAR_17,
         int VAR_18, int VAR_19)
{
 struct cafe_priv *VAR_20 = VAR_16->priv;
 int VAR_21 = 0;
 uint32_t VAR_22;
 uint32_t VAR_23 = 0x80000000;

 FUNC_1(&VAR_20->pdev->dev, "cmdfunc %02x, 0x%x, 0x%x\n",
  VAR_17, VAR_18, VAR_19);

 if (VAR_17 == 138 || VAR_17 == 137) {

  FUNC_3(VAR_20, VAR_20->ctl2 | 0x100 | VAR_17, VAR_10);
  VAR_22 = VAR_20->ctl1;
  VAR_20->ctl2 &= ~(1<<30);
  FUNC_1(&VAR_20->pdev->dev, "Continue command, ctl1 %08x, #data %d\n",
     VAR_20->ctl1, VAR_20->nr_data);
  goto do_command;
 }

 FUNC_3(VAR_20, 0, VAR_10);


 if (VAR_16->writesize > 512 &&
     VAR_17 == VAR_6) {
  VAR_18 += VAR_16->writesize;
  VAR_17 = VAR_3;
 }




 if (VAR_18 != -1) {
  FUNC_3(VAR_20, VAR_18, VAR_1);
  VAR_21 = 2;
  if (VAR_19 != -1)
   goto write_adr2;
 } else if (VAR_19 != -1) {
  FUNC_3(VAR_20, VAR_19 & 0xffff, VAR_1);
  VAR_19 >>= 16;
 write_adr2:
  FUNC_3(VAR_20, VAR_19, VAR_2);
  VAR_21 += 2;
  if (VAR_16->size > VAR_16->writesize << 16)
   VAR_21++;
 }

 VAR_20->data_pos = VAR_20->datalen = 0;


 VAR_22 = 0x80000000 | VAR_17 | (VAR_20->ctl1 & VAR_0);


 if (VAR_17 == VAR_5 || VAR_17 == 133) {
  VAR_22 |= (1<<26);

  VAR_20->datalen = 4;

  VAR_21 = 1;
 } else if (VAR_17 == VAR_3 || VAR_17 == VAR_4 ||
     VAR_17 == VAR_6 || VAR_17 == 135) {
  VAR_22 |= 1<<26;

  VAR_20->datalen = VAR_16->writesize + VAR_16->oobsize - VAR_18;
 } else if (VAR_17 == 134)
  VAR_22 |= 1<<25;


 if (VAR_21)
  VAR_22 |= ((VAR_21-1)|8) << 27;

 if (VAR_17 == 134 || VAR_17 == 139) {


  VAR_20->ctl1 = VAR_22;
  FUNC_1(&VAR_20->pdev->dev, "Setup for delayed command, ctl1 %08x, dlen %x\n",
     VAR_20->ctl1, VAR_20->datalen);
  return;
 }

 if (VAR_17 == 135)
  FUNC_3(VAR_20, VAR_20->ctl2 | 0x100 | VAR_8, VAR_10);
 else if (VAR_17 == VAR_3 && VAR_16->writesize > 512)
  FUNC_3(VAR_20, VAR_20->ctl2 | 0x100 | VAR_7, VAR_10);

 do_command:
 FUNC_1(&VAR_20->pdev->dev, "dlen %x, ctl1 %x, ctl2 %x\n",
  VAR_20->datalen, VAR_22, FUNC_2(VAR_20, VAR_10));


 FUNC_3(VAR_20, VAR_20->datalen, VAR_11);
 FUNC_3(VAR_20, 0x90000000, VAR_13);
 if (VAR_15 && (VAR_22 & (3<<25))) {
  uint32_t VAR_24 = 0xc0000000 + VAR_20->datalen;

  if (VAR_22 & (1<<26)) {

   VAR_24 |= (1<<29);


   VAR_23 = 0x10000000;
  }
  FUNC_3(VAR_20, VAR_24, VAR_12);
 }
 VAR_20->datalen = 0;

 if (FUNC_10(VAR_14)) {
  int VAR_25;
  FUNC_7("About to write command %08x to register 0\n", VAR_22);
  for (VAR_25=4; VAR_25< 0x5c; VAR_25+=4)
   FUNC_7("Register %x: %08x\n", VAR_25, FUNC_8(VAR_20->mmio + VAR_25));
 }

 FUNC_3(VAR_20, VAR_22, VAR_9);


 FUNC_6(100);

 if (1) {
  int VAR_26;
  uint32_t VAR_27;

  for (VAR_26 = 500000; VAR_26 != 0; VAR_26--) {
   VAR_27 = FUNC_2(VAR_20, VAR_13);
   if (VAR_27 & VAR_23)
    break;
   FUNC_9(1);
   if (!(VAR_26 % 100000))
    FUNC_1(&VAR_20->pdev->dev, "Wait for ready, IRQ %x\n", VAR_27);
   FUNC_4();
  }
  FUNC_3(VAR_20, VAR_23, VAR_13);
  FUNC_1(&VAR_20->pdev->dev, "Command %x completed after %d usec, irqs %x (%x)\n",
        VAR_17, 500000-VAR_26, VAR_27, FUNC_2(VAR_20, VAR_13));
 }

 FUNC_0(VAR_20->ctl2 & (1<<30));

 switch (VAR_17) {

 case 141:
 case 137:
 case 139:
 case 138:
 case 134:
 case 136:
 case 133:
 case 140:
 case 135:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_3(VAR_20, VAR_20->ctl2, VAR_10);
  return;
 }
 FUNC_5(VAR_16);
 FUNC_3(VAR_20, VAR_20->ctl2, VAR_10);
}
