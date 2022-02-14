
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
struct TYPE_10__ {int Id; } ;
struct TYPE_9__ {int LockSettings; int EtherIPIdListSettingVerNo; int EtherIPIdList; } ;
typedef TYPE_1__ IPSEC_SERVER ;
typedef TYPE_2__ ETHERIP_ID ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

bool FUNC_7(IPSEC_SERVER *VAR_0, char *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_0->LockSettings);
 {

  ETHERIP_ID VAR_3, *VAR_4;

  FUNC_6(&VAR_3, sizeof(VAR_3));

  FUNC_4(VAR_3.Id, sizeof(VAR_3.Id), VAR_1);

  VAR_4 = FUNC_3(VAR_0->EtherIPIdList, &VAR_3);

  if (VAR_4 != ((void*)0))
  {
   FUNC_0(VAR_0->EtherIPIdList, VAR_4);

   FUNC_1(VAR_4);

   VAR_2 = 1;

   VAR_0->EtherIPIdListSettingVerNo++;
  }
 }
 FUNC_5(VAR_0->LockSettings);

 return VAR_2;
}
