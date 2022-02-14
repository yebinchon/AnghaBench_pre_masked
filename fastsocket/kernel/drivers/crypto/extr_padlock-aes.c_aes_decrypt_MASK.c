
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int encrypt; int decrypt; } ;
struct aes_ctx {TYPE_1__ cword; int D; } ;


 struct aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int const*,int *,int ,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct aes_ctx *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 FUNC_4(&VAR_3->cword.encrypt);
 VAR_4 = FUNC_3();
 FUNC_1(VAR_2, VAR_1, VAR_3->D, &VAR_3->cword.decrypt, 1);
 FUNC_2(VAR_4);
 FUNC_5(&VAR_3->cword.encrypt);
}
