
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seqiv_ctx {int lock; int salt; } ;
struct crypto_aead {int dummy; } ;
struct aead_givcrypt_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ givencrypt; } ;


 struct crypto_aead* FUNC_0 (struct aead_givcrypt_request*) ;
 TYPE_1__* FUNC_1 (struct crypto_aead*) ;
 struct seqiv_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct aead_givcrypt_request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct aead_givcrypt_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_0(VAR_1);
 struct seqiv_ctx *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;

 FUNC_6(&VAR_3->lock);
 if (FUNC_1(VAR_2)->givencrypt != FUNC_8)
  goto unlock;

 FUNC_1(VAR_2)->givencrypt = FUNC_5;
 VAR_4 = FUNC_4(VAR_0, VAR_3->salt,
       FUNC_3(VAR_2));

unlock:
 FUNC_7(&VAR_3->lock);

 if (VAR_4)
  return VAR_4;

 return FUNC_5(VAR_1);
}
