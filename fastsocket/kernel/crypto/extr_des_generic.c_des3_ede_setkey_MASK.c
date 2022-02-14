
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des3_ede_ctx {int* expkey; } ;
struct crypto_tfm {int crt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct des3_ede_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int*,int const*) ;
 int FUNC_2 (int*,int const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_5, const u8 *VAR_6,
      unsigned int VAR_7)
{
 const u32 *VAR_8 = (const u32 *)VAR_6;
 struct des3_ede_ctx *VAR_9 = FUNC_0(VAR_5);
 u32 *VAR_10 = VAR_9->expkey;
 u32 *VAR_11 = &VAR_5->crt_flags;

 if (FUNC_3(!((VAR_8[0] ^ VAR_8[2]) | (VAR_8[1] ^ VAR_8[3])) ||
       !((VAR_8[2] ^ VAR_8[4]) | (VAR_8[3] ^ VAR_8[5]))) &&
       (*VAR_11 & VAR_0))
 {
  *VAR_11 |= VAR_1;
  return -VAR_4;
 }

 FUNC_1(VAR_10, VAR_6); VAR_10 += VAR_2; VAR_6 += VAR_3;
 FUNC_2(VAR_10, VAR_6); VAR_10 += VAR_2; VAR_6 += VAR_3;
 FUNC_1(VAR_10, VAR_6);

 return 0;
}
