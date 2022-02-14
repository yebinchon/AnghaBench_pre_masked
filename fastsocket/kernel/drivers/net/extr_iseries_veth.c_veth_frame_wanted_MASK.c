
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct veth_port {int mac_addr; int num_mcast; int* mcast_addr; int mcast_gate; scalar_t__ promiscuous; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct veth_port *VAR_0, u64 VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 unsigned long VAR_4;

 if ( (VAR_1 == VAR_0->mac_addr) || (VAR_1 == 0xffffffffffff0000) )
  return 1;

 FUNC_0(&VAR_0->mcast_gate, VAR_4);

 if (VAR_0->promiscuous) {
  VAR_2 = 1;
  goto out;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->num_mcast; ++VAR_3) {
  if (VAR_0->mcast_addr[VAR_3] == VAR_1) {
   VAR_2 = 1;
   break;
  }
 }

 out:
 FUNC_1(&VAR_0->mcast_gate, VAR_4);

 return VAR_2;
}
