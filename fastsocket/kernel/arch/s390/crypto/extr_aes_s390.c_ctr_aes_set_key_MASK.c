
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_aes_ctx {int dec; int enc; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct crypto_tfm*,int const*,unsigned int) ;
 struct s390_aes_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_6, const u8 *VAR_7,
      unsigned int VAR_8)
{
 struct s390_aes_ctx *VAR_9 = FUNC_1(VAR_6);

 switch (VAR_8) {
 case 16:
  VAR_9->enc = VAR_1;
  VAR_9->dec = VAR_0;
  break;
 case 24:
  VAR_9->enc = VAR_3;
  VAR_9->dec = VAR_2;
  break;
 case 32:
  VAR_9->enc = VAR_5;
  VAR_9->dec = VAR_4;
  break;
 }

 return FUNC_0(VAR_6, VAR_7, VAR_8);
}
