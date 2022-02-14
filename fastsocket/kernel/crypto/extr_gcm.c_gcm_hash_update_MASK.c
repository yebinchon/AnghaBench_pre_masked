
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {struct ahash_request ahreq; } ;
struct crypto_gcm_req_priv_ctx {TYPE_1__ u; } ;
struct aead_request {int dummy; } ;
typedef int crypto_completion_t ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_2 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_0,
      struct crypto_gcm_req_priv_ctx *VAR_1,
      crypto_completion_t VAR_2,
      struct scatterlist *VAR_3,
      unsigned int VAR_4)
{
 struct ahash_request *VAR_5 = &VAR_1->u.ahreq;

 FUNC_1(VAR_5, FUNC_0(VAR_0),
       VAR_2, VAR_0);
 FUNC_2(VAR_5, VAR_3, ((void*)0), VAR_4);

 return FUNC_3(VAR_5);
}
