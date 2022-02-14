
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int t ;
struct TYPE_13__ {int MacAddress; int Name; } ;
typedef TYPE_1__ UNIX_VLAN ;
struct TYPE_15__ {int UnixVLanList; } ;
struct TYPE_14__ {int MacAddress; int DeviceName; } ;
typedef TYPE_2__ RPC_CLIENT_SET_VLAN ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_1__* FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (TYPE_1__*,int) ;

bool FUNC_12(CLIENT *VAR_4, RPC_CLIENT_SET_VLAN *VAR_5)
{

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }



 FUNC_4(VAR_4->UnixVLanList);
 {
  UNIX_VLAN VAR_6, *VAR_7;
  FUNC_11(&VAR_6, sizeof(VAR_6));
  FUNC_8(VAR_6.Name, sizeof(VAR_6.Name), VAR_5->DeviceName);

  VAR_7 = FUNC_7(VAR_4->UnixVLanList, &VAR_6);
  if (VAR_7 == ((void*)0))
  {

   FUNC_3(VAR_4, VAR_1);
   FUNC_10(VAR_4->UnixVLanList);
   return 0;
  }

  FUNC_9(VAR_7->MacAddress, VAR_5->MacAddress);
 }
 FUNC_10(VAR_4->UnixVLanList);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4);

 return 1;
}
