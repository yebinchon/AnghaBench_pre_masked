
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct crypto_cts_ctx {int child; } ;
struct blkcipher_desc {int * info; int flags; int tfm; } ;
typedef int iv ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,struct scatterlist*,unsigned int,unsigned int,int) ;
 int FUNC_6 (struct scatterlist*,int) ;
 int FUNC_7 (struct scatterlist*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct crypto_cts_ctx *VAR_1,
      struct blkcipher_desc *VAR_2,
      struct scatterlist *VAR_3,
      struct scatterlist *VAR_4,
      unsigned int VAR_5,
      unsigned int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_2->tfm);
 u8 VAR_8[VAR_7];
 struct blkcipher_desc VAR_9;
 struct scatterlist VAR_10[1], VAR_11[1];
 int VAR_12 = VAR_6 - VAR_7;
 u8 VAR_13[VAR_7];
 u8 VAR_14[VAR_7 * 2], VAR_15[VAR_7 * 2];
 int VAR_16;

 if (VAR_12 < 0)
  return -VAR_0;

 FUNC_6(VAR_10, 1);
 FUNC_6(VAR_11, 1);

 FUNC_5(VAR_14, VAR_4, VAR_5, VAR_6, 0);

 VAR_9.tfm = VAR_1->child;
 VAR_9.info = VAR_13;
 VAR_9.flags = VAR_2->flags;


 FUNC_4(VAR_13, 0, sizeof(VAR_13));
 FUNC_7(&VAR_10[0], VAR_14, VAR_7);
 FUNC_7(&VAR_11[0], VAR_8, VAR_7);
 VAR_16 = FUNC_1(&VAR_9, VAR_11, VAR_10, VAR_7);
 if (VAR_16)
  return VAR_16;

 FUNC_4(VAR_13, 0, sizeof(VAR_13));
 FUNC_3(VAR_13, VAR_14 + VAR_7, VAR_12);

 FUNC_2(VAR_8, VAR_13, VAR_7);

 FUNC_3(VAR_15 + VAR_7, VAR_8, VAR_12);


 FUNC_3(VAR_14 + VAR_7 + VAR_12, VAR_8 + VAR_12, VAR_7 - VAR_12);

 FUNC_4(VAR_13, 0, sizeof(VAR_13));
 FUNC_7(&VAR_10[0], VAR_14 + VAR_7, VAR_7);
 FUNC_7(&VAR_11[0], VAR_15, VAR_7);
 VAR_16 = FUNC_1(&VAR_9, VAR_11, VAR_10, VAR_7);


 FUNC_2(VAR_15, VAR_2->info, VAR_7);

 FUNC_5(VAR_15, VAR_3, VAR_5, VAR_6, 1);

 FUNC_3(VAR_2->info, VAR_14, VAR_7);
 return VAR_16;
}
