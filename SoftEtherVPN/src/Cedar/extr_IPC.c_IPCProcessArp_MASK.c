
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
typedef int UCHAR ;
struct TYPE_10__ {scalar_t__ HardwareType; scalar_t__ ProtocolType; int HardwareSize; int ProtocolSize; void* TargetIP; int * TargetAddress; void* SrcIP; int * SrcAddress; scalar_t__ Operation; } ;
struct TYPE_9__ {int Size; int * Buf; } ;
struct TYPE_8__ {int ClientIPAddress; int * MacAddress; } ;
typedef TYPE_1__ IPC ;
typedef int IP ;
typedef TYPE_2__ BLOCK ;
typedef TYPE_3__ ARPV4_HEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(IPC *VAR_5, BLOCK *VAR_6)
{
 UCHAR *VAR_7;
 UCHAR *VAR_8;
 ARPV4_HEADER *VAR_9;
 UCHAR *VAR_10;
 IP VAR_11;
 UCHAR *VAR_12;
 IP VAR_13;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_6->Size < (14 + sizeof(ARPV4_HEADER)))
 {
  return;
 }

 VAR_7 = VAR_6->Buf + 0;
 VAR_8 = VAR_6->Buf + 6;

 VAR_9 = (ARPV4_HEADER *)(VAR_6->Buf + 14);

 if (VAR_9->HardwareType != FUNC_2(VAR_0))
 {
  return;
 }
 if (VAR_9->ProtocolType != FUNC_2(VAR_4))
 {
  return;
 }
 if (VAR_9->HardwareSize != 6 || VAR_9->ProtocolSize != 4)
 {
  return;
 }

 VAR_10 = VAR_9->SrcAddress;
 FUNC_7(&VAR_11, VAR_9->SrcIP);

 VAR_12 = VAR_9->TargetAddress;
 FUNC_7(&VAR_13, VAR_9->TargetIP);

 if (FUNC_0(&VAR_11, &VAR_5->ClientIPAddress) == 0)
 {

  return;
 }

 FUNC_3(VAR_5, &VAR_11, VAR_10);
 FUNC_3(VAR_5, &VAR_13, VAR_12);

 if (FUNC_2(VAR_9->Operation) == VAR_1)
 {

  if (FUNC_0(&VAR_13, &VAR_5->ClientIPAddress) == 0)
  {

   if (FUNC_6(VAR_10))
   {
    UCHAR VAR_14[14 + sizeof(ARPV4_HEADER)];
    ARPV4_HEADER *VAR_15 = (ARPV4_HEADER *)(VAR_14 + 14);

    FUNC_1(VAR_14 + 0, VAR_10, 6);
    FUNC_1(VAR_14 + 6, VAR_5->MacAddress, 6);
    FUNC_8(VAR_14 + 12, VAR_3);

    VAR_15->HardwareType = FUNC_2(VAR_0);
    VAR_15->ProtocolType = FUNC_2(VAR_4);
    VAR_15->HardwareSize = 6;
    VAR_15->ProtocolSize = 4;
    VAR_15->Operation = FUNC_2(VAR_2);

    FUNC_1(VAR_15->SrcAddress, VAR_5->MacAddress, 6);
    VAR_15->SrcIP = FUNC_5(&VAR_5->ClientIPAddress);

    FUNC_1(VAR_15->TargetAddress, VAR_10, 6);
    VAR_15->TargetIP = FUNC_5(&VAR_11);

    FUNC_4(VAR_5, VAR_14, sizeof(VAR_14));
   }
  }
 }
}
