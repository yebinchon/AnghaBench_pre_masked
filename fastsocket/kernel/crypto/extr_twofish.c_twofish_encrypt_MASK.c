
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct twofish_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int,int ,int) ;
 struct twofish_ctx* FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct twofish_ctx *VAR_3 = FUNC_3(VAR_0);
 const __le32 *VAR_4 = (const __le32 *)VAR_2;
 __le32 *VAR_5 = (__le32 *)VAR_1;


 u32 VAR_6, VAR_7, VAR_8, VAR_9;


 u32 VAR_10, VAR_11;


 FUNC_1 (0, VAR_6, 0);
 FUNC_1 (1, VAR_7, 1);
 FUNC_1 (2, VAR_8, 2);
 FUNC_1 (3, VAR_9, 3);


 FUNC_0 (0);
 FUNC_0 (1);
 FUNC_0 (2);
 FUNC_0 (3);
 FUNC_0 (4);
 FUNC_0 (5);
 FUNC_0 (6);
 FUNC_0 (7);


 FUNC_2 (0, VAR_8, 4);
 FUNC_2 (1, VAR_9, 5);
 FUNC_2 (2, VAR_6, 6);
 FUNC_2 (3, VAR_7, 7);

}
