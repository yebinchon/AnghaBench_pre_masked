
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_desc {int flags; int tfm; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int flags; struct crypto_tfm* tfm; } ;
struct ahash_request {int result; TYPE_1__ base; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct hash_desc*,int ) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 struct crypto_tfm *VAR_1 = VAR_0->base.tfm;
 struct hash_desc VAR_2 = {
  .tfm = FUNC_0(VAR_1),
  .flags = VAR_0->base.flags,
 };

 FUNC_1(&VAR_2, VAR_0->result);
 return 0;
}
