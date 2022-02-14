
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {TYPE_1__* Cedar; } ;
struct TYPE_8__ {scalar_t__ Key; int * x; } ;
struct TYPE_7__ {int CaList; } ;
typedef TYPE_2__ RPC_GET_CA ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

bool FUNC_7(CLIENT *VAR_1, RPC_GET_CA *VAR_2)
{
 bool VAR_3 = 1;
 X *VAR_4 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_1->Cedar->CaList);
 {
  UINT VAR_5;

  for (VAR_5 = 0;VAR_5 < FUNC_3(VAR_1->Cedar->CaList);VAR_5++)
  {
   X *VAR_6 = FUNC_2(VAR_1->Cedar->CaList, VAR_5);

   if (FUNC_5(VAR_6) == VAR_2->Key)
   {
    VAR_4 = FUNC_1(VAR_6);
    break;
   }
  }
 }
 FUNC_6(VAR_1->Cedar->CaList);

 if (VAR_4 == ((void*)0))
 {

  VAR_3 = 0;
  FUNC_0(VAR_1, VAR_0);
 }
 else
 {
  VAR_3 = 1;
  VAR_2->x = VAR_4;
 }

 return VAR_3;
}
