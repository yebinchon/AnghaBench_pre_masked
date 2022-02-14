
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {void* subject_name; void* issuer_name; int * x509; } ;
typedef TYPE_1__ X ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(X *VAR_0)
{
 X509 *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = VAR_0->x509;
 VAR_0->issuer_name = FUNC_0(FUNC_1(VAR_1));
 VAR_0->subject_name = FUNC_0(FUNC_2(VAR_1));
}
