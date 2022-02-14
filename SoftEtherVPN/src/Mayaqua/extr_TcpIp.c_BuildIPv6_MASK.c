
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ip_header ;
typedef int info ;
typedef int UINT ;
typedef void* UCHAR ;
struct TYPE_6__ {int PayloadSize; void* Payload; void* Protocol; struct TYPE_6__* IPv6Header; int DestAddress; int SrcAddress; void* HopLimit; } ;
typedef TYPE_1__ IPV6_HEADER_PACKET_INFO ;
typedef TYPE_1__ IPV6_HEADER ;
typedef int IPV6_ADDR ;
typedef int BUF ;


 int * FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

BUF *FUNC_4(IPV6_ADDR *VAR_0, IPV6_ADDR *VAR_1, UINT VAR_2, UCHAR VAR_3, UCHAR VAR_4, void *VAR_5,
      UINT VAR_6)
{
 IPV6_HEADER_PACKET_INFO VAR_7;
 IPV6_HEADER VAR_8;
 BUF *VAR_9;
 UINT VAR_10;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_4 == 0)
 {
  VAR_4 = 255;
 }


 FUNC_3(&VAR_8, sizeof(VAR_8));
 FUNC_2(&VAR_8, 6);
 VAR_8.HopLimit = VAR_4;
 FUNC_1(&VAR_8.SrcAddress, VAR_1, sizeof(IPV6_ADDR));
 FUNC_1(&VAR_8.DestAddress, VAR_0, sizeof(IPV6_ADDR));


 FUNC_3(&VAR_7, sizeof(VAR_7));
 VAR_7.IPv6Header = &VAR_8;
 VAR_7.Protocol = VAR_3;
 VAR_7.Payload = VAR_5;
 VAR_7.PayloadSize = VAR_6;

 VAR_9 = FUNC_0(&VAR_7, &VAR_10);
 if (VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_9;
}
