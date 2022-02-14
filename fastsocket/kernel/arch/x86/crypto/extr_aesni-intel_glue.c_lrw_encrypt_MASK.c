
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct lrw_crypt_req {int tbuflen; int crypt_fn; int crypt_ctx; int * table_ctx; int * tbuf; } ;
struct blkcipher_desc {int flags; int tfm; } ;
struct aesni_lrw_ctx {int raw_aes_ctx; int lrw_table; } ;
typedef int buf ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct aesni_lrw_ctx* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int,struct lrw_crypt_req*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_2, struct scatterlist *VAR_3,
         struct scatterlist *VAR_4, unsigned int VAR_5)
{
 struct aesni_lrw_ctx *VAR_6 = FUNC_1(VAR_2->tfm);
 be128 VAR_7[8];
 struct lrw_crypt_req VAR_8 = {
  .tbuf = VAR_7,
  .tbuflen = sizeof(VAR_7),

  .table_ctx = &VAR_6->lrw_table,
  .crypt_ctx = FUNC_0(VAR_6->raw_aes_ctx),
  .crypt_fn = VAR_1,
 };
 int VAR_9;

 VAR_2->flags &= ~VAR_0;

 FUNC_2();
 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8);
 FUNC_3();

 return VAR_9;
}
