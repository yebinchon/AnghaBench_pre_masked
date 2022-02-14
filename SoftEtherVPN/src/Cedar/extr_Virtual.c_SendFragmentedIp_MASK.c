
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int HostMask; int HostIP; } ;
typedef TYPE_1__ VH ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_17__ {scalar_t__* MacAddress; } ;
struct TYPE_16__ {int DstIP; scalar_t__ Checksum; scalar_t__ SrcIP; scalar_t__ Protocol; scalar_t__ TimeToLive; scalar_t__* FlagsAndFragmentOffset; void* Identification; void* TotalLength; int TypeOfService; scalar_t__ VersionAndHeaderLength; } ;
typedef TYPE_2__ IPV4_HEADER ;
typedef TYPE_3__ ARP_ENTRY ;


 int FUNC_0 (scalar_t__*,void*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (int,int ,int) ;
 scalar_t__* FUNC_10 (scalar_t__) ;
 TYPE_3__* FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__* VAR_3 ;

void FUNC_14(VH *VAR_4, UINT VAR_5, UINT VAR_6, USHORT VAR_7, USHORT VAR_8, USHORT VAR_9, UCHAR VAR_10, void *VAR_11, UINT VAR_12, UCHAR *VAR_13, UCHAR VAR_14)
{
 UCHAR *VAR_15;
 IPV4_HEADER *VAR_16;
 ARP_ENTRY *VAR_17;

 if (VAR_4 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == 0)
 {
  return;
 }


 VAR_15 = FUNC_10(VAR_12 + VAR_2);
 VAR_16 = (IPV4_HEADER *)&VAR_15[0];


 VAR_16->VersionAndHeaderLength = 0;
 FUNC_6(VAR_16, 4);
 FUNC_4(VAR_16, (VAR_2 / 4));
 VAR_16->TypeOfService = VAR_0;
 VAR_16->TotalLength = FUNC_1((USHORT)(VAR_12 + VAR_2));
 VAR_16->Identification = FUNC_1(VAR_7);
 VAR_16->FlagsAndFragmentOffset[0] = VAR_16->FlagsAndFragmentOffset[1] = 0;
 FUNC_5(VAR_16, (VAR_9 / 8));
 if ((VAR_9 + VAR_12) >= VAR_8)
 {
  FUNC_3(VAR_16, 0x00);
 }
 else
 {
  FUNC_3(VAR_16, 0x01);
 }
 VAR_16->TimeToLive = (VAR_14 == 0 ? VAR_1 : VAR_14);
 VAR_16->Protocol = VAR_10;
 VAR_16->Checksum = 0;
 VAR_16->SrcIP = VAR_6;
 VAR_16->DstIP = VAR_5;


 VAR_16->Checksum = FUNC_8(VAR_16, VAR_2);


 FUNC_0(VAR_15 + VAR_2, VAR_11, VAR_12);

 if (VAR_13 == ((void*)0))
 {
  if (VAR_16->DstIP == 0xffffffff ||
   (FUNC_9(VAR_16->DstIP, VAR_4->HostIP, VAR_4->HostMask) && (VAR_16->DstIP & (~VAR_4->HostMask)) == (~VAR_4->HostMask)))
  {

   VAR_13 = VAR_3;
  }
  else
  {

   VAR_17 = FUNC_11(VAR_4, VAR_5);
   if (VAR_17 != ((void*)0))
   {
    VAR_13 = VAR_17->MacAddress;
   }
  }
 }
 if (VAR_13 != ((void*)0))
 {

  FUNC_13(VAR_4, VAR_13, VAR_15, VAR_12 + VAR_2);


  FUNC_2(VAR_15);
 }
 else
 {

  FUNC_7(VAR_4, VAR_5, VAR_6, VAR_15, VAR_12 + VAR_2);


  FUNC_12(VAR_4, VAR_5);
 }
}
