
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct priv {int dummy; } ;
struct TYPE_5__ {int ivsize; int decrypt; int encrypt; int setkey; scalar_t__ max_keysize; scalar_t__ min_keysize; } ;
struct TYPE_6__ {int cra_blocksize; int cra_alignmask; int cra_ctxsize; TYPE_2__ cra_blkcipher; int cra_exit; int cra_init; int * cra_type; int cra_priority; int cra_flags; } ;
struct TYPE_4__ {scalar_t__ cia_max_keysize; scalar_t__ cia_min_keysize; } ;
struct crypto_instance {int cra_blocksize; int cra_alignmask; TYPE_3__ alg; TYPE_1__ cra_cipher; int cra_priority; } ;
struct crypto_alg {int cra_blocksize; int cra_alignmask; TYPE_3__ alg; TYPE_1__ cra_cipher; int cra_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_instance* FUNC_0 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_3 (char*,struct crypto_instance*) ;
 int VAR_3 ;
 int FUNC_4 (struct rtattr**,int ) ;
 struct crypto_instance* FUNC_5 (struct rtattr**,int ,int ) ;
 int FUNC_6 (struct crypto_instance*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct crypto_instance *FUNC_7(struct rtattr **VAR_9)
{
 struct crypto_instance *VAR_10;
 struct crypto_alg *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_9, VAR_0);
 if (VAR_12)
  return FUNC_1(VAR_12);

 VAR_11 = FUNC_5(VAR_9, VAR_1,
      VAR_2);
 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);

 VAR_10 = FUNC_3("lrw", VAR_11);
 if (FUNC_2(VAR_10))
  goto out_put_alg;

 VAR_10->alg.cra_flags = VAR_0;
 VAR_10->alg.cra_priority = VAR_11->cra_priority;
 VAR_10->alg.cra_blocksize = VAR_11->cra_blocksize;

 if (VAR_11->cra_alignmask < 7) VAR_10->alg.cra_alignmask = 7;
 else VAR_10->alg.cra_alignmask = VAR_11->cra_alignmask;
 VAR_10->alg.cra_type = &VAR_3;

 if (!(VAR_11->cra_blocksize % 4))
  VAR_10->alg.cra_alignmask |= 3;
 VAR_10->alg.cra_blkcipher.ivsize = VAR_11->cra_blocksize;
 VAR_10->alg.cra_blkcipher.min_keysize =
  VAR_11->cra_cipher.cia_min_keysize + VAR_11->cra_blocksize;
 VAR_10->alg.cra_blkcipher.max_keysize =
  VAR_11->cra_cipher.cia_max_keysize + VAR_11->cra_blocksize;

 VAR_10->alg.cra_ctxsize = sizeof(struct priv);

 VAR_10->alg.cra_init = VAR_7;
 VAR_10->alg.cra_exit = VAR_6;

 VAR_10->alg.cra_blkcipher.setkey = VAR_8;
 VAR_10->alg.cra_blkcipher.encrypt = VAR_5;
 VAR_10->alg.cra_blkcipher.decrypt = VAR_4;

out_put_alg:
 FUNC_6(VAR_11);
 return VAR_10;
}
