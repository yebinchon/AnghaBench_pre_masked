
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Check_LastEnabledStatus; int HostIPAddressListChanged; int OsServiceStoped; int * Win7; } ;
struct TYPE_6__ {scalar_t__ L2TP_IPsec; scalar_t__ EtherIP_IPsec; } ;
typedef TYPE_1__ IPSEC_SERVICES ;
typedef TYPE_2__ IPSEC_SERVER ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int) ;

bool FUNC_7(IPSEC_SERVER *VAR_0)
{
 bool VAR_1;
 IPSEC_SERVICES VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0, &VAR_2);

 VAR_1 = (VAR_2.EtherIP_IPsec || VAR_2.L2TP_IPsec);

 if (VAR_1 != VAR_0->Check_LastEnabledStatus)
 {
  VAR_0->Check_LastEnabledStatus = VAR_1;

  if (VAR_1)
  {
  }
  else
  {
   FUNC_6(1);

  }
 }

 if (VAR_1)
 {







  FUNC_6(0);

 }
 return VAR_3;
}
