
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ SrcIp; scalar_t__ DestIp; scalar_t__ SrcPort; scalar_t__ DestPort; scalar_t__ Protocol; } ;
typedef TYPE_1__ NAT_ENTRY ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 NAT_ENTRY *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(NAT_ENTRY **)VAR_0;
 VAR_3 = *(NAT_ENTRY **)VAR_1;
 if (VAR_2 == VAR_3)
 {
  return 0;
 }

 if (VAR_2->SrcIp > VAR_3->SrcIp) return 1;
 else if (VAR_2->SrcIp < VAR_3->SrcIp) return -1;
 else if (VAR_2->DestIp > VAR_3->DestIp) return 1;
 else if (VAR_2->DestIp < VAR_3->DestIp) return -1;
 else if (VAR_2->SrcPort > VAR_3->SrcPort) return 1;
 else if (VAR_2->SrcPort < VAR_3->SrcPort) return -1;
 else if (VAR_2->DestPort > VAR_3->DestPort) return 1;
 else if (VAR_2->DestPort < VAR_3->DestPort) return -1;
 else if (VAR_2->Protocol > VAR_3->Protocol) return 1;
 else if (VAR_2->Protocol < VAR_3->Protocol) return -1;
 else return 0;
}
