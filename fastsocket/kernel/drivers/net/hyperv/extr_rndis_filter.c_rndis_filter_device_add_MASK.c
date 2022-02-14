
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int hw_mac_adr; scalar_t__ link_state; struct netvsc_device* net_dev; } ;
struct netvsc_device_info {scalar_t__ link_state; int mac_adr; } ;
struct netvsc_device {struct rndis_device* extension; } ;
struct hv_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,char*) ;
 struct rndis_device* FUNC_1 () ;
 struct netvsc_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct rndis_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct hv_device*,void*) ;
 int FUNC_6 (struct hv_device*) ;
 int FUNC_7 (struct rndis_device*) ;
 int FUNC_8 (struct rndis_device*) ;
 int FUNC_9 (struct rndis_device*) ;

int FUNC_10(struct hv_device *VAR_2,
      void *VAR_3)
{
 int VAR_4;
 struct netvsc_device *VAR_5;
 struct rndis_device *VAR_6;
 struct netvsc_device_info *VAR_7 = VAR_3;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -VAR_0;






 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (VAR_4 != 0) {
  FUNC_3(VAR_6);
  return VAR_4;
 }



 VAR_5 = FUNC_2(VAR_2);

 VAR_5->extension = VAR_6;
 VAR_6->net_dev = VAR_5;


 VAR_4 = FUNC_7(VAR_6);
 if (VAR_4 != 0) {
  FUNC_6(VAR_2);
  return VAR_4;
 }


 VAR_4 = FUNC_9(VAR_6);
 if (VAR_4 != 0) {
  FUNC_6(VAR_2);
  return VAR_4;
 }

 FUNC_4(VAR_7->mac_adr, VAR_6->hw_mac_adr, VAR_1);

 FUNC_8(VAR_6);

 VAR_7->link_state = VAR_6->link_state;

 FUNC_0(&VAR_2->device, "Device MAC %pM link state %s\n",
   VAR_6->hw_mac_adr,
   VAR_7->link_state ? "down" : "up");

 return VAR_4;
}
