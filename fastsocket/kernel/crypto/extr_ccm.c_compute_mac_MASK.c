
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;
struct crypto_ccm_req_priv_ctx {unsigned int ilen; int * idata; int * odata; } ;


 int FUNC_0 (struct crypto_cipher*,int *,int *) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_cipher *VAR_0, u8 *VAR_1, int VAR_2,
         struct crypto_ccm_req_priv_ctx *VAR_3)
{
 unsigned int VAR_4 = 16;
 u8 *VAR_5 = VAR_3->odata;
 u8 *VAR_6 = VAR_3->idata;
 int VAR_7, VAR_8;

 VAR_7 = VAR_2;


 VAR_8 = VAR_4 - VAR_3->ilen;
 if (VAR_7 >= VAR_8) {
  FUNC_2(VAR_6 + VAR_3->ilen, VAR_1, VAR_8);
  FUNC_1(VAR_5, VAR_6, VAR_4);
  FUNC_0(VAR_0, VAR_5, VAR_5);
  VAR_7 -= VAR_8;
  VAR_1 += VAR_8;
  VAR_3->ilen = 0;
 }


 while (VAR_7 >= VAR_4) {
  FUNC_1(VAR_5, VAR_1, VAR_4);
  FUNC_0(VAR_0, VAR_5, VAR_5);

  VAR_7 -= VAR_4;
  VAR_1 += VAR_4;
 }




 if (VAR_7) {
  FUNC_2(VAR_6 + VAR_3->ilen, VAR_1, VAR_7);
  VAR_3->ilen += VAR_7;
 }
}
