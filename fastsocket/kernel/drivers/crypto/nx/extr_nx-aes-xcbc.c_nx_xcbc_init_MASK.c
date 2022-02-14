
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct xcbc_state {scalar_t__ state; } ;
struct shash_desc {TYPE_1__* tfm; } ;
struct nx_sg {int dummy; } ;
struct TYPE_11__ {int key; } ;
struct TYPE_10__ {int mode; } ;
struct TYPE_12__ {TYPE_3__ aes_xcbc; TYPE_2__ hdr; } ;
struct nx_csbcpb {TYPE_4__ cpb; } ;
struct TYPE_16__ {int outlen; } ;
struct TYPE_13__ {struct xcbc_state* key; } ;
struct TYPE_14__ {TYPE_5__ xcbc; } ;
struct nx_crypto_ctx {struct nx_sg* out_sg; TYPE_8__ op; TYPE_7__* ap; TYPE_6__ priv; struct nx_csbcpb* csbcpb; } ;
struct TYPE_15__ {int sglen; } ;
struct TYPE_9__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nx_csbcpb*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nx_crypto_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct xcbc_state*,int ) ;
 int FUNC_3 (struct xcbc_state*,int ,int) ;
 struct nx_sg* FUNC_4 (struct nx_sg*,int *,int ,int ) ;
 int FUNC_5 (struct nx_crypto_ctx*,int ) ;
 struct xcbc_state* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_4)
{
 struct xcbc_state *VAR_5 = FUNC_6(VAR_4);
 struct nx_crypto_ctx *VAR_6 = FUNC_1(&VAR_4->tfm->base);
 struct nx_csbcpb *VAR_7 = VAR_6->csbcpb;
 struct nx_sg *VAR_8;

 FUNC_5(VAR_6, VAR_1);

 FUNC_3(VAR_5, 0, sizeof *VAR_5);

 FUNC_0(VAR_7, VAR_2);
 VAR_7->cpb.hdr.mode = VAR_3;

 FUNC_2(VAR_7->cpb.aes_xcbc.key, VAR_6->priv.xcbc.key, VAR_0);
 FUNC_3(VAR_6->priv.xcbc.key, 0, sizeof *VAR_6->priv.xcbc.key);

 VAR_8 = FUNC_4(VAR_6->out_sg, (u8 *)VAR_5->state,
      VAR_0, VAR_6->ap->sglen);
 VAR_6->op.outlen = (VAR_6->out_sg - VAR_8) * sizeof(struct nx_sg);

 return 0;
}
