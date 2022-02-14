
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int flags; void* out; void* in; void* csbcpb; } ;
struct TYPE_5__ {unsigned int flags; void* out; void* in; void* csbcpb; } ;
struct nx_crypto_ctx {TYPE_4__* out_sg; TYPE_3__ op_aead; TYPE_4__* in_sg; TYPE_4__* csbcpb_aead; TYPE_1__ op; TYPE_4__* csbcpb; int kmem_len; int kmem; } ;
struct TYPE_6__ {int valid; } ;
struct TYPE_8__ {TYPE_2__ csb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (TYPE_4__*) ;

void FUNC_2(struct nx_crypto_ctx *VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_1->kmem, 0, VAR_1->kmem_len);
 VAR_1->csbcpb->csb.valid |= VAR_0;

 VAR_1->op.flags = VAR_2;
 VAR_1->op.csbcpb = FUNC_1(VAR_1->csbcpb);
 VAR_1->op.in = FUNC_1(VAR_1->in_sg);
 VAR_1->op.out = FUNC_1(VAR_1->out_sg);

 if (VAR_1->csbcpb_aead) {
  VAR_1->csbcpb_aead->csb.valid |= VAR_0;

  VAR_1->op_aead.flags = VAR_2;
  VAR_1->op_aead.csbcpb = FUNC_1(VAR_1->csbcpb_aead);
  VAR_1->op_aead.in = FUNC_1(VAR_1->in_sg);
  VAR_1->op_aead.out = FUNC_1(VAR_1->out_sg);
 }
}
