
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int NumPacketSend; int NumPacketSendError; } ;
struct TYPE_4__ {int Event; int NdisMiniport; TYPE_1__ Status; } ;
typedef scalar_t__ PNDIS_BUFFER ;
typedef int NDIS_PACKET ;
typedef int NDIS_HANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (scalar_t__,int **,scalar_t__*) ;
 int FUNC_4 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 () ;
 int * FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int **,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_14(NDIS_HANDLE VAR_7,
      NDIS_PACKET **VAR_8,
      UINT VAR_9)
{
 UCHAR *VAR_10,*VAR_11;
 PNDIS_BUFFER VAR_12;
 UCHAR *VAR_13;
 UINT VAR_14;
 UINT VAR_15;
 UINT VAR_16;

 if (VAR_5 == ((void*)0))
 {
  return;
 }


 FUNC_5();

 if (VAR_9 == 0)
 {

  return;
 }

 if (FUNC_11(VAR_8, VAR_9) == VAR_0)
 {

  return;
 }


 FUNC_9();
 {
  if (FUNC_11(VAR_8, VAR_9) == VAR_0)
  {

   FUNC_13();
   return;
  }


  for (VAR_16 = 0;VAR_16 < VAR_9;VAR_16++)
  {

   FUNC_4(VAR_8[VAR_16], ((void*)0), ((void*)0), &VAR_12, &VAR_14);



   VAR_10 = FUNC_10(VAR_14);
   VAR_11 = VAR_10;
   while (VAR_12)
   {
    FUNC_3(VAR_12, &VAR_13, &VAR_15);
    if (VAR_15 == 0)
    {

     break;
    }
    FUNC_6(VAR_11, VAR_13, VAR_15);
    VAR_11 += VAR_15;
    FUNC_1(VAR_12, &VAR_12);
   }

   if (VAR_14 > VAR_4)
   {
    if (VAR_14 > VAR_3)
    {

     FUNC_0(VAR_8[VAR_16], VAR_1);

     if (VAR_6)
     {
      FUNC_2(VAR_5->NdisMiniport, VAR_8[VAR_16], VAR_1);
     }

     VAR_5->Status.NumPacketSendError++;
     FUNC_7(VAR_10);
    }
    else
    {

     FUNC_8(VAR_10, VAR_14);
     FUNC_0(VAR_8[VAR_16], VAR_2);

     if (VAR_6)
     {
      FUNC_2(VAR_5->NdisMiniport, VAR_8[VAR_16], VAR_2);
     }

     VAR_5->Status.NumPacketSend++;
    }
   }
   else
   {

    FUNC_0(VAR_8[VAR_16], VAR_2);

    if (VAR_6)
    {
     FUNC_2(VAR_5->NdisMiniport, VAR_8[VAR_16], VAR_2);
    }

    FUNC_7(VAR_10);
   }
  }
 }
 FUNC_13();


 FUNC_12(VAR_5->Event);
}
