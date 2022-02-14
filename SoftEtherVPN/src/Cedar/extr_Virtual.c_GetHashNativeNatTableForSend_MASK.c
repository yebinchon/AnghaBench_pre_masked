
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {scalar_t__ HashCodeForSend; scalar_t__ Protocol; scalar_t__ SrcIp; scalar_t__ SrcPort; scalar_t__ DestIp; scalar_t__ DestPort; } ;
typedef TYPE_1__ NATIVE_NAT_ENTRY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

UINT FUNC_0(void *VAR_2)
{
 UINT VAR_3;
 NATIVE_NAT_ENTRY *VAR_4 = (NATIVE_NAT_ENTRY *)VAR_2;
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (VAR_4->HashCodeForSend != VAR_0)
 {
  return VAR_4->HashCodeForSend;
 }

 VAR_3 = 0;

 VAR_3 += VAR_4->Protocol;
 VAR_3 += VAR_4->SrcIp;
 VAR_3 += VAR_4->SrcPort;

 if (VAR_4->Protocol == VAR_1)
 {
  VAR_3 += VAR_4->DestIp;
  VAR_3 += VAR_4->DestPort;
 }

 VAR_4->HashCodeForSend = VAR_3;

 return VAR_3;
}
