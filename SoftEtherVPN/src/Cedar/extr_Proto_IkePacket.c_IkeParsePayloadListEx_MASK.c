
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int header ;
typedef int USHORT ;
typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {scalar_t__ NextPayload; int PayloadSize; } ;
typedef int LIST ;
typedef int IKE_PACKET_PAYLOAD ;
typedef TYPE_1__ IKE_COMMON_HEADER ;
typedef int BUF ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int *) ;
 int * FUNC_7 (void*,int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int) ;
 int * FUNC_10 (int *,int) ;

LIST *FUNC_11(void *VAR_1, UINT VAR_2, UCHAR VAR_3, UINT *VAR_4)
{
 LIST *VAR_5;
 BUF *VAR_6;
 UCHAR VAR_7 = VAR_3;
 UINT VAR_8 = 0;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_8(((void*)0));
 VAR_6 = FUNC_7(VAR_1, VAR_2);

 while (VAR_7 != VAR_0)
 {

  IKE_COMMON_HEADER VAR_9;
  USHORT VAR_10;
  BUF *VAR_11;
  IKE_PACKET_PAYLOAD *VAR_12;

  if (FUNC_9(VAR_6, &VAR_9, sizeof(VAR_9)) != sizeof(VAR_9))
  {
   FUNC_1("ISAKMP: Broken Packet (Invalid Payload Size)\n");

LABEL_ERROR:

   FUNC_5(VAR_5);
   VAR_5 = ((void*)0);

   break;
  }

  VAR_8 += sizeof(VAR_9);


  VAR_10 = FUNC_2(VAR_9.PayloadSize);

  if (VAR_10 < sizeof(VAR_9))
  {
   FUNC_1("ISAKMP: Broken Packet (Invalid Payload Size)\n");
   goto LABEL_ERROR;
  }

  VAR_10 -= sizeof(VAR_9);


  VAR_11 = FUNC_10(VAR_6, VAR_10);
  if (VAR_11 == ((void*)0))
  {

   FUNC_1("ISAKMP: Broken Packet (Invalid Payload Data)\n");
   goto LABEL_ERROR;
  }

  VAR_8 += VAR_10;


  if (FUNC_4(VAR_7))
  {

   VAR_12 = FUNC_6(VAR_7, VAR_11);

   if (VAR_12 == ((void*)0))
   {
    FUNC_3(VAR_11);
    FUNC_1("ISAKMP: Broken Packet (Payload Data Parse Failed)\n");
    goto LABEL_ERROR;
   }

   FUNC_0(VAR_5, VAR_12);
  }
  else
  {

   FUNC_1("ISAKMP: Ignored Payload Type: %u\n", VAR_7);
   VAR_12 = FUNC_6(VAR_7, VAR_11);

   if (VAR_12 == ((void*)0))
   {
    FUNC_3(VAR_11);
    FUNC_1("ISAKMP: Broken Packet (Payload Data Parse Failed)\n");
    goto LABEL_ERROR;
   }

   FUNC_0(VAR_5, VAR_12);
  }

  VAR_7 = VAR_9.NextPayload;

  FUNC_3(VAR_11);
 }

 FUNC_3(VAR_6);

 if (VAR_4 != ((void*)0))
 {
  *VAR_4 = VAR_8;
 }

 return VAR_5;
}
