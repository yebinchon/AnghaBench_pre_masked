
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct veth_port {int promiscuous; size_t num_mcast; int mcast_gate; int * mcast_addr; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int*,int ) ;
 struct veth_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct veth_port *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6;

 FUNC_2(&VAR_5->mcast_gate, VAR_6);

 if ((VAR_4->flags & VAR_2) || (VAR_4->flags & VAR_1) ||
   (VAR_4->mc_count > VAR_3)) {
  VAR_5->promiscuous = 1;
 } else {
  struct dev_mc_list *VAR_7 = VAR_4->mc_list;
  int VAR_8;

  VAR_5->promiscuous = 0;


  VAR_5->num_mcast = 0;

  for (VAR_8 = 0; VAR_8 < VAR_4->mc_count; VAR_8++) {
   u8 *VAR_9 = VAR_7->dmi_addr;
   u64 VAR_10 = 0;

   if (VAR_9[0] & 0x01) {
    FUNC_0(&VAR_10, VAR_9, VAR_0);
    VAR_5->mcast_addr[VAR_5->num_mcast] = VAR_10;
    VAR_5->num_mcast++;
   }
   VAR_7 = VAR_7->next;
  }
 }

 FUNC_3(&VAR_5->mcast_gate, VAR_6);
}
