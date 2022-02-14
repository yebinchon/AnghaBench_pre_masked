
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_essiv_private {int salt; int tfm; int hash_tfm; } ;
struct TYPE_2__ {struct iv_essiv_private essiv; } ;
struct crypt_config {TYPE_1__ iv_gen_private; } ;


 int FUNC_0 (int ,int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypt_config *VAR_0)
{
 struct iv_essiv_private *VAR_1 = &VAR_0->iv_gen_private.essiv;
 unsigned VAR_2 = FUNC_1(VAR_1->hash_tfm);

 FUNC_2(VAR_1->salt, 0, VAR_2);

 return FUNC_0(VAR_1->tfm, VAR_1->salt, VAR_2);
}
