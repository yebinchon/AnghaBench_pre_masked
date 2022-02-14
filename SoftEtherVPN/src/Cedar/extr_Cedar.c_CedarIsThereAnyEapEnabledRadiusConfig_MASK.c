
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int HubList; } ;
struct TYPE_7__ {scalar_t__ RadiusConvertAllMsChapv2AuthRequestToEap; } ;
typedef TYPE_1__ HUB ;
typedef TYPE_2__ CEDAR ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

bool FUNC_4(CEDAR *VAR_0)
{
 bool VAR_1 = 0;
 UINT VAR_2;
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_0);
 {
  for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->HubList);VAR_2++)
  {
   HUB *VAR_3 = FUNC_0(VAR_0->HubList, VAR_2);

   if (VAR_3->RadiusConvertAllMsChapv2AuthRequestToEap)
   {
    VAR_1 = 1;
    break;
   }
  }
 }
 FUNC_3(VAR_0);

 return VAR_1;
}
