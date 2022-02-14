
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int HubList; } ;
struct TYPE_10__ {char* Name; } ;
struct TYPE_8__ {int L2TP_DefaultHub; int IPsec_Secret; } ;
struct TYPE_9__ {int LockSettings; TYPE_1__ Services; TYPE_4__* Cedar; } ;
typedef TYPE_2__ IPSEC_SERVER ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ CEDAR ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(IPSEC_SERVER *VAR_1)
{
 CEDAR *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_1->Cedar;

 FUNC_4(VAR_1->LockSettings);
 {
  bool VAR_3 = 0;

  if (FUNC_0(VAR_1->Services.IPsec_Secret))
  {

   FUNC_6(VAR_1->Services.IPsec_Secret, sizeof(VAR_1->Services.IPsec_Secret), VAR_0);
  }

  FUNC_5(VAR_2->HubList);
  {
   if (FUNC_0(VAR_1->Services.L2TP_DefaultHub))
   {
    VAR_3 = 1;
   }
   else
   {
    if (FUNC_1(VAR_2, VAR_1->Services.L2TP_DefaultHub) == 0)
    {
     VAR_3 = 1;
    }
   }

   if (VAR_3)
   {

    HUB *VAR_4 = ((void*)0);

    if (FUNC_3(VAR_2->HubList) >= 1)
    {
     VAR_4 = FUNC_2(VAR_2->HubList, 0);
    }

    if (VAR_4 != ((void*)0))
    {
     FUNC_6(VAR_1->Services.L2TP_DefaultHub, sizeof(VAR_1->Services.L2TP_DefaultHub), VAR_4->Name);
    }
    else
    {
     FUNC_6(VAR_1->Services.L2TP_DefaultHub, sizeof(VAR_1->Services.L2TP_DefaultHub), "");
    }
   }
  }
  FUNC_8(VAR_2->HubList);
 }
 FUNC_7(VAR_1->LockSettings);
}
