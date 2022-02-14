
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int TableList; } ;
struct TYPE_6__ {scalar_t__ NetworkAddress; scalar_t__ SubnetMask; scalar_t__ Metric; } ;
typedef TYPE_1__ L3TABLE ;
typedef TYPE_2__ L3SW ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

L3TABLE *FUNC_2(L3SW *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 UINT VAR_4 = 0;
 UINT VAR_5 = VAR_0;
 L3TABLE *VAR_6 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return ((void*)0);
 }



 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_1->TableList);VAR_3++)
 {
  L3TABLE *VAR_7 = FUNC_0(VAR_1->TableList, VAR_3);

  if ((VAR_7->NetworkAddress & VAR_7->SubnetMask) == (VAR_2 & VAR_7->SubnetMask))
  {
   if (VAR_7->SubnetMask >= VAR_4)
   {
    VAR_4 = VAR_7->SubnetMask;
    if (VAR_5 >= VAR_7->Metric)
    {
     VAR_5 = VAR_7->Metric;
     VAR_6 = VAR_7;
    }
   }
  }
 }

 return VAR_6;
}
