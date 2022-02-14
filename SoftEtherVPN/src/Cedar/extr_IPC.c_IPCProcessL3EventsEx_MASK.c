
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef int UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_20__ {int Size; int* Buf; } ;
struct TYPE_19__ {int* addr; } ;
struct TYPE_18__ {int IPv4ReceivedQueue; TYPE_2__ ClientIPAddress; TYPE_2__ BroadcastAddress; int MacAddress; } ;
typedef TYPE_1__ IPC ;
typedef TYPE_2__ IP ;
typedef TYPE_3__ BLOCK ;


 int* FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_13 (int*,int,int ) ;
 scalar_t__ FUNC_14 (int*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_2__*,int) ;

void FUNC_17(IPC *VAR_2, UINT64 VAR_3)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }
 if (VAR_3 == 0)
 {
  VAR_3 = FUNC_15();
 }


 FUNC_6(VAR_2, VAR_3);


 while (1)
 {
  BLOCK *VAR_4 = FUNC_9(VAR_2);
  if (VAR_4 == ((void*)0))
  {

   break;
  }

  if (VAR_4->Size >= 14)
  {
   UCHAR *VAR_5 = VAR_4->Buf + 0;
   UCHAR *VAR_6 = VAR_4->Buf + 6;
   USHORT VAR_7 = FUNC_14(VAR_4->Buf + 12);



   if (FUNC_1(VAR_5, VAR_2->MacAddress, 6) == 0 || VAR_5[0] & 0x01)
   {

    if (FUNC_1(VAR_6, VAR_2->MacAddress, 6) != 0 && FUNC_11(VAR_6))
    {
     if (VAR_7 == VAR_0)
     {

      FUNC_7(VAR_2, VAR_4);
     }
     else if (VAR_7 == VAR_1)
     {

      if (VAR_4->Size >= (14 + 20))
      {
       UCHAR *VAR_8 = FUNC_0(VAR_4->Buf + 14, VAR_4->Size - 14);
       UINT VAR_9 = VAR_4->Size - 14;
       IP VAR_10, VAR_11;
       bool VAR_12 = 0;


       FUNC_16(&VAR_10, *((UINT *)(((UCHAR *)VAR_8) + 12)));
       FUNC_16(&VAR_11, *((UINT *)(((UCHAR *)VAR_8) + 16)));



       if (FUNC_2(&VAR_11, &VAR_2->ClientIPAddress) == 0)
       {
        VAR_12 = 1;
       }
       else if (VAR_11.addr[0] == 255 && VAR_11.addr[1] == 255 &&
        VAR_11.addr[2] == 255 && VAR_11.addr[3] == 255)
       {
        VAR_12 = 1;
       }
       else if (VAR_11.addr[0] >= 224 && VAR_11.addr[0] <= 239)
       {
        VAR_12 = 1;
       }
       else
       {
        if (FUNC_2(&VAR_2->BroadcastAddress, &VAR_11) == 0)
        {
         VAR_12 = 1;
        }

        if (FUNC_12(&VAR_2->ClientIPAddress))
        {

         VAR_12 = 1;
        }
       }

       if (VAR_12)
       {
        FUNC_5(VAR_2, &VAR_10, VAR_6);


        FUNC_10(VAR_2->IPv4ReceivedQueue, FUNC_13(VAR_8, VAR_9, 0));
       }
       else
       {

        FUNC_3(VAR_8);
       }
      }
     }
    }
   }
  }

  FUNC_4(VAR_4);
 }

 FUNC_8(VAR_2);
}
