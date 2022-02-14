
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ixp_ctx {int salted; int * salt; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {scalar_t__ cryptlen; int assoclen; scalar_t__ iv; } ;
struct aead_givcrypt_request {int giv; TYPE_1__ areq; int seq; } ;
typedef int __be64 ;


 struct crypto_aead* FUNC_0 (struct aead_givcrypt_request*) ;
 int FUNC_1 (TYPE_1__*,int,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 struct ixp_ctx* FUNC_3 (struct crypto_aead*) ;
 unsigned int FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (scalar_t__,int *,unsigned int) ;
 int FUNC_7 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct aead_givcrypt_request *VAR_0)
{
 struct crypto_aead *VAR_1 = FUNC_0(VAR_0);
 struct ixp_ctx *VAR_2 = FUNC_3(VAR_1);
 unsigned VAR_3, VAR_4 = FUNC_4(VAR_1);
 __be64 VAR_5;


 if (!VAR_2->salted) {
  FUNC_5(VAR_2->salt, VAR_4);
  VAR_2->salted = 1;
 }
 FUNC_6(VAR_0->areq.iv, VAR_2->salt, VAR_4);
 VAR_3 = VAR_4;
 if (VAR_4 > sizeof(u64)) {
  FUNC_7(VAR_0->giv, 0, VAR_4 - sizeof(u64));
  VAR_3 = sizeof(u64);
 }
 VAR_5 = FUNC_2(VAR_0->seq);
 FUNC_6(VAR_0->giv + VAR_4 - VAR_3, &VAR_5, VAR_3);
 return FUNC_1(&VAR_0->areq, 1, VAR_0->areq.assoclen,
   VAR_0->areq.cryptlen +VAR_4, VAR_0->giv);
}
