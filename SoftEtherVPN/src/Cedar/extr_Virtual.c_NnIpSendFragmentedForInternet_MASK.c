
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_14__ {scalar_t__ num_item; } ;
struct TYPE_13__ {int SrcIP; int DstIP; scalar_t__ Checksum; scalar_t__ Protocol; scalar_t__ TimeToLive; scalar_t__* FlagsAndFragmentOffset; void* Identification; void* TotalLength; int TypeOfService; scalar_t__ VersionAndHeaderLength; } ;
struct TYPE_12__ {int SendStateChanged; TYPE_3__* SendQueue; } ;
typedef TYPE_1__ NATIVE_NAT ;
typedef TYPE_2__ IPV4_HEADER ;
typedef int BLOCK ;


 int FUNC_0 (scalar_t__*,void*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__* FUNC_10 (int) ;
 scalar_t__ VAR_3 ;
 int * FUNC_11 (scalar_t__*,int,int ) ;
 int FUNC_12 (TYPE_3__*) ;

void FUNC_13(NATIVE_NAT *VAR_4, UCHAR VAR_5, UINT VAR_6, UINT VAR_7, USHORT VAR_8, USHORT VAR_9,
           USHORT VAR_10, void *VAR_11, UINT VAR_12, UCHAR VAR_13)
{
 UCHAR *VAR_14;
 IPV4_HEADER *VAR_15;
 BLOCK *VAR_16;

 if (VAR_4 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return;
 }


 VAR_14 = FUNC_10(VAR_12 + VAR_2);
 VAR_15 = (IPV4_HEADER *)&VAR_14[0];


 VAR_15->VersionAndHeaderLength = 0;
 FUNC_6(VAR_15, 4);
 FUNC_4(VAR_15, (VAR_2 / 4));
 VAR_15->TypeOfService = VAR_0;
 VAR_15->TotalLength = FUNC_1((USHORT)(VAR_12 + VAR_2));
 VAR_15->Identification = FUNC_1(VAR_8);
 VAR_15->FlagsAndFragmentOffset[0] = VAR_15->FlagsAndFragmentOffset[1] = 0;
 FUNC_5(VAR_15, (VAR_10 / 8));
 if ((VAR_10 + VAR_12) >= VAR_9)
 {
  FUNC_3(VAR_15, 0x00);
 }
 else
 {
  FUNC_3(VAR_15, 0x01);
 }
 VAR_15->TimeToLive = (VAR_13 == 0 ? VAR_1 : VAR_13);
 VAR_15->Protocol = VAR_5;
 VAR_15->Checksum = 0;
 VAR_15->SrcIP = VAR_6;
 VAR_15->DstIP = VAR_7;


 VAR_15->Checksum = FUNC_8(VAR_15, VAR_2);


 FUNC_0(VAR_14 + VAR_2, VAR_11, VAR_12);


 VAR_16 = FUNC_11(VAR_14, VAR_12 + VAR_2, 0);

 FUNC_9(VAR_4->SendQueue);
 {
  if (VAR_4->SendQueue->num_item <= VAR_3)
  {
   FUNC_7(VAR_4->SendQueue, VAR_16);

   VAR_4->SendStateChanged = 1;
  }
  else
  {
   FUNC_2(VAR_16);
  }
 }
 FUNC_12(VAR_4->SendQueue);
}
