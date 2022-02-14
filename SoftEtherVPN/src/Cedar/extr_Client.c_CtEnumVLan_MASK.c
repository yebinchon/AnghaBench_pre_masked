
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {char* Name; int MacAddress; int Enabled; } ;
typedef TYPE_2__ UNIX_VLAN ;
typedef size_t UINT ;
struct TYPE_17__ {int UnixVLanList; TYPE_1__* Cedar; } ;
struct TYPE_16__ {int NumItem; TYPE_4__** Items; } ;
struct TYPE_15__ {int Version; int DeviceName; int MacAddress; int Enabled; } ;
struct TYPE_14__ {size_t NumTokens; char** Token; } ;
struct TYPE_12__ {char* VerString; } ;
typedef TYPE_3__ TOKEN_LIST ;
typedef TYPE_4__ RPC_CLIENT_ENUM_VLAN_ITEM ;
typedef TYPE_5__ RPC_CLIENT_ENUM_VLAN ;
typedef TYPE_6__ CLIENT ;


 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 char* FUNC_7 (int ,int ) ;
 char* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_12 (int) ;

bool FUNC_13(CLIENT *VAR_4, RPC_CLIENT_ENUM_VLAN *VAR_5)
{
 UINT VAR_6;
 TOKEN_LIST *VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }



 FUNC_5(VAR_4->UnixVLanList);
 {
  VAR_5->NumItem = FUNC_4(VAR_4->UnixVLanList);
  VAR_5->Items = FUNC_12(sizeof(RPC_CLIENT_ENUM_VLAN_ITEM *) * VAR_5->NumItem);

  for (VAR_6 = 0;VAR_6 < VAR_5->NumItem;VAR_6++)
  {
   RPC_CLIENT_ENUM_VLAN_ITEM *VAR_8;
   UNIX_VLAN *VAR_9;

   VAR_9 = FUNC_3(VAR_4->UnixVLanList, VAR_6);
   VAR_5->Items[VAR_6] = FUNC_12(sizeof(RPC_CLIENT_ENUM_VLAN_ITEM));
   VAR_8 = VAR_5->Items[VAR_6];

   VAR_8->Enabled = VAR_9->Enabled;
   FUNC_0(VAR_8->MacAddress, sizeof(VAR_8->MacAddress), VAR_9->MacAddress, 6);
   FUNC_10(VAR_8->DeviceName, sizeof(VAR_8->DeviceName), VAR_9->Name);
   FUNC_10(VAR_8->Version, sizeof(VAR_8->Version), VAR_4->Cedar->VerString);
  }
 }
 FUNC_11(VAR_4->UnixVLanList);

 return 1;
}
