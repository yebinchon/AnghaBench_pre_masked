
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ClientAuth; int ClientOption; } ;
typedef TYPE_1__ NAT ;
typedef int FOLDER ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(NAT *VAR_0, FOLDER *VAR_1)
{
 FOLDER *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_1, "VpnClientOption");
 VAR_3 = FUNC_0(VAR_1, "VpnClientAuth");
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_0->ClientOption = FUNC_2(VAR_2);
 VAR_0->ClientAuth = FUNC_1(VAR_3);
}
