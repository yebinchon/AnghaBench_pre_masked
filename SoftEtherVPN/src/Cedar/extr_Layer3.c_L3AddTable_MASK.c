
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int Active; int lock; int TableList; TYPE_1__* Cedar; } ;
struct TYPE_12__ {scalar_t__ Metric; int GatewayAddress; } ;
struct TYPE_11__ {int Server; } ;
typedef TYPE_2__ L3TABLE ;
typedef TYPE_3__ L3SW ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int) ;

bool FUNC_8(L3SW *VAR_0, L3TABLE *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->Metric == 0 || VAR_1->GatewayAddress == 0 || VAR_1->GatewayAddress == 0xffffffff)
 {
  return 0;
 }

 FUNC_4(VAR_0->lock);
 {
  if (FUNC_3(VAR_0->TableList) >= FUNC_1(VAR_0->Cedar->Server, "i_max_l3_table"))
  {

  }
  else
  {

   if (VAR_0->Active == 0)
   {
    if (FUNC_5(VAR_0->TableList, VAR_1) == ((void*)0))
    {
     L3TABLE *VAR_3 = FUNC_7(sizeof(L3TABLE));

     FUNC_0(VAR_3, VAR_1, sizeof(L3TABLE));

     FUNC_2(VAR_0->TableList, VAR_3);

     VAR_2 = 1;
    }
   }
  }
 }
 FUNC_6(VAR_0->lock);

 return VAR_2;
}
