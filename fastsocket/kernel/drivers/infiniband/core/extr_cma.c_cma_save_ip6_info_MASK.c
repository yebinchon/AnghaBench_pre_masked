
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; int sin6_family; } ;
struct TYPE_6__ {int dst_addr; int src_addr; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_3__ route; } ;
struct TYPE_8__ {int ip6; } ;
struct TYPE_5__ {int ip6; } ;
struct cma_hdr {int port; TYPE_4__ src_addr; TYPE_1__ dst_addr; } ;



__attribute__((used)) static void FUNC_0(struct rdma_cm_id *VAR_0, struct rdma_cm_id *VAR_1,
         struct cma_hdr *VAR_2)
{
 struct sockaddr_in6 *VAR_3, *VAR_4;

 VAR_3 = (struct sockaddr_in6 *) &VAR_1->route.addr.src_addr;
 VAR_4 = (struct sockaddr_in6 *) &VAR_0->route.addr.src_addr;
 VAR_4->sin6_family = VAR_3->sin6_family;
 VAR_4->sin6_addr = VAR_2->dst_addr.ip6;
 VAR_4->sin6_port = VAR_3->sin6_port;

 VAR_4 = (struct sockaddr_in6 *) &VAR_0->route.addr.dst_addr;
 VAR_4->sin6_family = VAR_3->sin6_family;
 VAR_4->sin6_addr = VAR_2->src_addr.ip6;
 VAR_4->sin6_port = VAR_2->port;
}
