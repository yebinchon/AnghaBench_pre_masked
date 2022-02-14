
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hifn_device {int flags; } ;
struct hifn_context {unsigned int keysize; int key; struct hifn_device* dev; } ;
struct crypto_tfm {int crt_flags; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 struct hifn_context* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct crypto_ablkcipher *VAR_8, const u8 *VAR_9,
  unsigned int VAR_10)
{
 struct crypto_tfm *VAR_11 = FUNC_1(VAR_8);
 struct hifn_context *VAR_12 = FUNC_2(VAR_11);
 struct hifn_device *VAR_13 = VAR_12->dev;

 if (VAR_10 > VAR_7) {
  FUNC_0(VAR_8, VAR_1);
  return -1;
 }

 if (VAR_10 == VAR_5) {
  u32 VAR_14[VAR_3];
  int VAR_15 = FUNC_3(VAR_14, VAR_9);

  if (FUNC_5(VAR_15 == 0) && (VAR_11->crt_flags & VAR_0)) {
   VAR_11->crt_flags |= VAR_2;
   return -VAR_4;
  }
 }

 VAR_13->flags &= ~VAR_6;

 FUNC_4(VAR_12->key, VAR_9, VAR_10);
 VAR_12->keysize = VAR_10;

 return 0;
}
