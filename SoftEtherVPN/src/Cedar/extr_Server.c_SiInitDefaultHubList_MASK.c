
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int o ;
struct TYPE_13__ {int Bridge; } ;
struct TYPE_12__ {int Offline; int SecurePassword; int HashedPassword; int CreatedTime; } ;
struct TYPE_11__ {TYPE_8__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int HUB_OPTION ;
typedef int HUB_LOG ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (TYPE_8__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_8__*,int ,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;

void FUNC_10(SERVER *VAR_2)
{
 HUB *VAR_3;
 HUB_OPTION VAR_4;
 HUB_LOG VAR_5;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_9(&VAR_4, sizeof(VAR_4));


 FUNC_6(&VAR_4);

 VAR_3 = FUNC_1(VAR_2->Cedar, VAR_2->Cedar->Bridge == 0 ? VAR_1 : VAR_0, &VAR_4);
 VAR_3->CreatedTime = FUNC_8();
 FUNC_0(VAR_2->Cedar, VAR_3);

 if (VAR_2->Cedar->Bridge)
 {

  FUNC_2(VAR_3->HashedPassword, sizeof(VAR_3->HashedPassword));
  FUNC_2(VAR_3->SecurePassword, sizeof(VAR_3->SecurePassword));
 }

 VAR_3->Offline = 1;
 FUNC_5(VAR_3);


 FUNC_7(&VAR_5);
 FUNC_4(VAR_3, &VAR_5);

 FUNC_3(VAR_3);
}
