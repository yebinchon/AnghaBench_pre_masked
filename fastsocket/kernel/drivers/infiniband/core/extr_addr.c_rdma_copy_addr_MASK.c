
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_addr {int bound_dev_if; int dst_dev_addr; int broadcast; int src_dev_addr; int dev_type; } ;
struct net_device {unsigned char const* dev_addr; unsigned char const* broadcast; int ifindex; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*,int ) ;

int FUNC_1(struct rdma_dev_addr *VAR_1, struct net_device *VAR_2,
       const unsigned char *VAR_3)
{
 VAR_1->dev_type = VAR_2->type;
 FUNC_0(VAR_1->src_dev_addr, VAR_2->dev_addr, VAR_0);
 FUNC_0(VAR_1->broadcast, VAR_2->broadcast, VAR_0);
 if (VAR_3)
  FUNC_0(VAR_1->dst_dev_addr, VAR_3, VAR_0);
 VAR_1->bound_dev_if = VAR_2->ifindex;
 return 0;
}
