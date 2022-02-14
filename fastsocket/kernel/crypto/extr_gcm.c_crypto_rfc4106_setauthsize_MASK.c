
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rfc4106_ctx {int child; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct crypto_rfc4106_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1,
          unsigned int VAR_2)
{
 struct crypto_rfc4106_ctx *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 8:
 case 12:
 case 16:
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_3->child, VAR_2);
}
