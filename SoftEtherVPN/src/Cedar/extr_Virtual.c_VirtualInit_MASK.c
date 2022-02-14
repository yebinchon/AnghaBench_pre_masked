
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int flag1; int Active; scalar_t__ CurrentIpQuota; scalar_t__ NextArpTablePolling; scalar_t__ DhcpId; TYPE_1__* Counter; int SendQueue; int Cancel; int * Logger; } ;
typedef TYPE_2__ VH ;
typedef scalar_t__ UINT64 ;
struct TYPE_12__ {scalar_t__ c; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;

bool FUNC_11(VH *VAR_1)
{

 VAR_1->Logger = ((void*)0);

 FUNC_6(VAR_1);
 {

  VAR_1->Cancel = FUNC_7();
  VAR_1->SendQueue = FUNC_8();
 }
 FUNC_10(VAR_1);


 VAR_1->Counter->c = 0;
 VAR_1->DhcpId = 0;


 FUNC_0(VAR_1);


 FUNC_1(VAR_1);


 FUNC_4(VAR_1);


 FUNC_3(VAR_1);


 FUNC_5(VAR_1);


 FUNC_2(VAR_1);


 VAR_1->flag1 = 0;
 VAR_1->NextArpTablePolling = FUNC_9() + (UINT64)VAR_0;
 VAR_1->CurrentIpQuota = 0;
 VAR_1->Active = 1;

 return 1;
}
