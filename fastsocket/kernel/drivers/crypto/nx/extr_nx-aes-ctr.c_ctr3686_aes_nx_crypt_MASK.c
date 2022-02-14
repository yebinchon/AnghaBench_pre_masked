
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {int* iv; } ;
struct TYPE_4__ {TYPE_1__ ctr; } ;
struct nx_crypto_ctx {TYPE_2__ priv; } ;
struct blkcipher_desc {int* info; int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nx_crypto_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (int*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct blkcipher_desc *VAR_2,
    struct scatterlist *VAR_3,
    struct scatterlist *VAR_4,
    unsigned int VAR_5)
{
 struct nx_crypto_ctx *VAR_6 = FUNC_0(VAR_2->tfm);
 u8 *VAR_7 = VAR_6->priv.ctr.iv;

 FUNC_2(VAR_7 + VAR_1,
        VAR_2->info, VAR_0);
 VAR_7[15] = 1;

 VAR_2->info = VAR_6->priv.ctr.iv;

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
