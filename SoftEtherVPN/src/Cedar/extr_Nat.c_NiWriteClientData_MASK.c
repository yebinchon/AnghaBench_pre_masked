
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ClientAuth; int * ClientOption; } ;
typedef TYPE_1__ NAT ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(NAT *VAR_0, FOLDER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0->ClientOption == ((void*)0) || VAR_0->ClientAuth == ((void*)0))
 {
  return;
 }

 FUNC_2(FUNC_0(VAR_1, "VpnClientOption"), VAR_0->ClientOption);
 FUNC_1(FUNC_0(VAR_1, "VpnClientAuth"), VAR_0->ClientAuth);
}
