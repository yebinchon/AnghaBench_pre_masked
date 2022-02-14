
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ix_sa_dir {int npe_ctx_idx; int npe_mode; int npe_ctx_phys; } ;
struct ixp_ctx {struct ix_sa_dir decrypt; struct ix_sa_dir encrypt; int configuring; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_4__ {struct aead_request* aead_req; } ;
struct crypt_ctl {int crypt_offs; int crypt_len; unsigned int auth_len; int ctl_flags; int src_buf; scalar_t__ icv_rev_aes; int iv; scalar_t__ auth_offs; int init_len; int mode; int crypto_ctx; TYPE_2__ data; } ;
struct buffer_desc {scalar_t__ buf_len; scalar_t__ phys_addr; int phys_next; int next; } ;
struct TYPE_3__ {int flags; } ;
struct aead_request {unsigned int cryptlen; unsigned int assoclen; int * src; int * assoc; int * dst; int iv; TYPE_1__ base; } ;
struct aead_ctx {int encrypt; int buffer; int * hmac_virt; int ivlist; } ;
typedef int gfp_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct aead_ctx* FUNC_2 (struct aead_request*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_11 ;
 struct buffer_desc* FUNC_4 (int ,int *,unsigned int,struct buffer_desc*,int ,int ) ;
 int FUNC_5 (struct crypt_ctl*) ;
 unsigned int FUNC_6 (struct crypto_aead*) ;
 struct ixp_ctx* FUNC_7 (struct crypto_aead*) ;
 unsigned int FUNC_8 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_9 (struct aead_request*) ;
 int VAR_12 ;
 int * FUNC_10 (int ,int ,scalar_t__*) ;
 int FUNC_11 (int ,int *,scalar_t__) ;
 int FUNC_12 (int ,int ,int ) ;
 struct crypt_ctl* FUNC_13 () ;
 int FUNC_14 (int *,unsigned int,unsigned int) ;
 int FUNC_15 (int ,int ,unsigned int) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int *,unsigned int,unsigned int,int ) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int *,unsigned int) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct aead_request *VAR_13, int VAR_14,
  int VAR_15, int VAR_16, u8 *VAR_17)
{
 struct crypto_aead *VAR_18 = FUNC_9(VAR_13);
 struct ixp_ctx *VAR_19 = FUNC_7(VAR_18);
 unsigned VAR_20 = FUNC_8(VAR_18);
 unsigned VAR_21 = FUNC_6(VAR_18);
 struct ix_sa_dir *VAR_22;
 struct crypt_ctl *VAR_23;
 unsigned int VAR_24;
 struct buffer_desc *VAR_25, VAR_26;
 struct aead_ctx *VAR_27 = FUNC_2(VAR_13);
 gfp_t VAR_28 = VAR_13->base.flags & VAR_0 ?
    VAR_9 : VAR_8;

 if (FUNC_17(VAR_10))
  return -VAR_5;
 if (FUNC_3(&VAR_19->configuring))
  return -VAR_5;

 if (VAR_14) {
  VAR_22 = &VAR_19->encrypt;
  VAR_24 = VAR_13->cryptlen;
 } else {
  VAR_22 = &VAR_19->decrypt;

  VAR_24 = VAR_13->cryptlen -VAR_21;
  VAR_16 -= VAR_21;
 }
 VAR_23 = FUNC_13();
 if (!VAR_23)
  return -VAR_7;

 VAR_23->data.aead_req = VAR_13;
 VAR_23->crypto_ctx = VAR_22->npe_ctx_phys;
 VAR_23->mode = VAR_22->npe_mode;
 VAR_23->init_len = VAR_22->npe_ctx_idx;

 VAR_23->crypt_offs = VAR_15;
 VAR_23->crypt_len = VAR_16;

 VAR_23->auth_offs = 0;
 VAR_23->auth_len = VAR_13->assoclen + VAR_20 + VAR_24;
 FUNC_1(VAR_20 && !VAR_13->iv);
 FUNC_15(VAR_23->iv, VAR_13->iv, VAR_20);

 if (VAR_13->src != VAR_13->dst) {
  FUNC_0();
 }


 VAR_25 = FUNC_4(VAR_12, VAR_13->assoc, VAR_13->assoclen, &VAR_26,
  VAR_28, VAR_4);
 VAR_27->buffer = VAR_26.next;
 VAR_23->src_buf = VAR_26.phys_next;
 if (!VAR_25)
  goto out;

 FUNC_20(&VAR_27->ivlist, 1);
 FUNC_21(&VAR_27->ivlist, VAR_17, VAR_20);
 VAR_25 = FUNC_4(VAR_12, &VAR_27->ivlist, VAR_20, VAR_25, VAR_28,
   VAR_3);
 if (!VAR_25)
  goto free_chain;
 if (FUNC_22(FUNC_14(VAR_13->src, VAR_24, VAR_21))) {


  VAR_27->hmac_virt = FUNC_10(VAR_11, VAR_28,
    &VAR_23->icv_rev_aes);
  if (FUNC_22(!VAR_27->hmac_virt))
   goto free_chain;
  if (!VAR_14) {
   FUNC_19(VAR_27->hmac_virt,
    VAR_13->src, VAR_24, VAR_21, 0);
  }
  VAR_27->encrypt = VAR_14;
 } else {
  VAR_27->hmac_virt = ((void*)0);
 }

 VAR_25 = FUNC_4(VAR_12, VAR_13->src, VAR_24 + VAR_21, VAR_25, VAR_28,
   VAR_3);
 if (!VAR_25)
  goto free_hmac_virt;
 if (!VAR_27->hmac_virt) {
  VAR_23->icv_rev_aes = VAR_25->phys_addr + VAR_25->buf_len - VAR_21;
 }

 VAR_23->ctl_flags |= VAR_1;
 FUNC_16(VAR_10, FUNC_5(VAR_23));
 FUNC_1(FUNC_18(VAR_10));
 return -VAR_6;
free_hmac_virt:
 if (VAR_27->hmac_virt) {
  FUNC_11(VAR_11, VAR_27->hmac_virt,
    VAR_23->icv_rev_aes);
 }
free_chain:
 FUNC_12(VAR_12, VAR_27->buffer, VAR_23->src_buf);
out:
 VAR_23->ctl_flags = VAR_2;
 return -VAR_7;
}
