
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int t ;
struct TYPE_14__ {int Id; } ;
struct TYPE_13__ {int LockSettings; int EtherIPIdListSettingVerNo; int EtherIPIdList; } ;
typedef TYPE_1__ IPSEC_SERVER ;
typedef TYPE_2__ ETHERIP_ID ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;

void FUNC_9(IPSEC_SERVER *VAR_0, ETHERIP_ID *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->LockSettings);
 {

  ETHERIP_ID VAR_2, *VAR_3;

  FUNC_8(&VAR_2, sizeof(VAR_2));

  FUNC_6(VAR_2.Id, sizeof(VAR_2.Id), VAR_1->Id);

  VAR_3 = FUNC_5(VAR_0->EtherIPIdList, &VAR_2);

  if (VAR_3 != ((void*)0))
  {
   FUNC_1(VAR_0->EtherIPIdList, VAR_3);

   FUNC_2(VAR_3);
  }


  VAR_3 = FUNC_0(VAR_1, sizeof(ETHERIP_ID));

  FUNC_3(VAR_0->EtherIPIdList, VAR_3);

  VAR_0->EtherIPIdListSettingVerNo++;
 }
 FUNC_7(VAR_0->LockSettings);
}
