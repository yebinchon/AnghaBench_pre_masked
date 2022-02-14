
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int t ;
typedef int s ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_9__ {char* DeviceName; int MacAddress; } ;
struct TYPE_8__ {size_t NumItem; int MacAddress; int DeviceName; TYPE_2__** Items; } ;
typedef TYPE_1__ RPC_CLIENT_SET_VLAN ;
typedef TYPE_2__ RPC_CLIENT_ENUM_VLAN_ITEM ;
typedef TYPE_1__ RPC_CLIENT_ENUM_VLAN ;
typedef int CLIENT ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int,char*) ;
 scalar_t__ FUNC_6 (int*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

void FUNC_8(CLIENT *VAR_0)
{
 RPC_CLIENT_ENUM_VLAN VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_7(&VAR_1, sizeof(VAR_1));
 if (FUNC_1(VAR_0, &VAR_1))
 {
  UINT VAR_2;

  for (VAR_2 = 0;VAR_2 < VAR_1.NumItem;VAR_2++)
  {
   RPC_CLIENT_ENUM_VLAN_ITEM *VAR_3 = VAR_1.Items[VAR_2];
   UCHAR VAR_4[6];

   if (FUNC_6(VAR_4, VAR_3->MacAddress) && ((VAR_4[0] == 0x00 && VAR_4[1] == 0xAC) || (VAR_4[0] == 0x5E)))
   {
    char *VAR_5 = VAR_3->DeviceName;
    RPC_CLIENT_SET_VLAN VAR_6;
    UCHAR VAR_7[6];

    FUNC_3(VAR_7);

    FUNC_7(&VAR_6, sizeof(VAR_6));
    FUNC_5(VAR_6.DeviceName, sizeof(VAR_6.DeviceName), VAR_5);

    FUNC_4(VAR_6.MacAddress, sizeof(VAR_6.MacAddress), VAR_7);

    FUNC_2(VAR_0, &VAR_6);
   }
  }

  FUNC_0(&VAR_1);
 }
}
