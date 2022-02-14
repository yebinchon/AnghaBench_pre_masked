
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_cts_ctx {int child; } ;
struct blkcipher_desc {int flags; int info; int tfm; } ;


 int FUNC_0 (int ) ;
 struct crypto_cts_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_3 (struct crypto_cts_ctx*,struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_0,
         struct scatterlist *VAR_1, struct scatterlist *VAR_2,
         unsigned int VAR_3)
{
 struct crypto_cts_ctx *VAR_4 = FUNC_1(VAR_0->tfm);
 int VAR_5 = FUNC_0(VAR_0->tfm);
 int VAR_6 = (VAR_3 + VAR_5 - 1) / VAR_5;
 int VAR_7 = VAR_6 > 2 ? VAR_6 - 2 : 0;
 struct blkcipher_desc VAR_8;
 int VAR_9;

 VAR_8.tfm = VAR_4->child;
 VAR_8.info = VAR_0->info;
 VAR_8.flags = VAR_0->flags;

 if (VAR_6 == 1) {
  VAR_9 = FUNC_2(&VAR_8, VAR_1, VAR_2, VAR_5);
 } else if (VAR_3 <= VAR_5 * 2) {
  VAR_9 = FUNC_3(VAR_4, VAR_0, VAR_1, VAR_2, 0, VAR_3);
 } else {

  VAR_9 = FUNC_2(&VAR_8, VAR_1, VAR_2,
       VAR_7 * VAR_5);
  if (VAR_9 == 0) {

   VAR_9 = FUNC_3(VAR_4, VAR_0, VAR_1, VAR_2,
      VAR_7 * VAR_5,
      VAR_3 - (VAR_7 * VAR_5));
  }
 }

 return VAR_9;
}
