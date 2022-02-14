
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ix_sa_dir {int npe_ctx_idx; int npe_mode; int * npe_ctx; } ;
struct ixp_ctx {struct ix_sa_dir decrypt; struct ix_sa_dir encrypt; } ;
struct crypto_tfm {int crt_flags; } ;
typedef int cipher_cfg ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int) ;
 struct ixp_ctx* FUNC_3 (struct crypto_tfm*) ;
 scalar_t__ FUNC_4 (int*,int const*) ;
 int FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct crypto_tfm *VAR_16, int VAR_17,
  const u8 *VAR_18, int VAR_19)
{
 u8 *VAR_20;
 u32 VAR_21;
 u32 VAR_22 = 0;
 struct ix_sa_dir *VAR_23;
 struct ixp_ctx *VAR_24 = FUNC_3(VAR_16);
 u32 *VAR_25 = &VAR_16->crt_flags;

 VAR_23 = VAR_17 ? &VAR_24->encrypt : &VAR_24->decrypt;
 VAR_20 = VAR_23->npe_ctx;

 if (VAR_17) {
  VAR_21 = FUNC_1(VAR_16);
  VAR_23->npe_mode |= VAR_15;
 } else {
  VAR_21 = FUNC_0(VAR_16);
 }
 if (VAR_21 & VAR_10) {
  switch (VAR_19) {
   case 16: VAR_22 = VAR_11 | VAR_6; break;
   case 24: VAR_22 = VAR_12 | VAR_7; break;
   case 32: VAR_22 = VAR_13 | VAR_8; break;
   default:
    *VAR_25 |= VAR_0;
    return -VAR_5;
  }
  VAR_21 |= VAR_22;
 } else if (VAR_21 & VAR_9) {
  const u32 *VAR_26 = (const u32 *)VAR_18;
  if (FUNC_8(!((VAR_26[0] ^ VAR_26[2]) | (VAR_26[1] ^ VAR_26[3])) ||
        !((VAR_26[2] ^ VAR_26[4]) | (VAR_26[3] ^ VAR_26[5]))))
  {
   *VAR_25 |= VAR_1;
   return -VAR_5;
  }
 } else {
  u32 VAR_27[VAR_4];
  if (FUNC_4(VAR_27, VAR_18) == 0) {
   *VAR_25 |= VAR_2;
  }
 }

 *(u32*)VAR_20 = FUNC_2(VAR_21);
 VAR_20 += sizeof(VAR_21);


 FUNC_6(VAR_20, VAR_18, VAR_19);

 if (VAR_19 < VAR_3 && !(VAR_21 & VAR_10)) {
  FUNC_7(VAR_20 + VAR_19, 0, VAR_3 -VAR_19);
  VAR_19 = VAR_3;
 }
 VAR_23->npe_ctx_idx = sizeof(VAR_21) + VAR_19;
 VAR_23->npe_mode |= VAR_14;
 if ((VAR_21 & VAR_10) && !VAR_17) {
  return FUNC_5(VAR_16);
 }
 return 0;
}
