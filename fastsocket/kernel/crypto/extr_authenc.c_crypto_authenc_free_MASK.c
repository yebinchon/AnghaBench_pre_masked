
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_instance {int dummy; } ;
struct authenc_instance_ctx {int auth; int enc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct authenc_instance_ctx* FUNC_2 (struct crypto_instance*) ;
 int FUNC_3 (struct crypto_instance*) ;

__attribute__((used)) static void FUNC_4(struct crypto_instance *VAR_0)
{
 struct authenc_instance_ctx *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->enc);
 FUNC_0(&VAR_1->auth);
 FUNC_3(VAR_0);
}
