
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h ;
struct TYPE_9__ {TYPE_2__* addr; TYPE_2__* ipv6_addr; } ;
struct TYPE_8__ {int IdType; } ;
struct TYPE_7__ {TYPE_5__ IpAddress; } ;
typedef TYPE_1__ IKE_PACKET_NAT_OA_PAYLOAD ;
typedef TYPE_2__ IKE_NAT_OA_HEADER ;
typedef int BUF ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

BUF *FUNC_4(IKE_PACKET_NAT_OA_PAYLOAD *VAR_2)
{
 IKE_NAT_OA_HEADER VAR_3;
 BUF *VAR_4;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(&VAR_3, sizeof(VAR_3));

 if (FUNC_0(&VAR_2->IpAddress))
 {
  VAR_3.IdType = VAR_1;
 }
 else
 {
  VAR_3.IdType = VAR_0;
 }

 VAR_4 = FUNC_1();

 FUNC_2(VAR_4, &VAR_3, sizeof(VAR_3));

 if (FUNC_0(&VAR_2->IpAddress))
 {
  FUNC_2(VAR_4, VAR_2->IpAddress.ipv6_addr, 16);
 }
 else
 {
  FUNC_2(VAR_4, VAR_2->IpAddress.addr, 4);
 }

 return VAR_4;
}
