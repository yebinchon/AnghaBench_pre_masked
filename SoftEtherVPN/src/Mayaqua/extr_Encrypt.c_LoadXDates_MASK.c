
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x509; void* notAfter; void* notBefore; } ;
typedef TYPE_1__ X ;
typedef int ASN1_TIME ;


 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(X *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->notBefore = FUNC_0((ASN1_TIME *)FUNC_2(VAR_0->x509));
 VAR_0->notAfter = FUNC_0((ASN1_TIME *)FUNC_1(VAR_0->x509));
}
