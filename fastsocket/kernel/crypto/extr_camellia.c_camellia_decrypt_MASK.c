
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct camellia_ctx {int key_length; int key_table; } ;
typedef int __be32 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;
 struct camellia_ctx* FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const struct camellia_ctx *VAR_3 = FUNC_3(VAR_0);
 const __be32 *VAR_4 = (const __be32 *)VAR_2;
 __be32 *VAR_5 = (__be32 *)VAR_1;

 u32 VAR_6[4];

 VAR_6[0] = FUNC_0(VAR_4[0]);
 VAR_6[1] = FUNC_0(VAR_4[1]);
 VAR_6[2] = FUNC_0(VAR_4[2]);
 VAR_6[3] = FUNC_0(VAR_4[3]);

 FUNC_1(VAR_3->key_table, VAR_6,
  VAR_3->key_length == 16 ? 24 : 32
 );


 VAR_5[0] = FUNC_2(VAR_6[2]);
 VAR_5[1] = FUNC_2(VAR_6[3]);
 VAR_5[2] = FUNC_2(VAR_6[0]);
 VAR_5[3] = FUNC_2(VAR_6[1]);
}
