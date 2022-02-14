
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct crypto_tfm {int dummy; } ;
struct arc4_ctx {size_t* S; size_t x; size_t y; } ;


 struct arc4_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_1(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct arc4_ctx *VAR_3 = FUNC_0(VAR_0);

 u8 *const VAR_4 = VAR_3->S;
 u8 VAR_5 = VAR_3->x;
 u8 VAR_6 = VAR_3->y;
 u8 VAR_7, VAR_8;

 VAR_7 = VAR_4[VAR_5];
 VAR_6 = (VAR_6 + VAR_7) & 0xff;
 VAR_8 = VAR_4[VAR_6];
 VAR_4[VAR_5] = VAR_8;
 VAR_4[VAR_6] = VAR_7;
 VAR_5 = (VAR_5 + 1) & 0xff;
 *VAR_1++ = *VAR_2 ^ VAR_4[(VAR_7 + VAR_8) & 0xff];

 VAR_3->x = VAR_5;
 VAR_3->y = VAR_6;
}
