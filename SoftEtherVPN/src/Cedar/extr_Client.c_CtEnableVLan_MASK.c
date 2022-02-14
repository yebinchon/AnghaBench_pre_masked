
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tmp ;
typedef int t ;
struct TYPE_14__ {int Enabled; int Name; } ;
typedef TYPE_1__ UNIX_VLAN ;
struct TYPE_17__ {scalar_t__ OsType; } ;
struct TYPE_16__ {int UnixVLanList; } ;
struct TYPE_15__ {int DeviceName; } ;
typedef TYPE_2__ RPC_CLIENT_CREATE_VLAN ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char*,int ) ;
 TYPE_7__* FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_13 (int ,TYPE_1__*) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (TYPE_1__*,int) ;

bool FUNC_17(CLIENT *VAR_7, RPC_CLIENT_CREATE_VLAN *VAR_8)
{

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }
 FUNC_7(VAR_7->UnixVLanList);
 {
  UNIX_VLAN *VAR_9, VAR_10;

  FUNC_16(&VAR_10, sizeof(VAR_10));
  FUNC_14(VAR_10.Name, sizeof(VAR_10.Name), VAR_8->DeviceName);

  VAR_9 = FUNC_13(VAR_7->UnixVLanList, &VAR_10);
  if (VAR_9 == ((void*)0))
  {
   FUNC_15(VAR_7->UnixVLanList);
   FUNC_3(VAR_7, VAR_1);
   return 0;
  }


  VAR_9->Enabled = 1;
 }
 FUNC_15(VAR_7->UnixVLanList);

 FUNC_1(VAR_7);
 FUNC_0(VAR_7);
 FUNC_2(VAR_7);

 return 1;
}
