
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct ibmveth_adapter {scalar_t__ mcastFilterSize; TYPE_1__* vdev; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_2__ {int unit_address; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct net_device*,char*,unsigned long) ;
 struct ibmveth_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 struct ibmveth_adapter *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;

 if((VAR_7->flags & VAR_1) || (VAR_7->mc_count > VAR_8->mcastFilterSize)) {
  VAR_9 = FUNC_0(VAR_8->vdev->unit_address,
        VAR_6 |
        VAR_4,
        0);
  if (VAR_9 != VAR_0) {
   FUNC_2(VAR_7, "h_multicast_ctrl rc=%ld when "
       "entering promisc mode\n", VAR_9);
  }
 } else {
  struct dev_mc_list *VAR_10 = VAR_7->mc_list;
  int VAR_11;

  VAR_9 = FUNC_0(VAR_8->vdev->unit_address,
        VAR_6 |
        VAR_4 |
        VAR_3,
        0);
  if (VAR_9 != VAR_0) {
   FUNC_2(VAR_7, "h_multicast_ctrl rc=%ld when "
       "attempting to clear filter table\n",
       VAR_9);
  }

  for(VAR_11 = 0; VAR_11 < VAR_7->mc_count; ++VAR_11, VAR_10 = VAR_10->next) {

   unsigned long VAR_12 = 0;
   FUNC_1(((char *)&VAR_12)+2, VAR_10->dmi_addr, 6);
   VAR_9 = FUNC_0(VAR_8->vdev->unit_address,
         VAR_2,
         VAR_12);
   if (VAR_9 != VAR_0) {
    FUNC_2(VAR_7, "h_multicast_ctrl rc=%ld "
        "when adding an entry to the filter "
        "table\n", VAR_9);
   }
  }


  VAR_9 = FUNC_0(VAR_8->vdev->unit_address,
        VAR_5,
        0);
  if (VAR_9 != VAR_0) {
   FUNC_2(VAR_7, "h_multicast_ctrl rc=%ld when "
       "enabling filtering\n", VAR_9);
  }
 }
}
