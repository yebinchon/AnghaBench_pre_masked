
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int* iv; scalar_t__ assoclen; } ;


 unsigned int FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int*,unsigned int*,int) ;
 int FUNC_3 (int*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(u8 *VAR_0, struct aead_request *VAR_1,
   unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_1->iv[0];
 unsigned int VAR_5 = VAR_4 + 1;
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 FUNC_2(VAR_0, VAR_1->iv, 16);




 *VAR_0 |= (8 * ((VAR_6 - 2) / 2));
 if (VAR_1->assoclen)
  *VAR_0 |= 64;

 return FUNC_3(VAR_0 + 16 - VAR_5, VAR_2, VAR_5);
}
