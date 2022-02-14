
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_credentials {struct tlsv1_credentials* dh_g; struct tlsv1_credentials* dh_p; int key; int cert; int trusted_certs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tlsv1_credentials*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tlsv1_credentials *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_2(VAR_0->trusted_certs);
 FUNC_2(VAR_0->cert);
 FUNC_0(VAR_0->key);
 FUNC_1(VAR_0->dh_p);
 FUNC_1(VAR_0->dh_g);
 FUNC_1(VAR_0);
}
