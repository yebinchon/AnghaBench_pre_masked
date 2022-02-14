
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int t ;
struct TYPE_11__ {int Id; } ;
struct TYPE_10__ {int LockSettings; int EtherIPIdList; } ;
typedef TYPE_1__ IPSEC_SERVER ;
typedef TYPE_2__ ETHERIP_ID ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

bool FUNC_6(IPSEC_SERVER *VAR_0, ETHERIP_ID *VAR_1, char *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_0->LockSettings);
 {
  ETHERIP_ID VAR_4, *VAR_5;

  FUNC_5(&VAR_4, sizeof(VAR_4));

  FUNC_3(VAR_4.Id, sizeof(VAR_4.Id), VAR_2);

  VAR_5 = FUNC_2(VAR_0->EtherIPIdList, &VAR_4);

  if (VAR_5 != ((void*)0))
  {
   FUNC_0(VAR_1, VAR_5, sizeof(ETHERIP_ID));

   VAR_3 = 1;
  }
 }
 FUNC_4(VAR_0->LockSettings);

 return VAR_3;
}
