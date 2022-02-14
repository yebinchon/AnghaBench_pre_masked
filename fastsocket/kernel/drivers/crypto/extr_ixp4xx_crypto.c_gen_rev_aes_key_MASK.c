
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ix_sa_dir {int npe_ctx_idx; scalar_t__ npe_ctx_phys; scalar_t__ npe_ctx; } ;
struct ixp_ctx {int configuring; struct ix_sa_dir decrypt; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {struct crypto_tfm* tfm; } ;
struct crypt_ctl {int ctl_flags; int init_len; int mode; scalar_t__ icv_rev_aes; scalar_t__ crypto_ctx; scalar_t__ src_buf; int crypt_len; scalar_t__ crypt_offs; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypt_ctl*) ;
 struct ixp_ctx* FUNC_4 (struct crypto_tfm*) ;
 struct crypt_ctl* FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_6)
{
 struct crypt_ctl *VAR_7;
 struct ixp_ctx *VAR_8 = FUNC_4(VAR_6);
 struct ix_sa_dir *VAR_9 = &VAR_8->decrypt;

 VAR_7 = FUNC_5();
 if (!VAR_7) {
  return -VAR_3;
 }
 *(u32*)VAR_9->npe_ctx |= FUNC_2(VAR_1);

 VAR_7->data.tfm = VAR_6;
 VAR_7->crypt_offs = 0;
 VAR_7->crypt_len = VAR_0;
 VAR_7->src_buf = 0;
 VAR_7->crypto_ctx = VAR_9->npe_ctx_phys;
 VAR_7->icv_rev_aes = VAR_9->npe_ctx_phys + sizeof(u32);
 VAR_7->mode = VAR_4;
 VAR_7->init_len = VAR_9->npe_ctx_idx;
 VAR_7->ctl_flags |= VAR_2;

 FUNC_1(&VAR_8->configuring);
 FUNC_6(VAR_5, FUNC_3(VAR_7));
 FUNC_0(FUNC_7(VAR_5));
 return 0;
}
