
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* rsa; } ;
struct TYPE_9__ {TYPE_2__ pkey; } ;
struct TYPE_8__ {TYPE_5__* pkey; } ;
struct TYPE_6__ {int const* n; } ;
typedef int RSA ;
typedef TYPE_3__ K ;
typedef int BUF ;
typedef int BIGNUM ;


 int * FUNC_0 (int const*) ;
 int * FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int const**,int *,int *) ;

BUF *FUNC_3(K *VAR_0)
{
 BUF *VAR_1;





 if (VAR_0 == ((void*)0) || VAR_0->pkey == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_0->pkey->pkey.rsa == ((void*)0) || VAR_0->pkey->pkey.rsa->n == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(VAR_0->pkey->pkey.rsa->n);


 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_1;
}
