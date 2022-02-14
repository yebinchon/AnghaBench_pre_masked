
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_5__ sin_addr; int sin_family; } ;
struct TYPE_10__ {int dst_addr; int src_addr; } ;
struct TYPE_11__ {TYPE_3__ addr; } ;
struct rdma_cm_id {TYPE_4__ route; } ;
struct TYPE_13__ {int addr; } ;
struct TYPE_14__ {TYPE_6__ ip4; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_1__ ip4; } ;
struct cma_hdr {int port; TYPE_7__ src_addr; TYPE_2__ dst_addr; } ;



__attribute__((used)) static void FUNC_0(struct rdma_cm_id *VAR_0, struct rdma_cm_id *VAR_1,
         struct cma_hdr *VAR_2)
{
 struct sockaddr_in *VAR_3, *VAR_4;

 VAR_3 = (struct sockaddr_in *) &VAR_1->route.addr.src_addr;
 VAR_4 = (struct sockaddr_in *) &VAR_0->route.addr.src_addr;
 VAR_4->sin_family = VAR_3->sin_family;
 VAR_4->sin_addr.s_addr = VAR_2->dst_addr.ip4.addr;
 VAR_4->sin_port = VAR_3->sin_port;

 VAR_4 = (struct sockaddr_in *) &VAR_0->route.addr.dst_addr;
 VAR_4->sin_family = VAR_3->sin_family;
 VAR_4->sin_addr.s_addr = VAR_2->src_addr.ip4.addr;
 VAR_4->sin_port = VAR_2->port;
}
