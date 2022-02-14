
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* b; void* a; } ;
typedef TYPE_2__ u128 ;
struct crypto_gcm_ghash_ctx {int cryptlen; } ;
struct ahash_request {int dummy; } ;
struct TYPE_4__ {struct ahash_request ahreq; } ;
struct crypto_gcm_req_priv_ctx {int src; int iauth_tag; struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct aead_request {int assoclen; } ;
typedef int lengths ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_2 (struct ahash_request*,int ,int *,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ahash_request*) ;
 int VAR_0 ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_1,
   struct crypto_gcm_req_priv_ctx *VAR_2)
{
 struct ahash_request *VAR_3 = &VAR_2->u.ahreq;
 struct crypto_gcm_ghash_ctx *VAR_4 = &VAR_2->ghash_ctx;
 u128 VAR_5;

 VAR_5.a = FUNC_3(VAR_1->assoclen * 8);
 VAR_5.b = FUNC_3(VAR_4->cryptlen * 8);
 FUNC_5(VAR_2->iauth_tag, &VAR_5, 16);
 FUNC_6(VAR_2->src, VAR_2->iauth_tag, 16);
 FUNC_1(VAR_3, FUNC_0(VAR_1),
       VAR_0, VAR_1);
 FUNC_2(VAR_3, VAR_2->src,
    ((void*)0), sizeof(VAR_5));

 return FUNC_4(VAR_3);
}
