
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_3__ sin_addr; } ;
struct rdma_id_private {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_10__ {int ip6; TYPE_2__ ip4; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_9__ {int ip6; TYPE_1__ ip4; } ;
struct cma_hdr {int port; TYPE_5__ dst_addr; TYPE_4__ src_addr; int cma_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rdma_id_private*) ;
 scalar_t__ FUNC_1 (struct rdma_id_private*) ;
 int FUNC_2 (struct cma_hdr*,int) ;
 scalar_t__ FUNC_3 (struct rdma_id_private*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, struct rdma_id_private *VAR_4)
{
 struct cma_hdr *VAR_5;

 VAR_5 = VAR_3;
 VAR_5->cma_version = VAR_2;
 if (FUNC_1(VAR_4) == VAR_0) {
  struct sockaddr_in *VAR_6, *VAR_7;

  VAR_6 = (struct sockaddr_in *) FUNC_3(VAR_4);
  VAR_7 = (struct sockaddr_in *) FUNC_0(VAR_4);

  FUNC_2(VAR_5, 4);
  VAR_5->src_addr.ip4.addr = VAR_6->sin_addr.s_addr;
  VAR_5->dst_addr.ip4.addr = VAR_7->sin_addr.s_addr;
  VAR_5->port = VAR_6->sin_port;
 } else if (FUNC_1(VAR_4) == VAR_1) {
  struct sockaddr_in6 *VAR_8, *VAR_9;

  VAR_8 = (struct sockaddr_in6 *) FUNC_3(VAR_4);
  VAR_9 = (struct sockaddr_in6 *) FUNC_0(VAR_4);

  FUNC_2(VAR_5, 6);
  VAR_5->src_addr.ip6 = VAR_8->sin6_addr;
  VAR_5->dst_addr.ip6 = VAR_9->sin6_addr;
  VAR_5->port = VAR_8->sin6_port;
 }
 return 0;
}
