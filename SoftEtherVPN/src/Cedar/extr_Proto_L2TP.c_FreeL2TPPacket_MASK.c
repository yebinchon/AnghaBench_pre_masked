
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {struct TYPE_4__* Data; int * AvpList; } ;
typedef TYPE_1__ L2TP_PACKET ;
typedef int L2TP_AVP ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(L2TP_PACKET *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->AvpList != ((void*)0))
 {
  for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_0->AvpList);VAR_1++)
  {
   L2TP_AVP *VAR_2 = FUNC_2(VAR_0->AvpList, VAR_1);

   FUNC_1(VAR_2);
  }

  FUNC_4(VAR_0->AvpList);
 }

 if (VAR_0->Data != ((void*)0))
 {
  FUNC_0(VAR_0->Data);
 }

 FUNC_0(VAR_0);
}
