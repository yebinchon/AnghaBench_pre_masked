
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int IpAddress; int SubnetMask; int HubName; TYPE_2__* Switch; } ;
struct TYPE_9__ {int Active; int lock; int IfList; TYPE_1__* Cedar; int TableList; } ;
struct TYPE_8__ {int Server; } ;
typedef TYPE_2__ L3SW ;
typedef TYPE_3__ L3IF ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int) ;

bool FUNC_9(L3SW *VAR_0, char *VAR_1, UINT VAR_2, UINT VAR_3)
{
 L3IF *VAR_4;
 bool VAR_5 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || FUNC_2(VAR_1) == 0 ||
  VAR_2 == 0 || VAR_2 == 0xffffffff)
 {
  return 0;
 }

 FUNC_5(VAR_0->lock);
 {
  if (FUNC_4(VAR_0->TableList) >= FUNC_0(VAR_0->Cedar->Server, "i_max_l3_if"))
  {

  }
  else
  {
   if (VAR_0->Active == 0)
   {

    if (FUNC_3(VAR_0, VAR_1) == ((void*)0))
    {

     VAR_4 = FUNC_8(sizeof(L3IF));

     VAR_4->Switch = VAR_0;
     FUNC_6(VAR_4->HubName, sizeof(VAR_4->HubName), VAR_1);
     VAR_4->IpAddress = VAR_2;
     VAR_4->SubnetMask = VAR_3;

     FUNC_1(VAR_0->IfList, VAR_4);

     VAR_5 = 1;
    }
   }
  }
 }
 FUNC_7(VAR_0->lock);

 return VAR_5;
}
