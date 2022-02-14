
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct crypt_walker_ctx {int iv; int crypt_ctx; } ;
struct ccmode_cbc {int block_size; } ;
typedef scalar_t__ mbuf_t ;
typedef int errno_t ;
typedef int cts_pad ;
typedef TYPE_2__* crypto_ctx_t ;
typedef int (* ccpad_func ) (struct ccmode_cbc const*,int ,int ,size_t,int *,int *) ;
typedef int cccbc_ctx ;
typedef int block ;
struct TYPE_6__ {int * dec; int * enc; } ;
struct TYPE_7__ {int flags; int mpad; TYPE_1__ ks; int lock; struct ccmode_cbc* dec_mode; struct ccmode_cbc* enc_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ccmode_cbc const*,int ,int ,size_t,int *,int *) ;
 int FUNC_4 (struct ccmode_cbc const*,int ,int ,size_t,int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (struct crypt_walker_ctx*,int,TYPE_2__*,int *) ;
 int FUNC_6 (scalar_t__,int *,size_t) ;
 size_t FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ,size_t*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int ,size_t,int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ,size_t,int,int ,struct crypt_walker_ctx*) ;
 int FUNC_14 (int *,int ,int) ;

errno_t
FUNC_15(crypto_ctx_t VAR_4, mbuf_t *VAR_5, uint32_t VAR_6, int VAR_7, cccbc_ctx *VAR_8)
{
 struct crypt_walker_ctx VAR_9;
 const struct ccmode_cbc *VAR_10 = VAR_7 ? VAR_4->enc_mode : VAR_4->dec_mode;
 size_t VAR_11 = VAR_6;
 size_t VAR_12 = 0;
 mbuf_t VAR_13, VAR_14;
 int VAR_15;

 if (!(VAR_4->flags & VAR_1)) {
  FUNC_9(VAR_4->lock);
  if (!(VAR_4->flags & VAR_1)) {
   FUNC_2(VAR_4);
  }
  VAR_4->flags |= VAR_1;
  FUNC_10(VAR_4->lock);
 }
 if (!VAR_8)
  VAR_8 = VAR_7 ? VAR_4->ks.enc : VAR_4->ks.dec;

 if ((VAR_4->flags & VAR_0) && VAR_4->mpad == 1) {
  uint8_t VAR_16[VAR_10->block_size];

  if (VAR_6 <= VAR_10->block_size) {
   if (VAR_6 < VAR_10->block_size) {
    FUNC_14(VAR_16, 0, sizeof(VAR_16));
    FUNC_6(*VAR_5, VAR_16, VAR_10->block_size);
   }
   VAR_11 = VAR_10->block_size;
  } else {

   uint32_t VAR_17 = VAR_6 % VAR_10->block_size;

   VAR_12 = VAR_17 ? VAR_17 + VAR_10->block_size : 2 * VAR_10->block_size;
   VAR_11 = VAR_6 - VAR_12;

   if (VAR_11 == 0)
    VAR_14 = *VAR_5;
   else {
    FUNC_8(*VAR_5, 0, &VAR_11, &VAR_13, &VAR_14, 0);
    FUNC_1(*VAR_5 == VAR_13);
    FUNC_1(VAR_11 == VAR_6 - VAR_12);
    FUNC_1(FUNC_7(VAR_13, 0) == VAR_11);
    FUNC_1(FUNC_7(VAR_14, 0) == VAR_12);
   }
  }
 } else if (VAR_6 % VAR_4->mpad) {
  uint8_t VAR_18[VAR_4->mpad];
  size_t VAR_19 = VAR_4->mpad - (VAR_6 % VAR_4->mpad);

  FUNC_14(VAR_18, 0, VAR_19);
  VAR_15 = FUNC_6(*VAR_5, VAR_18, VAR_19);
  if (VAR_15)
   return (VAR_15);
  VAR_11 = VAR_6 + VAR_19;
 }
 FUNC_5(&VAR_9, VAR_7, VAR_4, VAR_8);
 if (VAR_11) {
  VAR_15 = FUNC_13(*VAR_5, 0, VAR_11, VAR_10->block_size, VAR_3, &VAR_9);
  if (VAR_15)
   return (VAR_15);
 }

 if ((VAR_4->flags & VAR_0) && VAR_12) {
  uint8_t VAR_20[2*VAR_10->block_size];
  ccpad_func VAR_21 = VAR_7 ? FUNC_4 : FUNC_3;

  FUNC_1(VAR_12 <= 2*VAR_10->block_size && VAR_12 > VAR_10->block_size);
  FUNC_14(VAR_20, 0, sizeof(VAR_20));
  FUNC_11(VAR_14, 0, VAR_12, VAR_20);
  FUNC_12(VAR_14);
  VAR_21(VAR_10, VAR_9.crypt_ctx, VAR_9.iv, VAR_12, VAR_20, VAR_20);
  FUNC_6(*VAR_5, VAR_20, VAR_12);
 }
 FUNC_0(VAR_9.iv, VAR_2);

 return (0);
}
