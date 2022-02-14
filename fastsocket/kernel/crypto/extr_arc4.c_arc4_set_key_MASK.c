
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct arc4_ctx {int x; int* S; scalar_t__ y; } ;


 struct arc4_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2)
{
 struct arc4_ctx *VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5 = 0, VAR_6 = 0;

 VAR_3->x = 1;
 VAR_3->y = 0;

 for(VAR_4 = 0; VAR_4 < 256; VAR_4++)
  VAR_3->S[VAR_4] = VAR_4;

 for(VAR_4 = 0; VAR_4 < 256; VAR_4++)
 {
  u8 VAR_7 = VAR_3->S[VAR_4];
  VAR_5 = (VAR_5 + VAR_1[VAR_6] + VAR_7) & 0xff;
  VAR_3->S[VAR_4] = VAR_3->S[VAR_5];
  VAR_3->S[VAR_5] = VAR_7;
  if(++VAR_6 >= VAR_2)
   VAR_6 = 0;
 }

 return 0;
}
