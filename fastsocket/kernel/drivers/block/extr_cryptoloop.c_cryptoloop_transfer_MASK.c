
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct loop_device {struct crypto_blkcipher* key_data; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {int * info; int flags; struct crypto_blkcipher* tfm; } ;
typedef int sector_t ;
typedef int (* encdec_cbc_t ) (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int const) ;
struct TYPE_2__ {int (* decrypt ) (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int const) ;int (* encrypt ) (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int const) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct crypto_blkcipher*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*,struct page*,int const,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct loop_device *VAR_3, int VAR_4,
      struct page *VAR_5, unsigned VAR_6,
      struct page *VAR_7, unsigned VAR_8,
      int VAR_9, sector_t VAR_10)
{
 struct crypto_blkcipher *VAR_11 = VAR_3->key_data;
 struct blkcipher_desc VAR_12 = {
  .tfm = VAR_11,
  .flags = VAR_0,
 };
 struct scatterlist VAR_13;
 struct scatterlist VAR_14;

 encdec_cbc_t VAR_15;
 struct page *VAR_16, *VAR_17;
 unsigned VAR_18, VAR_19;
 int VAR_20;

 FUNC_3(&VAR_13, 1);
 FUNC_3(&VAR_14, 1);

 if (VAR_4 == VAR_2) {
  VAR_16 = VAR_5;
  VAR_18 = VAR_6;
  VAR_17 = VAR_7;
  VAR_19 = VAR_8;
  VAR_15 = FUNC_1(VAR_11)->decrypt;
 } else {
  VAR_16 = VAR_7;
  VAR_18 = VAR_8;
  VAR_17 = VAR_5;
  VAR_19 = VAR_6;
  VAR_15 = FUNC_1(VAR_11)->encrypt;
 }

 while (VAR_9 > 0) {
  const int VAR_21 = FUNC_2(VAR_9, VAR_1);
  u32 VAR_22[4] = { 0, };
  VAR_22[0] = FUNC_0(VAR_10 & 0xffffffff);

  FUNC_4(&VAR_14, VAR_16, VAR_21, VAR_18);
  FUNC_4(&VAR_13, VAR_17, VAR_21, VAR_19);

  VAR_12.info = VAR_22;
  VAR_20 = VAR_15(&VAR_12, &VAR_13, &VAR_14, VAR_21);
  if (VAR_20)
   return VAR_20;

  VAR_10++;
  VAR_9 -= VAR_21;
  VAR_18 += VAR_21;
  VAR_19 += VAR_21;
 }

 return 0;
}
