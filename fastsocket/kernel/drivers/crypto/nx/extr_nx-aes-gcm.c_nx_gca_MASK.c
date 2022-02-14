
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


typedef int u8 ;
struct scatter_walk {int dummy; } ;
struct nx_sg {int dummy; } ;
struct TYPE_10__ {int out_pat; } ;
struct TYPE_11__ {TYPE_4__ aes_gca; } ;
struct nx_csbcpb {TYPE_5__ cpb; } ;
struct TYPE_12__ {int inlen; } ;
struct nx_crypto_ctx {TYPE_3__* stats; TYPE_6__ op_aead; struct nx_sg* in_sg; TYPE_1__* ap; struct nx_csbcpb* csbcpb_aead; } ;
struct TYPE_8__ {int flags; } ;
struct aead_request {int assoclen; TYPE_2__ base; int assoc; } ;
struct TYPE_9__ {int aes_bytes; int aes_ops; } ;
struct TYPE_7__ {int sglen; int databytelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct nx_crypto_ctx*,TYPE_6__*,int) ;
 struct nx_sg* FUNC_4 (struct nx_sg*,int ,int ,int ,int ) ;
 int FUNC_5 (int *,struct scatter_walk*,int ,int ) ;
 int FUNC_6 (struct scatter_walk*,int ,int ) ;
 int FUNC_7 (struct scatter_walk*,int ) ;

__attribute__((used)) static int FUNC_8(struct nx_crypto_ctx *VAR_4,
    struct aead_request *VAR_5,
    u8 *VAR_6)
{
 struct nx_csbcpb *VAR_7 = VAR_4->csbcpb_aead;
 int VAR_8 = -VAR_2;
 struct scatter_walk VAR_9;
 struct nx_sg *VAR_10 = VAR_4->in_sg;

 if (VAR_5->assoclen > VAR_4->ap->databytelen)
  goto out;

 if (VAR_5->assoclen <= VAR_0) {
  FUNC_7(&VAR_9, VAR_5->assoc);
  FUNC_5(VAR_6, &VAR_9, VAR_5->assoclen,
           VAR_3);
  FUNC_6(&VAR_9, VAR_3, 0);

  VAR_8 = 0;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_10, VAR_4->ap->sglen, VAR_5->assoc, 0,
      VAR_5->assoclen);
 VAR_4->op_aead.inlen = (VAR_4->in_sg - VAR_10) * sizeof(struct nx_sg);

 VAR_8 = FUNC_3(VAR_4, &VAR_4->op_aead,
      VAR_5->base.flags & VAR_1);
 if (VAR_8)
  goto out;

 FUNC_1(&(VAR_4->stats->aes_ops));
 FUNC_0(VAR_5->assoclen, &(VAR_4->stats->aes_bytes));

 FUNC_2(VAR_6, VAR_7->cpb.aes_gca.out_pat, VAR_0);
out:
 return VAR_8;
}
