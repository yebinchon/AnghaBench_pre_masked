
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkcs12; } ;
typedef TYPE_1__ P12 ;
typedef int BIO ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

BIO *FUNC_4(P12 *VAR_1)
{
 BIO *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1();
 FUNC_0(VAR_0);
 {
  FUNC_3(VAR_2, VAR_1->pkcs12);
 }
 FUNC_2(VAR_0);

 return VAR_2;
}
