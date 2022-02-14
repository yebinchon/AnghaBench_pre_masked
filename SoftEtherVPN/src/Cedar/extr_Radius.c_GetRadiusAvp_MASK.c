
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_7__ {scalar_t__ Type; } ;
struct TYPE_6__ {int AvpList; } ;
typedef TYPE_1__ RADIUS_PACKET ;
typedef TYPE_2__ RADIUS_AVP ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

RADIUS_AVP *FUNC_2(RADIUS_PACKET *VAR_0, UCHAR VAR_1)
{
 UINT VAR_2;
 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->AvpList);VAR_2++)
 {
  RADIUS_AVP *VAR_3 = FUNC_0(VAR_0->AvpList, VAR_2);

  if (VAR_3->Type == VAR_1)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
