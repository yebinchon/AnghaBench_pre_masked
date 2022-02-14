
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x509; } ;
typedef TYPE_1__ X ;
struct TYPE_7__ {int * pkey; } ;
typedef TYPE_2__ K ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_0 ;

K *FUNC_4(X *VAR_1)
{
 EVP_PKEY *VAR_2;
 K *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(VAR_0);
 {
  VAR_2 = FUNC_2(VAR_1->x509);
 }
 FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(K));
 VAR_3->pkey = VAR_2;

 return VAR_3;
}
