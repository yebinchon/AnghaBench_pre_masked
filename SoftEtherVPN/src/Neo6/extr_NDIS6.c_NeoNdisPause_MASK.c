
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int Paused; scalar_t__ NumCurrentDispatch; } ;
typedef int PNDIS_MINIPORT_PAUSE_PARAMETERS ;
typedef int NDIS_STATUS ;
typedef int NDIS_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_1 ;

NDIS_STATUS FUNC_3(NDIS_HANDLE VAR_2, PNDIS_MINIPORT_PAUSE_PARAMETERS VAR_3)
{
 UINT VAR_4 = 0;

 VAR_1->Paused = 1;

 FUNC_1();
 FUNC_2();


 while (VAR_1->NumCurrentDispatch != 0)
 {
  FUNC_0(10000);
  VAR_4++;
  if (VAR_4 >= 1500)
  {
   break;
  }
 }

 return VAR_0;
}
