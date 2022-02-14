
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int NatTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int DisconnectNow; scalar_t__ SrcIp; scalar_t__ Protocol; scalar_t__ TcpStatus; scalar_t__ LastCommTime; } ;
typedef TYPE_2__ NAT_ENTRY ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

NAT_ENTRY *FUNC_2(VH *VAR_2, UINT VAR_3, UINT VAR_4)
{
 UINT VAR_5;
 NAT_ENTRY *VAR_6 = ((void*)0);
 UINT64 VAR_7 = 0xFFFFFFFFFFFFFFFFULL;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_5 = 0;VAR_5 < FUNC_1(VAR_2->NatTable);VAR_5++)
 {
  NAT_ENTRY *VAR_8 = FUNC_0(VAR_2->NatTable, VAR_5);

  if (VAR_8->DisconnectNow == 0)
  {
   if (VAR_8->SrcIp == VAR_3)
   {
    if (VAR_8->Protocol == VAR_4)
    {
     if (VAR_4 != VAR_0 || VAR_8->TcpStatus != VAR_1)
     {
      if (VAR_8->LastCommTime <= VAR_7)
      {
       VAR_7 = VAR_8->LastCommTime;
       VAR_6 = VAR_8;
      }
     }
    }
   }
  }
 }

 return VAR_6;
}
