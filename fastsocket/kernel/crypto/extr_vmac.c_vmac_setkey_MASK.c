
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmac_ctx_t {int dummy; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct vmac_ctx_t* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*,int ) ;
 int FUNC_2 (int *,struct vmac_ctx_t*) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_3,
  const u8 *VAR_4, unsigned int VAR_5)
{
 struct vmac_ctx_t *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_3, VAR_0);
  return -VAR_1;
 }

 return FUNC_2((u8 *)VAR_4, VAR_6);
}
