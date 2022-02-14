
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ npe_ctx; } ;
struct ixp_ctx {int completion; int configuring; TYPE_2__ decrypt; } ;
struct TYPE_6__ {int tfm; struct ablkcipher_request* ablk_req; struct aead_request* aead_req; } ;
struct crypt_ctl {int ctl_flags; TYPE_1__ data; int src_buf; TYPE_5__* regist_buf; TYPE_5__* regist_ptr; int dst_buf; } ;
struct TYPE_9__ {int (* complete ) (TYPE_4__*,int) ;} ;
struct aead_request {TYPE_4__ base; } ;
struct aead_ctx {int hmac_virt; int buffer; } ;
struct TYPE_8__ {int (* complete ) (TYPE_3__*,int) ;} ;
struct ablkcipher_request {TYPE_3__ base; } ;
struct ablk_ctx {int src; int dst; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int phys_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct ablk_ctx* FUNC_1 (struct ablkcipher_request*) ;
 struct aead_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct crypt_ctl* FUNC_6 (int) ;
 struct ixp_ctx* FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,TYPE_5__*,int ) ;
 int FUNC_9 (struct crypt_ctl*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_13(dma_addr_t VAR_7)
{
 struct crypt_ctl *VAR_8;
 struct ixp_ctx *VAR_9;
 int VAR_10;

 VAR_10 = VAR_7 & 0x1 ? -VAR_3 : 0;
 VAR_7 &= ~0x3;
 VAR_8 = FUNC_6(VAR_7);

 switch (VAR_8->ctl_flags & VAR_1) {
 case 128: {
  struct aead_request *VAR_11 = VAR_8->data.aead_req;
  struct aead_ctx *VAR_12 = FUNC_2(VAR_11);

  FUNC_10(VAR_6, VAR_12->buffer, VAR_8->src_buf);
  if (VAR_12->hmac_virt) {
   FUNC_9(VAR_8);
  }
  VAR_11->base.complete(&VAR_11->base, VAR_10);
  break;
 }
 case 129: {
  struct ablkcipher_request *VAR_13 = VAR_8->data.ablk_req;
  struct ablk_ctx *VAR_14 = FUNC_1(VAR_13);

  if (VAR_14->dst) {
   FUNC_10(VAR_6, VAR_14->dst, VAR_8->dst_buf);
  }
  FUNC_10(VAR_6, VAR_14->src, VAR_8->src_buf);
  VAR_13->base.complete(&VAR_13->base, VAR_10);
  break;
 }
 case 131:
  VAR_9 = FUNC_7(VAR_8->data.tfm);
  FUNC_8(VAR_5, VAR_8->regist_ptr,
    VAR_8->regist_buf->phys_addr);
  FUNC_8(VAR_4, VAR_8->regist_buf, VAR_8->src_buf);
  if (FUNC_3(&VAR_9->configuring))
   FUNC_4(&VAR_9->completion);
  break;
 case 130:
  VAR_9 = FUNC_7(VAR_8->data.tfm);
  *(u32*)VAR_9->decrypt.npe_ctx &= FUNC_5(~VAR_0);
  if (FUNC_3(&VAR_9->configuring))
   FUNC_4(&VAR_9->completion);
  break;
 default:
  FUNC_0();
 }
 VAR_8->ctl_flags = VAR_2;
}
