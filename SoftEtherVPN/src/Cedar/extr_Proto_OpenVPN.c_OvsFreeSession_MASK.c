
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int ServerAddress; } ;
struct TYPE_8__ {TYPE_1__ L3ClientAddressOption; } ;
struct TYPE_7__ {scalar_t__ Mode; TYPE_4__* IpcAsync; int * Ipc; int ** Channels; } ;
typedef TYPE_2__ OPENVPN_SESSION ;
typedef int OPENVPN_CHANNEL ;
typedef int IP ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(OPENVPN_SESSION *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return;
 }


 if (VAR_2->Ipc != ((void*)0))
 {
  if (VAR_2->Mode == VAR_0)
  {
   if (VAR_2->IpcAsync != ((void*)0))
   {
    IP VAR_4;

    FUNC_6(&VAR_4, VAR_2->IpcAsync->L3ClientAddressOption.ServerAddress);

    FUNC_3(VAR_2->Ipc, &VAR_4);
    FUNC_4(VAR_2->Ipc);
   }
  }
 }


 for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
 {
  OPENVPN_CHANNEL *VAR_5 = VAR_2->Channels[VAR_3];

  if (VAR_5 != ((void*)0))
  {
   FUNC_5(VAR_5);
  }
 }


 if (VAR_2->Ipc != ((void*)0))
 {
  FUNC_1(VAR_2->Ipc);
 }

 if (VAR_2->IpcAsync != ((void*)0))
 {
  FUNC_2(VAR_2->IpcAsync);
 }

 FUNC_0(VAR_2);
}
