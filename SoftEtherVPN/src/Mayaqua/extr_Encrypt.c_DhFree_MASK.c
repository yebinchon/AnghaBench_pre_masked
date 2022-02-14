
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MyPublicKey; int MyPrivateKey; int dh; } ;
typedef TYPE_1__ DH_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(DH_CTX *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->dh);

 FUNC_2(VAR_0->MyPrivateKey);
 FUNC_2(VAR_0->MyPublicKey);

 FUNC_1(VAR_0);
}
