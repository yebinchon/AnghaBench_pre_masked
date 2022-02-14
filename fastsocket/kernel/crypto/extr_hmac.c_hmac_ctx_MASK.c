
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_ctx {int dummy; } ;
struct crypto_shash {int dummy; } ;


 struct hmac_ctx* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct hmac_ctx *FUNC_4(struct crypto_shash *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0) +
    FUNC_2(VAR_0) * 2,
    FUNC_3());
}
