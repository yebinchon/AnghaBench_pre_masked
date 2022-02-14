
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct nx_sg {int dummy; } ;
struct TYPE_4__ {int inlen; int outlen; } ;
struct nx_crypto_ctx {struct nx_sg* out_sg; TYPE_2__ op; struct nx_sg* in_sg; TYPE_1__* ap; } ;
struct blkcipher_desc {int info; } ;
struct TYPE_3__ {int sglen; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct nx_sg* FUNC_1 (struct nx_sg*,int ,struct scatterlist*,int ,unsigned int) ;

int FUNC_2(struct nx_crypto_ctx *VAR_1,
        struct blkcipher_desc *VAR_2,
        struct scatterlist *VAR_3,
        struct scatterlist *VAR_4,
        unsigned int VAR_5,
        u8 *VAR_6)
{
 struct nx_sg *VAR_7 = VAR_1->in_sg;
 struct nx_sg *VAR_8 = VAR_1->out_sg;

 if (VAR_6)
  FUNC_0(VAR_6, VAR_2->info, VAR_0);

 VAR_7 = FUNC_1(VAR_7, VAR_1->ap->sglen, VAR_4, 0, VAR_5);
 VAR_8 = FUNC_1(VAR_8, VAR_1->ap->sglen, VAR_3, 0, VAR_5);




 VAR_1->op.inlen = (VAR_1->in_sg - VAR_7) * sizeof(struct nx_sg);
 VAR_1->op.outlen = (VAR_1->out_sg - VAR_8) * sizeof(struct nx_sg);

 return 0;
}
