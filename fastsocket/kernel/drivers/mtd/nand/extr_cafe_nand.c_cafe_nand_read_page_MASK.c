
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned short uint8_t ;
typedef int uint32_t ;
typedef unsigned short u8 ;
struct nand_chip {unsigned short* oob_poi; int (* read_buf ) (struct mtd_info*,unsigned short*,int ) ;} ;
struct TYPE_5__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; int oobsize; int writesize; struct cafe_priv* priv; } ;
struct cafe_priv {TYPE_1__* pdev; scalar_t__ mmio; TYPE_3__* rs; } ;
struct TYPE_6__ {unsigned short* index_of; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct cafe_priv*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*,int *,int *,int,unsigned short*,int ,int*,int ,unsigned short*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mtd_info*,unsigned short*,int ) ;
 int FUNC_7 (struct mtd_info*,unsigned short*,int ) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_4, struct nand_chip *VAR_5,
          uint8_t *VAR_6, int VAR_7)
{
 struct cafe_priv *VAR_8 = VAR_4->priv;

 FUNC_0(&VAR_8->pdev->dev, "ECC result %08x SYN1,2 %08x\n",
       FUNC_1(VAR_8, VAR_1),
       FUNC_1(VAR_8, VAR_2));

 VAR_5->read_buf(VAR_4, VAR_6, VAR_4->writesize);
 VAR_5->read_buf(VAR_4, VAR_5->oob_poi, VAR_4->oobsize);

 if (VAR_3 && FUNC_1(VAR_8, VAR_1) & (1<<18)) {
  unsigned short VAR_9[8], VAR_10[4];
  int VAR_11[4];
  u8 *VAR_12 = VAR_5->oob_poi;
  int VAR_13, VAR_14;

  for (VAR_13=0; VAR_13<8; VAR_13+=2) {
   uint32_t VAR_15 = FUNC_1(VAR_8, VAR_2 + (VAR_13*2));
   VAR_9[VAR_13] = VAR_8->rs->index_of[VAR_15 & 0xfff];
   VAR_9[VAR_13+1] = VAR_8->rs->index_of[(VAR_15 >> 16) & 0xfff];
  }

  VAR_14 = FUNC_2(VAR_8->rs, ((void*)0), ((void*)0), 1367, VAR_9, 0, VAR_11, 0,
                  VAR_10);

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   int VAR_16 = VAR_11[VAR_13];



   if (VAR_16 > 1374) {

    VAR_14 = -1374;
   } else if (VAR_16 == 0) {

    if (VAR_10[VAR_13] > 0xff)
     VAR_14 = -2048;
    else
     VAR_6[0] ^= VAR_10[VAR_13];
   } else if (VAR_16 == 1365) {
    VAR_6[2047] ^= VAR_10[VAR_13] >> 4;
    VAR_12[0] ^= VAR_10[VAR_13] << 4;
   } else if (VAR_16 > 1365) {
    if ((VAR_16 & 1) == 1) {
     VAR_12[3*VAR_16/2 - 2048] ^= VAR_10[VAR_13] >> 4;
     VAR_12[3*VAR_16/2 - 2047] ^= VAR_10[VAR_13] << 4;
    } else {
     VAR_12[3*VAR_16/2 - 2049] ^= VAR_10[VAR_13] >> 8;
     VAR_12[3*VAR_16/2 - 2048] ^= VAR_10[VAR_13];
    }
   } else if ((VAR_16 & 1) == 1) {
    VAR_6[3*VAR_16/2] ^= VAR_10[VAR_13] >> 4;
    VAR_6[3*VAR_16/2 + 1] ^= VAR_10[VAR_13] << 4;
   } else {
    VAR_6[3*VAR_16/2 - 1] ^= VAR_10[VAR_13] >> 8;
    VAR_6[3*VAR_16/2] ^= VAR_10[VAR_13];
   }
  }

  if (VAR_14 < 0) {
   FUNC_3(&VAR_8->pdev->dev, "Failed to correct ECC at %08x\n",
    FUNC_1(VAR_8, VAR_0) * 2048);
   for (VAR_13 = 0; VAR_13 < 0x5c; VAR_13 += 4)
    FUNC_4("Register %x: %08x\n", VAR_13, FUNC_5(VAR_8->mmio + VAR_13));
   VAR_4->ecc_stats.failed++;
  } else {
   FUNC_3(&VAR_8->pdev->dev, "Corrected %d symbol errors\n", VAR_14);
   VAR_4->ecc_stats.corrected += VAR_14;
  }
 }

 return 0;
}
