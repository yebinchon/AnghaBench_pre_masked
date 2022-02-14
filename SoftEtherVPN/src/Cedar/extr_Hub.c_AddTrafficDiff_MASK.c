
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int FarmMember; char* Name; TYPE_1__* Cedar; } ;
struct TYPE_8__ {int Traffic; int Type; void* Name; void* HubName; } ;
struct TYPE_7__ {int TrafficDiffList; } ;
typedef TYPE_2__ TRAFFIC_DIFF ;
typedef int TRAFFIC ;
typedef TYPE_3__ HUB ;


 int FUNC_0 (int *,int *,int) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int) ;

void FUNC_7(HUB *VAR_1, char *VAR_2, UINT VAR_3, TRAFFIC *VAR_4)
{
 TRAFFIC_DIFF *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_1->FarmMember == 0 || VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 if (FUNC_3(VAR_1->Cedar->TrafficDiffList) > VAR_0)
 {
  return;
 }

 VAR_5 = FUNC_6(sizeof(TRAFFIC_DIFF));
 VAR_5->HubName = FUNC_1(VAR_1->Name);
 VAR_5->Name = FUNC_1(VAR_2);
 VAR_5->Type = VAR_3;
 FUNC_0(&VAR_5->Traffic, VAR_4, sizeof(TRAFFIC));

 FUNC_4(VAR_1->Cedar->TrafficDiffList);
 {
  FUNC_2(VAR_1->Cedar->TrafficDiffList, VAR_5);
 }
 FUNC_5(VAR_1->Cedar->TrafficDiffList);
}
