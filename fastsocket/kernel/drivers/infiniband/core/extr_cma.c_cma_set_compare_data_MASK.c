
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {scalar_t__ mask; scalar_t__ data; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct ib_cm_compare_data {scalar_t__ mask; scalar_t__ data; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {struct in6_addr ip6; TYPE_2__ ip4; } ;
struct cma_hdr {TYPE_3__ dst_addr; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef int __be32 ;




 int FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (struct cma_hdr*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct in6_addr*,int,int) ;

__attribute__((used)) static void FUNC_4(enum rdma_port_space VAR_0, struct sockaddr *VAR_1,
     struct ib_cm_compare_data *VAR_2)
{
 struct cma_hdr *VAR_3, *VAR_4;
 __be32 VAR_5;
 struct in6_addr VAR_6;

 FUNC_3(VAR_2, 0, sizeof *VAR_2);
 VAR_3 = (void *) VAR_2->data;
 VAR_4 = (void *) VAR_2->mask;

 switch (VAR_1->sa_family) {
 case 129:
  VAR_5 = ((struct sockaddr_in *) VAR_1)->sin_addr.s_addr;
  FUNC_1(VAR_3, 4);
  FUNC_1(VAR_4, 0xF);
  if (!FUNC_0(VAR_1)) {
   VAR_3->dst_addr.ip4.addr = VAR_5;
   VAR_4->dst_addr.ip4.addr = FUNC_2(~0);
  }
  break;
 case 128:
  VAR_6 = ((struct sockaddr_in6 *) VAR_1)->sin6_addr;
  FUNC_1(VAR_3, 6);
  FUNC_1(VAR_4, 0xF);
  if (!FUNC_0(VAR_1)) {
   VAR_3->dst_addr.ip6 = VAR_6;
   FUNC_3(&VAR_4->dst_addr.ip6, 0xFF,
          sizeof VAR_4->dst_addr.ip6);
  }
  break;
 default:
  break;
 }
}
