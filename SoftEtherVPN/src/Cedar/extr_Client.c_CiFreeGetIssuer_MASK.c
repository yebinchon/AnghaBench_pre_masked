
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * x; int * issuer_x; } ;
typedef TYPE_1__ RPC_GET_ISSUER ;


 int FUNC_0 (int *) ;

void FUNC_1(RPC_GET_ISSUER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->issuer_x != ((void*)0))
 {
  FUNC_0(VAR_0->issuer_x);
 }
 if (VAR_0->x != ((void*)0))
 {
  FUNC_0(VAR_0->x);
 }
}
