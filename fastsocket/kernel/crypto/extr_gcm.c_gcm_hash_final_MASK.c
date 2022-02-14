
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahash_request {int dummy; } ;
struct TYPE_2__ {struct ahash_request ahreq; } ;
struct crypto_gcm_req_priv_ctx {int iauth_tag; TYPE_1__ u; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_2 (struct ahash_request*,int *,int ,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_1,
     struct crypto_gcm_req_priv_ctx *VAR_2)
{
 struct ahash_request *VAR_3 = &VAR_2->u.ahreq;

 FUNC_1(VAR_3, FUNC_0(VAR_1),
       VAR_0, VAR_1);
 FUNC_2(VAR_3, ((void*)0), VAR_2->iauth_tag, 0);

 return FUNC_3(VAR_3);
}
