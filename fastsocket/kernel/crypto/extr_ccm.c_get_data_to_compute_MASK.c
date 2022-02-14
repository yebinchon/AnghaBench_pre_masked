
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct scatter_walk {int sg; } ;
struct crypto_cipher {int dummy; } ;
struct crypto_ccm_req_priv_ctx {int ilen; int * idata; int * odata; int flags; } ;


 int FUNC_0 (struct crypto_cipher*,int *,int,struct crypto_ccm_req_priv_ctx*) ;
 int FUNC_1 (struct crypto_cipher*,int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct scatter_walk*,int) ;
 int FUNC_6 (struct scatter_walk*,unsigned int) ;
 int FUNC_7 (struct scatter_walk*,int ,unsigned int) ;
 int * FUNC_8 (struct scatter_walk*,int ) ;
 int FUNC_9 (struct scatter_walk*,struct scatterlist*) ;
 int FUNC_10 (int *,int ) ;
 struct scatterlist* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct crypto_cipher *VAR_0,
          struct crypto_ccm_req_priv_ctx *VAR_1,
          struct scatterlist *VAR_2, unsigned int VAR_3)
{
 struct scatter_walk VAR_4;
 u8 *VAR_5;
 int VAR_6;

 FUNC_9(&VAR_4, VAR_2);

 while (VAR_3) {
  VAR_6 = FUNC_6(&VAR_4, VAR_3);
  if (!VAR_6) {
   FUNC_9(&VAR_4, FUNC_11(VAR_4.sg));
   VAR_6 = FUNC_6(&VAR_4, VAR_3);
  }
  VAR_5 = FUNC_8(&VAR_4, 0);

  FUNC_0(VAR_0, VAR_5, VAR_6, VAR_1);
  VAR_3 -= VAR_6;

  FUNC_10(VAR_5, 0);
  FUNC_5(&VAR_4, VAR_6);
  FUNC_7(&VAR_4, 0, VAR_3);
  if (VAR_3)
   FUNC_3(VAR_1->flags);
 }


 if (VAR_1->ilen) {
  int VAR_7;
  u8 *VAR_8 = VAR_1->odata;
  u8 *VAR_9 = VAR_1->idata;

  VAR_7 = 16 - VAR_1->ilen;
  FUNC_4(VAR_9 + VAR_1->ilen, 0, VAR_7);
  FUNC_2(VAR_8, VAR_9, 16);
  FUNC_1(VAR_0, VAR_8, VAR_8);
  VAR_1->ilen = 0;
 }
}
