
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ixp_ctx {int completion; int configuring; int authkey_len; int authkey; int enckey_len; int enckey; int decrypt; int encrypt; } ;
struct TYPE_4__ {int crt_flags; } ;
struct crypto_aead {TYPE_1__ base; } ;
struct TYPE_5__ {unsigned int maxauthsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (struct crypto_aead*) ;
 struct ixp_ctx* FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int,unsigned int,int ,int ,unsigned int) ;
 int FUNC_7 (TYPE_1__*,int,int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct crypto_aead *VAR_3, unsigned int VAR_4)
{
 struct ixp_ctx *VAR_5 = FUNC_3(VAR_3);
 u32 *VAR_6 = &VAR_3->base.crt_flags;
 unsigned VAR_7 = FUNC_2(VAR_3)->maxauthsize;
 int VAR_8;

 if (!VAR_5->enckey_len && !VAR_5->authkey_len)
  return 0;
 FUNC_4(&VAR_5->completion);
 FUNC_1(&VAR_5->configuring);

 FUNC_5(&VAR_5->encrypt);
 FUNC_5(&VAR_5->decrypt);

 VAR_8 = FUNC_7(&VAR_3->base, 0, VAR_5->enckey, VAR_5->enckey_len);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_7(&VAR_3->base, 1, VAR_5->enckey, VAR_5->enckey_len);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_6(&VAR_3->base, 0, VAR_4, VAR_5->authkey,
   VAR_5->authkey_len, VAR_7);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_6(&VAR_3->base, 1, VAR_4, VAR_5->authkey,
   VAR_5->authkey_len, VAR_7);
 if (VAR_8)
  goto out;

 if (*VAR_6 & VAR_1) {
  if (*VAR_6 & VAR_0) {
   VAR_8 = -VAR_2;
   goto out;
  } else {
   *VAR_6 &= ~VAR_1;
  }
 }
out:
 if (!FUNC_0(&VAR_5->configuring))
  FUNC_8(&VAR_5->completion);
 return VAR_8;
}
