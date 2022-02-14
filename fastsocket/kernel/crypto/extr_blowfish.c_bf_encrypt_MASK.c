
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const __be32 *VAR_3 = (const __be32 *)VAR_2;
 __be32 *const VAR_4 = (__be32 *)VAR_1;
 u32 VAR_5[2], VAR_6[2];

 VAR_5[0] = FUNC_0(VAR_3[0]);
 VAR_5[1] = FUNC_0(VAR_3[1]);
 FUNC_3(FUNC_2(VAR_0), VAR_6, VAR_5);
 VAR_4[0] = FUNC_1(VAR_6[0]);
 VAR_4[1] = FUNC_1(VAR_6[1]);
}
