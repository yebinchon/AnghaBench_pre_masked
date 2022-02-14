
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct xcbc_tfm_ctx {int child; int * ctx; } ;
struct crypto_shash {int dummy; } ;


 int const* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int ,int const*,int const*) ;
 int FUNC_2 (int ,int const*,int) ;
 unsigned long FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (struct crypto_shash*) ;
 struct xcbc_tfm_ctx* FUNC_5 (struct crypto_shash*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_6(struct crypto_shash *VAR_1,
         const u8 *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_3(VAR_1);
 struct xcbc_tfm_ctx *VAR_5 = FUNC_5(VAR_1);
 int VAR_6 = FUNC_4(VAR_1);
 u8 *VAR_7 = FUNC_0(&VAR_5->ctx[0], VAR_4 + 1);
 int VAR_8 = 0;
 u8 VAR_9[VAR_6];

 if ((VAR_8 = FUNC_2(VAR_5->child, VAR_2, VAR_3)))
  return VAR_8;

 FUNC_1(VAR_5->child, VAR_7, (u8 *)VAR_0 + VAR_6);
 FUNC_1(VAR_5->child, VAR_7 + VAR_6, (u8 *)VAR_0 + VAR_6 * 2);
 FUNC_1(VAR_5->child, VAR_9, (u8 *)VAR_0);

 return FUNC_2(VAR_5->child, VAR_9, VAR_6);

}
