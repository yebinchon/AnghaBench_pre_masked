
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int magic ;
struct TYPE_10__ {int HostIP; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_12__ {int Size; scalar_t__* Buf; } ;
struct TYPE_11__ {int OpCode; void* ClientMacAddress; int ServerIP; scalar_t__ YourIP; scalar_t__ Flags; scalar_t__ Seconds; void* TransactionId; scalar_t__ Hops; scalar_t__ HardwareAddressSize; scalar_t__ HardwareType; } ;
typedef TYPE_2__ DHCPV4_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (void*,scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int ,int ,TYPE_2__*,scalar_t__) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;

void FUNC_5(VH *VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6,
      UINT VAR_7, UCHAR *VAR_8, BUF *VAR_9, UINT VAR_10, UINT VAR_11)
{
 UINT VAR_12 = 128 + 64;
 UINT VAR_13;
 UINT VAR_14 = FUNC_1(VAR_0);
 DHCPV4_HEADER *VAR_15;
 void *VAR_16;
 void *VAR_17;

 if (VAR_3 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }


 VAR_13 = VAR_12 + sizeof(DHCPV4_HEADER) + sizeof(VAR_14) + VAR_9->Size;

 if (VAR_13 < VAR_1)
 {

  VAR_13 = VAR_1;
 }


 VAR_15 = FUNC_4(VAR_13);

 VAR_15->OpCode = 2;
 VAR_15->HardwareType = VAR_10;
 VAR_15->HardwareAddressSize = VAR_11;
 VAR_15->Hops = 0;
 VAR_15->TransactionId = FUNC_1(VAR_4);
 VAR_15->Seconds = 0;
 VAR_15->Flags = 0;
 VAR_15->YourIP = VAR_7;
 VAR_15->ServerIP = VAR_3->HostIP;
 FUNC_0(VAR_15->ClientMacAddress, VAR_8, 6);


 VAR_16 = (((UCHAR *)VAR_15) + sizeof(DHCPV4_HEADER) + VAR_12);
 VAR_17 = ((UCHAR *)VAR_16) + sizeof(VAR_14);


 FUNC_0(VAR_16, &VAR_14, sizeof(VAR_14));


 FUNC_0(VAR_17, VAR_9->Buf, VAR_9->Size);


 FUNC_3(VAR_3, VAR_5, VAR_6, VAR_3->HostIP, VAR_2, VAR_15, VAR_13);

 FUNC_2(VAR_15);
}
