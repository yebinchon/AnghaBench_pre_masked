
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ HostIP; TYPE_1__* HubOption; int HostMask; } ;
typedef TYPE_2__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {int DstPort; int SrcPort; int PacketLength; } ;
typedef TYPE_3__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_12__ {scalar_t__ DisableUserModeSecureNAT; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__,int,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,void*,scalar_t__) ;

void FUNC_11(VH *VAR_6, UINT VAR_7, UINT VAR_8, void *VAR_9, UINT VAR_10, bool VAR_11, bool VAR_12, UINT VAR_13)
{
 UDP_HEADER *VAR_14;
 UINT VAR_15;
 void *VAR_16;
 UINT VAR_17;
 UINT VAR_18, VAR_19;

 if (VAR_6 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }


 VAR_14 = (UDP_HEADER *)VAR_9;
 if (VAR_10 < VAR_5)
 {
  return;
 }
 VAR_15 = FUNC_0(VAR_14->PacketLength);
 if (VAR_15 != VAR_10)
 {
  return;
 }
 VAR_16 = ((UCHAR *)VAR_9) + VAR_5;
 VAR_17 = VAR_10 - VAR_5;
 VAR_18 = FUNC_0(VAR_14->SrcPort);
 VAR_19 = FUNC_0(VAR_14->DstPort);

 if (VAR_19 == 0)
 {

  return;
 }


 if (VAR_8 == VAR_6->HostIP)
 {

  FUNC_8(VAR_6, VAR_7, VAR_18, VAR_8, VAR_19, VAR_16, VAR_17);
 }
 else if ((VAR_11 || VAR_8 == FUNC_1(0xE00000FC)) && VAR_19 == VAR_0)
 {
  if (VAR_12 == 0)
  {

   FUNC_10(VAR_6, VAR_7, VAR_18, VAR_8, VAR_19, VAR_16, VAR_17);
  }
 }
 else if (VAR_11 && (VAR_19 == VAR_4 || VAR_19 == VAR_3))
 {
  if (VAR_12 == 0)
  {

   FUNC_7(VAR_6, VAR_7, VAR_18, 0xFFFFFFFF, VAR_19, VAR_16, VAR_17, 0);
  }
 }
 else if (VAR_11 && (VAR_19 == VAR_1 || VAR_19 == VAR_2))
 {
  if (VAR_12 == 0)
  {

   FUNC_9(VAR_6, VAR_7, VAR_18, VAR_8, VAR_19, VAR_16, VAR_17, 0, 0);
  }
 }
 else if (VAR_11 || VAR_8 == 0xffffffff || VAR_8 == FUNC_2(VAR_6->HostIP, VAR_6->HostMask))
 {
  if (VAR_12 == 0)
  {

   FUNC_6(VAR_6, VAR_7, VAR_18, VAR_8, VAR_19, VAR_16, VAR_17);
  }
 }
 else if (FUNC_3(VAR_8, VAR_6->HostIP, VAR_6->HostMask) == 0)
 {

  if (FUNC_4(VAR_6) == 0)
  {
   if (VAR_6->HubOption != ((void*)0) && VAR_6->HubOption->DisableUserModeSecureNAT)
   {

    return;
   }


   FUNC_7(VAR_6, VAR_7, VAR_18, VAR_8, VAR_19, VAR_16, VAR_17, 0);
  }
  else
  {

   FUNC_5(VAR_6, VAR_7, VAR_18, VAR_8, VAR_19, VAR_16, VAR_17, VAR_13);
  }
 }
 else
 {

 }
}
