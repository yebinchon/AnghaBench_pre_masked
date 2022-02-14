
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ DestPort; int DstIP; scalar_t__ SrcPort; int SrcIP; scalar_t__ Size; void* Data; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (int) ;

UDPPACKET *FUNC_2(IP *VAR_0, UINT VAR_1, IP *VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5)
{
 UDPPACKET *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_5 == 0 || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_1(sizeof(UDPPACKET));

 VAR_6->Data = VAR_4;
 VAR_6->Size = VAR_5;

 FUNC_0(&VAR_6->SrcIP, VAR_0, sizeof(IP));
 VAR_6->SrcPort = VAR_1;

 FUNC_0(&VAR_6->DstIP, VAR_2, sizeof(IP));
 VAR_6->DestPort = VAR_3;

 return VAR_6;
}
