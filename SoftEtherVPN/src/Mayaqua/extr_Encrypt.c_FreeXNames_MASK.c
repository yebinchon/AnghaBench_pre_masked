
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * subject_name; int * issuer_name; } ;
typedef TYPE_1__ X ;


 int FUNC_0 (int *) ;

void FUNC_1(X *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->issuer_name);
 VAR_0->issuer_name = ((void*)0);

 FUNC_0(VAR_0->subject_name);
 VAR_0->subject_name = ((void*)0);
}
