
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxge_vpath {scalar_t__ mac_addr_cnt; int mcast_addr_cnt; int mac_addr_list; } ;
struct vxge_mac_addrs {int state; int macaddr; int item; } ;
struct macInfo {int* macaddr; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct vxge_mac_addrs* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

int FUNC_4(struct vxge_vpath *VAR_7, struct macInfo *VAR_8)
{
 struct vxge_mac_addrs *VAR_9;
 u8 *VAR_10 = ((void*)0);

 if (VAR_7->mac_addr_cnt >= VAR_6)
  return VAR_3;

 VAR_9 = FUNC_0(sizeof(struct vxge_mac_addrs), VAR_2);
 if (!VAR_9) {
  FUNC_3(VAR_5,
   "%s: memory allocation failed",
   VAR_4);
  return VAR_1;
 }

 FUNC_1(&VAR_9->item, &VAR_7->mac_addr_list);


 VAR_10 = (u8 *)&VAR_9->macaddr;
 FUNC_2(VAR_10, VAR_8->macaddr, VAR_0);

 VAR_9->state = VAR_8->state;
 VAR_7->mac_addr_cnt++;


 if (0x01 & VAR_8->macaddr[0])
  VAR_7->mcast_addr_cnt++;

 return VAR_3;
}
