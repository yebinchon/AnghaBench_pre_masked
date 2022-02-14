
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct shash_desc {TYPE_1__* tfm; } ;
struct sha256_state {scalar_t__ state; } ;
struct nx_sg {int dummy; } ;
struct TYPE_6__ {int outlen; } ;
struct nx_crypto_ctx {struct nx_sg* out_sg; TYPE_3__ op; TYPE_2__* ap; int csbcpb; TYPE_2__* props; } ;
struct TYPE_5__ {int sglen; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct nx_crypto_ctx* FUNC_1 (int *) ;
 int FUNC_2 (struct sha256_state*,int ,int) ;
 struct nx_sg* FUNC_3 (struct nx_sg*,int *,int ,int ) ;
 int FUNC_4 (struct nx_crypto_ctx*,int ) ;
 struct sha256_state* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_4)
{
 struct sha256_state *VAR_5 = FUNC_5(VAR_4);
 struct nx_crypto_ctx *VAR_6 = FUNC_1(&VAR_4->tfm->base);
 struct nx_sg *VAR_7;

 FUNC_4(VAR_6, VAR_0);

 FUNC_2(VAR_5, 0, sizeof *VAR_5);

 VAR_6->ap = &VAR_6->props[VAR_2];

 FUNC_0(VAR_6->csbcpb, VAR_1);
 VAR_7 = FUNC_3(VAR_6->out_sg, (u8 *)VAR_5->state,
      VAR_3, VAR_6->ap->sglen);
 VAR_6->op.outlen = (VAR_6->out_sg - VAR_7) * sizeof(struct nx_sg);

 return 0;
}
