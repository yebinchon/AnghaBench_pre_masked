
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ Type; scalar_t__ VendorID; } ;
struct TYPE_6__ {int AvpList; } ;
typedef TYPE_1__ L2TP_PACKET ;
typedef TYPE_2__ L2TP_AVP ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

L2TP_AVP *FUNC_2(L2TP_PACKET *VAR_7, UINT VAR_8, UINT VAR_9)
{
 UINT VAR_10;

 if (VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_10 = 0;VAR_10 < FUNC_1(VAR_7->AvpList);VAR_10++)
 {
  L2TP_AVP *VAR_11 = FUNC_0(VAR_7->AvpList, VAR_10);

  if (VAR_11->Type == VAR_8 && VAR_11->VendorID == VAR_9)
  {
   return VAR_11;
  }
 }

 if (VAR_9 == 0)
 {
  if (VAR_8 == VAR_5)
  {
   return FUNC_2(VAR_7, VAR_2, VAR_6);
  }
  else if (VAR_8 == VAR_3)
  {
   return FUNC_2(VAR_7, VAR_0, VAR_6);
  }
  else if (VAR_8 == VAR_4)
  {
   return FUNC_2(VAR_7, VAR_1, VAR_6);
  }
 }

 return ((void*)0);
}
