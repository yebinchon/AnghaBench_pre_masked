
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * IpWaitTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_11__ {scalar_t__ DestIP; struct TYPE_11__* Data; int Size; } ;
typedef int LIST ;
typedef TYPE_2__ IP_WAIT ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,TYPE_2__*,int ) ;

void FUNC_8(VH *VAR_0, UCHAR *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 LIST *VAR_4 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_0->IpWaitTable);VAR_3++)
 {
  IP_WAIT *VAR_5 = FUNC_3(VAR_0->IpWaitTable, VAR_3);

  if (VAR_5->DestIP == VAR_2)
  {
   if (VAR_4 == ((void*)0))
   {
    VAR_4 = FUNC_5(((void*)0));
   }
   FUNC_0(VAR_4, VAR_5);
  }
 }


 if (VAR_4 != ((void*)0))
 {
  for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_4);VAR_3++)
  {
   IP_WAIT *VAR_6 = FUNC_3(VAR_4, VAR_3);


   FUNC_7(VAR_0, VAR_1, VAR_6->Data, VAR_6->Size);


   FUNC_1(VAR_0->IpWaitTable, VAR_6);


   FUNC_2(VAR_6->Data);
   FUNC_2(VAR_6);
  }

  FUNC_6(VAR_4);
 }
}
