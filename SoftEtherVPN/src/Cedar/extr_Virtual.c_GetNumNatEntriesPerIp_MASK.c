
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NatTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int DisconnectNow; scalar_t__ SrcIp; scalar_t__ Protocol; scalar_t__ TcpStatus; } ;
typedef TYPE_2__ NAT_ENTRY ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

UINT FUNC_2(VH *VAR_2, UINT VAR_3, UINT VAR_4, bool VAR_5)
{
 UINT VAR_6 = 0;
 UINT VAR_7;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 for (VAR_7 = 0;VAR_7 < FUNC_1(VAR_2->NatTable);VAR_7++)
 {
  NAT_ENTRY *VAR_8 = FUNC_0(VAR_2->NatTable, VAR_7);

  if (VAR_8->DisconnectNow == 0)
  {
   if (VAR_8->SrcIp == VAR_3)
   {
    if (VAR_8->Protocol == VAR_4)
    {
     bool VAR_9 = 0;

     if (VAR_4 == VAR_0)
     {
      if (VAR_5)
      {
       if (VAR_8->TcpStatus == VAR_1)
       {
        VAR_9 = 1;
       }
      }
      else
      {
       if (VAR_8->TcpStatus != VAR_1)
       {
        VAR_9 = 1;
       }
      }
     }
     else
     {
      VAR_9 = 1;
     }

     if (VAR_9)
     {
      VAR_6++;
     }
    }
   }
  }
 }

 return VAR_6;
}
