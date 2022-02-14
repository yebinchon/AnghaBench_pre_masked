
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int Event; } ;
struct TYPE_11__ {scalar_t__ Type; int Connected; int AsyncMode; TYPE_4__* RecvTube; int * InProcRecvFifo; TYPE_4__* SendTube; scalar_t__ Disconnecting; } ;
struct TYPE_10__ {scalar_t__ DataSize; scalar_t__ Data; } ;
typedef TYPE_1__ TUBEDATA ;
typedef TYPE_2__ SOCK ;
typedef int FIFO ;


 int FUNC_0 (void*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (int *,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 () ;
 TYPE_1__* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int *,int *,scalar_t__) ;

UINT FUNC_10(SOCK *VAR_2, void *VAR_3, UINT VAR_4)
{
 FIFO *VAR_5;
 UINT VAR_6;
 UINT VAR_7;
 UINT64 VAR_8;
 TUBEDATA *VAR_9 = ((void*)0);
 if (VAR_2 == ((void*)0) || VAR_2->Type != VAR_0 || VAR_2->Disconnecting || VAR_2->Connected == 0)
 {
  return 0;
 }

 if (FUNC_4(VAR_2->SendTube) == 0)
 {
  return 0;
 }

 VAR_5 = VAR_2->InProcRecvFifo;
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_6 = FUNC_5(VAR_5, VAR_3, VAR_4);
 if (VAR_6 != 0)
 {
  return VAR_6;
 }

 VAR_7 = FUNC_3(VAR_2);

 VAR_8 = FUNC_6() + (UINT)VAR_7;


 VAR_9 = ((void*)0);

 while (1)
 {
  UINT64 VAR_10 = 0;
  UINT VAR_11;

  if (VAR_2->AsyncMode == 0)
  {
   VAR_10 = FUNC_6();

   if (VAR_10 >= VAR_8)
   {
    break;
   }
  }

  VAR_9 = FUNC_7(VAR_2->RecvTube);

  if (VAR_9 != ((void*)0))
  {
   break;
  }

  if (FUNC_4(VAR_2->RecvTube) == 0)
  {
   break;
  }

  if (VAR_2->AsyncMode)
  {
   break;
  }

  VAR_11 = (UINT)(VAR_8 - VAR_10);

  FUNC_8(VAR_2->RecvTube->Event, VAR_11);
 }

 if (VAR_9 == ((void*)0))
 {
  if (FUNC_4(VAR_2->RecvTube) == 0)
  {
   return 0;
  }

  if (VAR_2->AsyncMode == 0)
  {

   FUNC_1(VAR_2);

   return 0;
  }
  else
  {

   return VAR_1;
  }
 }
 else
 {

  if (VAR_9->DataSize > VAR_4)
  {
   FUNC_9(VAR_5, ((UCHAR *)VAR_9->Data) + VAR_4, VAR_9->DataSize - VAR_4);
   VAR_6 = VAR_4;
  }
  else
  {
   VAR_6 = VAR_9->DataSize;
  }

  FUNC_0(VAR_3, VAR_9->Data, VAR_6);

  FUNC_2(VAR_9);

  return VAR_6;
 }
}
