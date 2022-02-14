
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_2__* blk; int cip; } ;
struct geode_aes_op {unsigned int keylen; TYPE_3__ fallback; int key; } ;
struct crypto_tfm {int crt_flags; } ;
struct TYPE_4__ {int crt_flags; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ,int const*,unsigned int) ;
 struct geode_aes_op* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_7, const u8 *VAR_8,
  unsigned int VAR_9)
{
 struct geode_aes_op *VAR_10 = FUNC_1(VAR_7);
 unsigned int VAR_11;

 VAR_10->keylen = VAR_9;

 if (VAR_9 == VAR_0) {
  FUNC_2(VAR_10->key, VAR_8, VAR_9);
  return 0;
 }

 if (VAR_9 != VAR_1 && VAR_9 != VAR_2) {

  VAR_7->crt_flags |= VAR_4;
  return -VAR_6;
 }




 VAR_10->fallback.blk->base.crt_flags &= ~VAR_3;
 VAR_10->fallback.blk->base.crt_flags |= (VAR_7->crt_flags & VAR_3);

 VAR_11 = FUNC_0(VAR_10->fallback.cip, VAR_8, VAR_9);
 if (VAR_11) {
  VAR_7->crt_flags &= ~VAR_5;
  VAR_7->crt_flags |= (VAR_10->fallback.blk->base.crt_flags & VAR_5);
 }
 return VAR_11;
}
