
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_3__ {void* PublicPort; void* PublicIp; void* DestPort; void* DestIp; void* SrcPort; void* SrcIp; void* Protocol; } ;
typedef TYPE_1__ NAT_ENTRY ;



void FUNC_0(NAT_ENTRY *VAR_0, UINT VAR_1, UINT VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->Protocol = VAR_1;
 VAR_0->SrcIp = VAR_2;
 VAR_0->SrcPort = VAR_3;
 VAR_0->DestIp = VAR_4;
 VAR_0->DestPort = VAR_5;
 VAR_0->PublicIp = VAR_6;
 VAR_0->PublicPort = VAR_7;
}
