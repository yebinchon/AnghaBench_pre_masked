
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X ;
struct TYPE_9__ {TYPE_1__* Cedar; } ;
struct TYPE_8__ {int * x; int * issuer_x; } ;
struct TYPE_7__ {int CaList; } ;
typedef TYPE_2__ RPC_GET_ISSUER ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(CLIENT *VAR_1, RPC_GET_ISSUER *VAR_2)
{
 X *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_1(VAR_1->Cedar->CaList, VAR_2->x);
 if (VAR_3 == ((void*)0))
 {
  FUNC_0(VAR_1, VAR_0);;
  return 0;
 }
 else
 {
  VAR_2->issuer_x = VAR_3;
  if (VAR_2->x != ((void*)0))
  {
   FUNC_2(VAR_2->x);
   VAR_2->x = ((void*)0);
  }
  return 1;
 }
}
