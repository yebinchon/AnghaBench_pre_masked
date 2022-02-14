
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pkcs12; } ;
typedef int PKCS12 ;
typedef TYPE_1__ P12 ;


 TYPE_1__* FUNC_0 (int) ;

P12 *FUNC_1(PKCS12 *VAR_0)
{
 P12 *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(sizeof(P12));
 VAR_1->pkcs12 = VAR_0;

 return VAR_1;
}
