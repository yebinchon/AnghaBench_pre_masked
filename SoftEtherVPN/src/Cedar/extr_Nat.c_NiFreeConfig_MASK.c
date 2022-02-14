
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AdminK; int AdminX; int ClientAuth; int ClientOption; int * CfgRw; } ;
typedef TYPE_1__ NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(NAT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_5(VAR_0);


 FUNC_2(VAR_0->CfgRw);
 VAR_0->CfgRw = ((void*)0);

 FUNC_1(VAR_0->ClientOption);
 FUNC_0(VAR_0->ClientAuth);

 FUNC_4(VAR_0->AdminX);
 FUNC_3(VAR_0->AdminK);
}
