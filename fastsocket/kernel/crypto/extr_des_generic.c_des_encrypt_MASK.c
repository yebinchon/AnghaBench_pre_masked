
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des_ctx {int * expkey; } ;
struct crypto_tfm {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_3 (int ) ;
 struct des_ctx* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (int const) ;

__attribute__((used)) static void FUNC_6(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct des_ctx *VAR_3 = FUNC_4(VAR_0);
 const u32 *VAR_4 = VAR_3->expkey;
 const __le32 *VAR_5 = (const __le32 *)VAR_2;
 __le32 *VAR_6 = (__le32 *)VAR_1;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_7 = FUNC_5(VAR_5[0]);
 VAR_8 = FUNC_5(VAR_5[1]);

 FUNC_1(VAR_7, VAR_8, VAR_9);
 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_4, 2);
  FUNC_2(VAR_8, VAR_7, VAR_9, VAR_10, VAR_4, 2);
 }
 FUNC_0(VAR_8, VAR_7, VAR_9);

 VAR_6[0] = FUNC_3(VAR_8);
 VAR_6[1] = FUNC_3(VAR_7);
}
