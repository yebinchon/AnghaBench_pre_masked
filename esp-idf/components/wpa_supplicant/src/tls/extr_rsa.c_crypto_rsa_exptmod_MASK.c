
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int n; int e; int q; int p; int iqmp; int dmq1; int dmp1; int private_key; } ;
struct bignum {int dummy; } ;


 scalar_t__ FUNC_0 (struct bignum*,struct bignum*,struct bignum*) ;
 scalar_t__ FUNC_1 (int ,struct bignum*) ;
 int FUNC_2 (struct bignum*) ;
 scalar_t__ FUNC_3 (struct bignum*,int ,int ,struct bignum*) ;
 scalar_t__ FUNC_4 (struct bignum*,int *,int *) ;
 size_t FUNC_5 (struct bignum*) ;
 struct bignum* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct bignum*,int ,struct bignum*) ;
 scalar_t__ FUNC_8 (struct bignum*,int ,int ,struct bignum*) ;
 scalar_t__ FUNC_9 (struct bignum*,int const*,size_t) ;
 scalar_t__ FUNC_10 (struct bignum*,struct bignum*,struct bignum*) ;
 size_t FUNC_11 (struct crypto_rsa_key*) ;
 int FUNC_12 (int *,int ,size_t) ;

int FUNC_13(const u8 *VAR_0, size_t VAR_1, u8 *VAR_2, size_t *VAR_3,
         struct crypto_rsa_key *VAR_4, int VAR_5)
{
 struct bignum *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = -1;
 size_t VAR_10;

 if (VAR_5 && !VAR_4->private_key)
  return -1;

 VAR_6 = FUNC_6();
 if (VAR_6 == ((void*)0))
  return -1;

 if (FUNC_9(VAR_6, VAR_0, VAR_1) < 0)
  goto error;
 if (FUNC_1(VAR_4->n, VAR_6) < 0) {

  goto error;
 }

 if (VAR_5) {
  VAR_7 = FUNC_6();
  VAR_8 = FUNC_6();
  if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
   goto error;


  if (FUNC_3(VAR_6, VAR_4->dmp1, VAR_4->p, VAR_7) < 0)
   goto error;


  if (FUNC_3(VAR_6, VAR_4->dmq1, VAR_4->q, VAR_8) < 0)
   goto error;


  if (FUNC_10(VAR_7, VAR_8, VAR_6) < 0 ||
      FUNC_8(VAR_6, VAR_4->iqmp, VAR_4->p, VAR_6) < 0)
   goto error;


  if (FUNC_7(VAR_6, VAR_4->q, VAR_6) < 0 ||
      FUNC_0(VAR_6, VAR_8, VAR_6) < 0)
   goto error;
 } else {


  if (FUNC_3(VAR_6, VAR_4->e, VAR_4->n, VAR_6) < 0)
   goto error;
 }

 VAR_10 = FUNC_11(VAR_4);
 if (VAR_10 > *VAR_3) {
  *VAR_3 = VAR_10;
  goto error;
 }

 if (FUNC_5(VAR_6) > VAR_10)
  goto error;

 *VAR_3 = VAR_10;
 FUNC_12(VAR_2, 0, VAR_10);
 if (FUNC_4(
      VAR_6, VAR_2 +
      (VAR_10 - FUNC_5(VAR_6)), ((void*)0)) < 0)
  goto error;

 VAR_9 = 0;

error:

 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_9;
}
