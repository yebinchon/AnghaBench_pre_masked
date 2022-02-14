
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int HostIPAddressListChanged; int OsServiceStoped; int Halt; int OsServiceCheckThreadEvent; } ;
typedef int THREAD ;
typedef TYPE_1__ IPSEC_SERVER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(THREAD *VAR_2, void *VAR_3)
{
 UINT VAR_4 = VAR_0;
 IPSEC_SERVER *VAR_5 = (IPSEC_SERVER *)VAR_3;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_5->HostIPAddressListChanged = 1;
 VAR_5->OsServiceStoped = 0;

 while (VAR_5->Halt == 0)
 {
  if (FUNC_0(VAR_5))
  {
   VAR_4 = VAR_0;
  }

  if (FUNC_2(VAR_5->OsServiceCheckThreadEvent, VAR_4) == 0)
  {
   VAR_4 = FUNC_1(VAR_4 * 2, VAR_1);
  }
  else
  {
   VAR_4 = VAR_0;
  }
 }

 FUNC_0(VAR_5);
}
