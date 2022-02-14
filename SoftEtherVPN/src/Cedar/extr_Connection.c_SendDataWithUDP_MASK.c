
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int dummy_buf ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_24__ {int Size; scalar_t__ SizeofData; int * Buf; } ;
struct TYPE_23__ {scalar_t__ Size; scalar_t__ Buf; } ;
struct TYPE_22__ {TYPE_2__* Udp; TYPE_1__* Session; TYPE_14__* SendBlocks; int * RecvBuf; } ;
struct TYPE_21__ {int IgnoreSendErr; } ;
struct TYPE_20__ {scalar_t__ NextKeepAliveTime; int port; int ip; int Seq; } ;
struct TYPE_19__ {int SessionKey32; int TotalSendSizeReal; int TotalSendSize; } ;
struct TYPE_18__ {scalar_t__ num_item; } ;
typedef TYPE_3__ SOCK ;
typedef TYPE_4__ CONNECTION ;
typedef TYPE_5__ BUF ;
typedef TYPE_6__ BLOCK ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 TYPE_6__* FUNC_7 (TYPE_14__*) ;
 int * FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (TYPE_5__*,int *,int) ;
 int FUNC_13 (TYPE_5__*,int) ;

void FUNC_14(SOCK *VAR_4, CONNECTION *VAR_5)
{
 UCHAR *VAR_6;
 BUF *VAR_7;
 UINT64 VAR_8 = 0;
 UCHAR VAR_9[16];
 UINT64 VAR_10 = FUNC_11();
 UINT VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 if (VAR_5->RecvBuf == ((void*)0))
 {
  VAR_5->RecvBuf = FUNC_8(VAR_0);
 }
 VAR_6 = VAR_5->RecvBuf;

 if (VAR_5->Udp->NextKeepAliveTime == 0 || VAR_5->Udp->NextKeepAliveTime <= VAR_10)
 {
  VAR_12 = 1;
 }


 while ((VAR_5->SendBlocks->num_item > 0) || VAR_12)
 {
  UINT *VAR_14;
  UINT64 *VAR_15;
  char *VAR_16;

  VAR_12 = 0;


  VAR_7 = FUNC_9();


  FUNC_12(VAR_7, VAR_9, sizeof(VAR_9));


  while (1)
  {
   BLOCK *VAR_17;

   if (VAR_7->Size > VAR_3)
   {
    break;
   }
   VAR_17 = FUNC_7(VAR_5->SendBlocks);
   if (VAR_17 == ((void*)0))
   {
    break;
   }

   if (VAR_17->Size != 0)
   {
    FUNC_13(VAR_7, VAR_17->Size);
    FUNC_12(VAR_7, VAR_17->Buf, VAR_17->Size);

    VAR_5->Session->TotalSendSize += (UINT64)VAR_17->SizeofData;
    VAR_5->Session->TotalSendSizeReal += (UINT64)VAR_17->Size;
   }

   FUNC_4(VAR_17);
   break;
  }


  VAR_16 = (char *)(((UCHAR *)VAR_7->Buf));
  VAR_14 = (UINT *)(((UCHAR *)VAR_7->Buf + 4));
  VAR_15 = (UINT64 *)(((UCHAR *)VAR_7->Buf + 8));
  FUNC_0(VAR_16, VAR_1, 4);
  *VAR_14 = FUNC_2(VAR_5->Session->SessionKey32);
  *VAR_15 = FUNC_3(VAR_5->Udp->Seq++);



  VAR_13 = 1;
    VAR_11 = FUNC_10(VAR_4, &VAR_5->Udp->ip, VAR_5->Udp->port, VAR_7->Buf, VAR_7->Size);
  if (VAR_11 == VAR_2)
  {

   FUNC_1(".");

  }
  if (VAR_11 != VAR_7->Size)
  {
   if (VAR_4->IgnoreSendErr == 0)
   {

    FUNC_1("******* SendTo Error !!!\n");
   }
  }


  FUNC_5(VAR_7);

 }

 if (VAR_13)
 {

  VAR_5->Udp->NextKeepAliveTime = VAR_10 + (UINT64)FUNC_6(VAR_5);
 }
}
