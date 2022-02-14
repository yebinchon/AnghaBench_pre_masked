
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_10__ {int processed_byte_count; } ;
struct TYPE_8__ {int iv; } ;
struct TYPE_9__ {TYPE_2__ aes_ctr; } ;
struct nx_csbcpb {TYPE_4__ csb; TYPE_3__ cpb; } ;
struct TYPE_12__ {int outlen; int inlen; } ;
struct nx_crypto_ctx {TYPE_5__* stats; TYPE_6__ op; TYPE_1__* ap; struct nx_csbcpb* csbcpb; } ;
struct blkcipher_desc {int flags; int tfm; } ;
struct TYPE_11__ {int aes_bytes; int aes_ops; } ;
struct TYPE_7__ {unsigned int databytelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct nx_crypto_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct nx_crypto_ctx*,struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_4 (struct nx_crypto_ctx*,TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_2,
       struct scatterlist *VAR_3,
       struct scatterlist *VAR_4,
       unsigned int VAR_5)
{
 struct nx_crypto_ctx *VAR_6 = FUNC_2(VAR_2->tfm);
 struct nx_csbcpb *VAR_7 = VAR_6->csbcpb;
 int VAR_8;

 if (VAR_5 > VAR_6->ap->databytelen)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_7->cpb.aes_ctr.iv);
 if (VAR_8)
  goto out;

 if (!VAR_6->op.inlen || !VAR_6->op.outlen) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_4(VAR_6, &VAR_6->op,
      VAR_2->flags & VAR_0);
 if (VAR_8)
  goto out;

 FUNC_1(&(VAR_6->stats->aes_ops));
 FUNC_0(VAR_7->csb.processed_byte_count,
       &(VAR_6->stats->aes_bytes));
out:
 return VAR_8;
}
