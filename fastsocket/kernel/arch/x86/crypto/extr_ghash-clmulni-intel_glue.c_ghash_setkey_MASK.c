
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_ctx {int shash; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int const*) ;
 struct ghash_ctx* FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_3,
   const u8 *VAR_4, unsigned int VAR_5)
{
 struct ghash_ctx *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5 != VAR_2) {
  FUNC_2(VAR_3, VAR_0);
  return -VAR_1;
 }

 FUNC_0(&VAR_6->shash, VAR_4);

 return 0;
}
