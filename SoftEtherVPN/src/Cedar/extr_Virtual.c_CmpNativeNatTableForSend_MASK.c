
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Protocol; scalar_t__ SrcIp; scalar_t__ SrcPort; scalar_t__ DestIp; scalar_t__ DestPort; } ;
typedef TYPE_1__ NATIVE_NAT_ENTRY ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

int FUNC_1(void *VAR_1, void *VAR_2)
{
 int VAR_3;
 NATIVE_NAT_ENTRY *VAR_4, *VAR_5;
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }
 VAR_4 = *(NATIVE_NAT_ENTRY **)VAR_1;
 VAR_5 = *(NATIVE_NAT_ENTRY **)VAR_2;
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_4->Protocol, VAR_5->Protocol);
 if (VAR_3 != 0)
 {
  return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_4->SrcIp, VAR_5->SrcIp);
 if (VAR_3 != 0)
 {
  return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_4->SrcPort, VAR_5->SrcPort);
 if (VAR_3 != 0)
 {
  return VAR_3;
 }

 if (VAR_4->Protocol == VAR_0)
 {
  VAR_3 = FUNC_0(VAR_4->DestIp, VAR_5->DestIp);
  if (VAR_3 != 0)
  {
   return VAR_3;
  }

  VAR_3 = FUNC_0(VAR_4->DestPort, VAR_5->DestPort);
  if (VAR_3 != 0)
  {
   return VAR_3;
  }
 }

 return 0;
}
