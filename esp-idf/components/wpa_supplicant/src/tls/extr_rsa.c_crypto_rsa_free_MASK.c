
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rsa_key {int iqmp; int dmq1; int dmp1; int q; int p; int d; int e; int n; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_rsa_key*) ;

void FUNC_2(struct crypto_rsa_key *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->n);
  FUNC_0(VAR_0->e);
  FUNC_0(VAR_0->d);
  FUNC_0(VAR_0->p);
  FUNC_0(VAR_0->q);
  FUNC_0(VAR_0->dmp1);
  FUNC_0(VAR_0->dmq1);
  FUNC_0(VAR_0->iqmp);
  FUNC_1(VAR_0);
 }
}
