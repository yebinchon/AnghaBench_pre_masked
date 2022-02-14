
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {struct TYPE_6__* Parse_EapMessage; int * AvpList; } ;
typedef TYPE_1__ RADIUS_PACKET ;
typedef TYPE_1__ RADIUS_AVP ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(RADIUS_PACKET *VAR_0)
{
 UINT VAR_1;
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->AvpList != ((void*)0))
 {
  for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->AvpList);VAR_1++)
  {
   RADIUS_AVP *VAR_2 = FUNC_1(VAR_0->AvpList, VAR_1);

   FUNC_0(VAR_2);
  }

  FUNC_3(VAR_0->AvpList);
 }

 FUNC_0(VAR_0->Parse_EapMessage);

 FUNC_0(VAR_0);
}
