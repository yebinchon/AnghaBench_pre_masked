
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int HostMask; int HostIP; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_11__ {int* addr; } ;
struct TYPE_10__ {int DstPort; int SrcPort; } ;
typedef TYPE_2__ TCP_HEADER ;
typedef TYPE_3__ IP ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,TYPE_2__*,void*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;

void FUNC_5(VH *VAR_1, UINT VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5, UINT VAR_6)
{
 TCP_HEADER *VAR_7;
 UINT VAR_8, VAR_9;
 UINT VAR_10, VAR_11;
 void *VAR_12;
 IP VAR_13, VAR_14;

 if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }


 if (VAR_5 < VAR_0)
 {

  return;
 }
 VAR_7 = (TCP_HEADER *)VAR_4;
 VAR_8 = FUNC_0(VAR_7->SrcPort);
 VAR_9 = FUNC_0(VAR_7->DstPort);
 if (VAR_8 == 0 || VAR_9 == 0)
 {

  return;
 }
 if (VAR_2 == VAR_3 || VAR_2 == 0 || VAR_2 == 0xffffffff || VAR_3 == 0 || VAR_3 == 0xffffffff)
 {

  return;
 }
 FUNC_4(&VAR_13, VAR_2);
 FUNC_4(&VAR_14, VAR_3);
 if (VAR_13[0] == 127 || VAR_14[0] == 127)
 {

  return;
 }
 if (FUNC_1(VAR_3, VAR_1->HostIP, VAR_1->HostMask))
 {

  return;
 }

 VAR_10 = FUNC_2(VAR_7) * 4;
 if (VAR_5 < VAR_10)
 {

  return;
 }

 VAR_11 = VAR_5 - VAR_10;
 VAR_12 = (void *)(((UCHAR *)VAR_4) + VAR_10);

 FUNC_3(VAR_1, VAR_2, VAR_8, VAR_3, VAR_9, VAR_7, VAR_12, VAR_11, VAR_6);
}
