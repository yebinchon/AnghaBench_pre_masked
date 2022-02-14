
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int IpWaitTable; scalar_t__ Now; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ Expire; scalar_t__ DestIP; scalar_t__ SrcIP; scalar_t__ Size; void* Data; } ;
typedef TYPE_2__ IP_WAIT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;

void FUNC_2(VH *VAR_1, UINT VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5)
{
 IP_WAIT *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0)
 {
  return;
 }

 VAR_6 = FUNC_1(sizeof(IP_WAIT));
 VAR_6->Data = VAR_4;
 VAR_6->Size = VAR_5;
 VAR_6->SrcIP = VAR_3;
 VAR_6->DestIP = VAR_2;
 VAR_6->Expire = VAR_1->Now + (UINT64)VAR_0;

 FUNC_0(VAR_1->IpWaitTable, VAR_6);
}
