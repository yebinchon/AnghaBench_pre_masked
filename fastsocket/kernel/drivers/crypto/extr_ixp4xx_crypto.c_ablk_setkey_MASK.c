
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {void* npe_mode; } ;
struct ixp_ctx {int completion; int configuring; TYPE_2__ decrypt; TYPE_2__ encrypt; } ;
struct TYPE_3__ {int crt_flags; } ;
struct crypto_ablkcipher {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ixp_ctx* FUNC_2 (struct crypto_ablkcipher*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int,int const*,unsigned int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct crypto_ablkcipher *VAR_4, const u8 *VAR_5,
   unsigned int VAR_6)
{
 struct ixp_ctx *VAR_7 = FUNC_2(VAR_4);
 u32 *VAR_8 = &VAR_4->base.crt_flags;
 int VAR_9;

 FUNC_3(&VAR_7->completion);
 FUNC_1(&VAR_7->configuring);

 FUNC_4(&VAR_7->encrypt);
 FUNC_4(&VAR_7->decrypt);

 VAR_7->encrypt.npe_mode = VAR_3;
 VAR_7->decrypt.npe_mode = VAR_3;

 VAR_9 = FUNC_5(&VAR_4->base, 0, VAR_5, VAR_6);
 if (VAR_9)
  goto out;
 VAR_9 = FUNC_5(&VAR_4->base, 1, VAR_5, VAR_6);
 if (VAR_9)
  goto out;

 if (*VAR_8 & VAR_1) {
  if (*VAR_8 & VAR_0) {
   VAR_9 = -VAR_2;
  } else {
   *VAR_8 &= ~VAR_1;
  }
 }
out:
 if (!FUNC_0(&VAR_7->configuring))
  FUNC_6(&VAR_7->completion);
 return VAR_9;
}
