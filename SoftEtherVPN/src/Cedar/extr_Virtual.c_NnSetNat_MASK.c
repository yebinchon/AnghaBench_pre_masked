
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_4__ {int HashCodeForRecv; int HashCodeForSend; void* PublicPort; void* PublicIp; void* DestPort; void* DestIp; void* SrcPort; void* SrcIp; void* Protocol; } ;
typedef TYPE_1__ NATIVE_NAT_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(NATIVE_NAT_ENTRY *VAR_1, UINT VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, sizeof(NATIVE_NAT_ENTRY));

 VAR_1->Protocol = VAR_2;
 VAR_1->SrcIp = VAR_3;
 VAR_1->SrcPort = VAR_4;
 VAR_1->DestIp = VAR_5;
 VAR_1->DestPort = VAR_6;
 VAR_1->PublicIp = VAR_7;
 VAR_1->PublicPort = VAR_8;
 VAR_1->HashCodeForSend = VAR_1->HashCodeForRecv = VAR_0;
}
