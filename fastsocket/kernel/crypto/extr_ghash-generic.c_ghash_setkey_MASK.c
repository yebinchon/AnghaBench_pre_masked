
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_ctx {scalar_t__ gf128; } ;
struct crypto_shash {int dummy; } ;
typedef int be128 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct ghash_ctx* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct crypto_shash *VAR_4,
   const u8 *VAR_5, unsigned int VAR_6)
{
 struct ghash_ctx *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6 != VAR_3) {
  FUNC_1(VAR_4, VAR_0);
  return -VAR_1;
 }

 if (VAR_7->gf128)
  FUNC_2(VAR_7->gf128);
 VAR_7->gf128 = FUNC_3((be128 *)VAR_5);
 if (!VAR_7->gf128)
  return -VAR_2;

 return 0;
}
