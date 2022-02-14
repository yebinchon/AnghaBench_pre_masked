
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct crypto_cts_ctx {int child; } ;
struct blkcipher_desc {int * info; int flags; int tfm; } ;
typedef int s ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,struct scatterlist*,unsigned int,unsigned int,int) ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_cts_ctx *VAR_1,
      struct blkcipher_desc *VAR_2,
      struct scatterlist *VAR_3,
      struct scatterlist *VAR_4,
      unsigned int VAR_5,
      unsigned int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_2->tfm);
 u8 VAR_8[VAR_7], VAR_9[VAR_7];
 struct blkcipher_desc VAR_10;
 struct scatterlist VAR_11[1], VAR_12[1];
 int VAR_13 = VAR_6 - VAR_7;
 u8 VAR_14[VAR_7];
 u8 VAR_15[VAR_7 * 2], VAR_16[VAR_7 * 2];
 int VAR_17;

 if (VAR_13 < 0)
  return -VAR_0;

 FUNC_5(VAR_11, 1);
 FUNC_5(VAR_12, 1);

 FUNC_3(VAR_15, 0, sizeof(VAR_15));
 FUNC_4(VAR_15, VAR_4, VAR_5, VAR_6, 0);

 FUNC_2(VAR_14, VAR_2->info, VAR_7);

 VAR_10.tfm = VAR_1->child;
 VAR_10.info = VAR_14;
 VAR_10.flags = VAR_2->flags;

 FUNC_6(&VAR_11[0], VAR_15, VAR_7);
 FUNC_6(&VAR_12[0], VAR_8, VAR_7);
 VAR_17 = FUNC_1(&VAR_10, VAR_12, VAR_11, VAR_7);

 FUNC_2(VAR_16 + VAR_7, VAR_8, VAR_13);

 VAR_10.info = VAR_8;

 FUNC_6(&VAR_11[0], VAR_15 + VAR_7, VAR_7);
 FUNC_6(&VAR_12[0], VAR_9, VAR_7);
 VAR_17 = FUNC_1(&VAR_10, VAR_12, VAR_11, VAR_7);

 FUNC_2(VAR_16, VAR_9, VAR_7);

 FUNC_4(VAR_16, VAR_3, VAR_5, VAR_6, 1);

 FUNC_2(VAR_2->info, VAR_9, VAR_7);

 return VAR_17;
}
