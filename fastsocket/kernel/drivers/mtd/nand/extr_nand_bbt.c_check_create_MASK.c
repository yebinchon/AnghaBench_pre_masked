
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int numchips; struct nand_bbt_descr* bbt_md; struct nand_bbt_descr* bbt_td; } ;
struct nand_bbt_descr {int options; int* pages; int* version; } ;
struct mtd_info {struct nand_chip* priv; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtd_info*,int *,struct nand_bbt_descr*,int) ;
 int FUNC_1 (struct mtd_info*,int *,struct nand_bbt_descr*,int) ;
 int FUNC_2 (struct mtd_info*,int *,struct nand_bbt_descr*,struct nand_bbt_descr*,int) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_4, uint8_t *VAR_5, struct nand_bbt_descr *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct nand_chip *VAR_12 = VAR_4->priv;
 struct nand_bbt_descr *VAR_13 = VAR_12->bbt_td;
 struct nand_bbt_descr *VAR_14 = VAR_12->bbt_md;
 struct nand_bbt_descr *VAR_15, *VAR_16;


 if (VAR_13->options & VAR_1)
  VAR_8 = VAR_12->numchips;
 else
  VAR_8 = 1;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_9 = 0;
  VAR_15 = ((void*)0);
  VAR_16 = ((void*)0);

  VAR_10 = (VAR_13->options & VAR_1) ? VAR_7 : -1;

  if (VAR_14) {
   if (VAR_13->pages[VAR_7] == -1 && VAR_14->pages[VAR_7] == -1) {
    VAR_9 = 0x03;
    goto create;
   }

   if (VAR_13->pages[VAR_7] == -1) {
    VAR_15 = VAR_14;
    VAR_13->version[VAR_7] = VAR_14->version[VAR_7];
    VAR_9 = 1;
    goto writecheck;
   }

   if (VAR_14->pages[VAR_7] == -1) {
    VAR_15 = VAR_13;
    VAR_14->version[VAR_7] = VAR_13->version[VAR_7];
    VAR_9 = 2;
    goto writecheck;
   }

   if (VAR_13->version[VAR_7] == VAR_14->version[VAR_7]) {
    VAR_15 = VAR_13;
    if (!(VAR_13->options & VAR_2))
     VAR_16 = VAR_14;
    goto writecheck;
   }

   if (((int8_t) (VAR_13->version[VAR_7] - VAR_14->version[VAR_7])) > 0) {
    VAR_15 = VAR_13;
    VAR_14->version[VAR_7] = VAR_13->version[VAR_7];
    VAR_9 = 2;
   } else {
    VAR_15 = VAR_14;
    VAR_13->version[VAR_7] = VAR_14->version[VAR_7];
    VAR_9 = 1;
   }

   goto writecheck;

  } else {
   if (VAR_13->pages[VAR_7] == -1) {
    VAR_9 = 0x01;
    goto create;
   }
   VAR_15 = VAR_13;
   goto writecheck;
  }
 create:

  if (!(VAR_13->options & VAR_0))
   continue;


  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_10);

  VAR_13->version[VAR_7] = 1;
  if (VAR_14)
   VAR_14->version[VAR_7] = 1;
 writecheck:

  if (VAR_15)
   FUNC_1(VAR_4, VAR_5, VAR_15, VAR_10);

  if (VAR_16)
   FUNC_1(VAR_4, VAR_5, VAR_16, VAR_10);


  if ((VAR_9 & 0x01) && (VAR_13->options & VAR_3)) {
   VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_13, VAR_14, VAR_10);
   if (VAR_11 < 0)
    return VAR_11;
  }


  if ((VAR_9 & 0x02) && VAR_14 && (VAR_14->options & VAR_3)) {
   VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_14, VAR_13, VAR_10);
   if (VAR_11 < 0)
    return VAR_11;
  }
 }
 return 0;
}
