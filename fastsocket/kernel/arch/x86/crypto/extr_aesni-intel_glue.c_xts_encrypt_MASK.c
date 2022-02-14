
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xts_crypt_req {int tbuflen; int crypt_fn; int crypt_ctx; int tweak_fn; int tweak_ctx; int * tbuf; } ;
struct scatterlist {int dummy; } ;
struct blkcipher_desc {int flags; int tfm; } ;
struct aesni_xts_ctx {int raw_crypt_ctx; int raw_tweak_ctx; } ;
typedef int buf ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct aesni_xts_ctx* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int,struct xts_crypt_req*) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_3, struct scatterlist *VAR_4,
         struct scatterlist *VAR_5, unsigned int VAR_6)
{
 struct aesni_xts_ctx *VAR_7 = FUNC_1(VAR_3->tfm);
 be128 VAR_8[8];
 struct xts_crypt_req VAR_9 = {
  .tbuf = VAR_8,
  .tbuflen = sizeof(VAR_8),

  .tweak_ctx = FUNC_0(VAR_7->raw_tweak_ctx),
  .tweak_fn = VAR_1,
  .crypt_ctx = FUNC_0(VAR_7->raw_crypt_ctx),
  .crypt_fn = VAR_2,
 };
 int VAR_10;

 VAR_3->flags &= ~VAR_0;

 FUNC_2();
 VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_9);
 FUNC_3();

 return VAR_10;
}
