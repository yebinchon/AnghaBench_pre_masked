
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct crypto_tfm {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct crypto_tfm*) ;
 unsigned int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(void (*VAR_0)(struct crypto_tfm *, u8 *,
           const u8 *),
       struct crypto_tfm *VAR_1,
       u8 *VAR_2, const u8 *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5 = FUNC_2(VAR_1);
 u8 VAR_6[VAR_5 + VAR_4];
 u8 *VAR_7 = (u8 *)FUNC_0((unsigned long)VAR_6, VAR_4 + 1);

 FUNC_3(VAR_7, VAR_3, VAR_5);
 VAR_0(VAR_1, VAR_7, VAR_7);
 FUNC_3(VAR_2, VAR_7, VAR_5);
}
