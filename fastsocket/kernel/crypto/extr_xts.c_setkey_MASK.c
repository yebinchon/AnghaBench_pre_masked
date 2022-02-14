
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct priv {struct crypto_cipher* child; struct crypto_cipher* tweak; } ;
struct crypto_tfm {int crt_flags; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_cipher*,int) ;
 int FUNC_1 (struct crypto_cipher*) ;
 int FUNC_2 (struct crypto_cipher*,int) ;
 int FUNC_3 (struct crypto_cipher*,int const*,unsigned int) ;
 struct priv* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (struct crypto_tfm*,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_4, const u8 *VAR_5,
    unsigned int VAR_6)
{
 struct priv *VAR_7 = FUNC_4(VAR_4);
 struct crypto_cipher *VAR_8 = VAR_7->tweak;
 u32 *VAR_9 = &VAR_4->crt_flags;
 int VAR_10;



 if (VAR_6 % 2) {

  *VAR_9 |= VAR_1;
  return -VAR_3;
 }






 FUNC_0(VAR_8, VAR_0);
 FUNC_2(VAR_8, FUNC_5(VAR_4) &
           VAR_0);
 VAR_10 = FUNC_3(VAR_8, VAR_5 + VAR_6/2, VAR_6/2);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_4, FUNC_1(VAR_8) &
         VAR_2);

 VAR_8 = VAR_7->child;


 FUNC_0(VAR_8, VAR_0);
 FUNC_2(VAR_8, FUNC_5(VAR_4) &
           VAR_0);
 VAR_10 = FUNC_3(VAR_8, VAR_5, VAR_6/2);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_4, FUNC_1(VAR_8) &
         VAR_2);

 return 0;
}
