
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lzo_ctx {int lzo_comp_mem; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lzo_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int const*,unsigned int,int *,size_t*,int ) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4, u8 *VAR_5, unsigned int *VAR_6)
{
 struct lzo_ctx *VAR_7 = FUNC_0(VAR_2);
 size_t VAR_8 = *VAR_6;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8, VAR_7->lzo_comp_mem);

 if (VAR_9 != VAR_1)
  return -VAR_0;

 *VAR_6 = VAR_8;
 return 0;
}
