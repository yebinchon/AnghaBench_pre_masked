
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct net_device {int dummy; } ;
struct ibmveth_adapter {int pool_config; void* fw_ipv6_csum_support; TYPE_1__* vdev; void* fw_ipv4_csum_support; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 long FUNC_0 (int ,unsigned long,unsigned long,unsigned long*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,void*,long,...) ;
 struct ibmveth_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7, u32 VAR_8,
        void (*VAR_9) (struct net_device *, u32))
{
 struct ibmveth_adapter *VAR_10 = FUNC_4(VAR_7);
 unsigned long VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 long VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = 0;

 if (FUNC_5(VAR_7)) {
  VAR_20 = 1;
  VAR_10->pool_config = 1;
  FUNC_1(VAR_7);
  VAR_10->pool_config = 0;
 }

 VAR_11 = 0;
 VAR_12 = 0;

 if (VAR_8) {
  VAR_11 = VAR_3;
  VAR_14 = VAR_4;
 } else {
  VAR_12 = VAR_3;
  VAR_15 = VAR_4;
 }

 VAR_16 = FUNC_0(VAR_10->vdev->unit_address, 0, 0, &VAR_13);

 if (VAR_16 == VAR_1 && !(VAR_13 & VAR_2) &&
     !(VAR_13 & VAR_6) &&
     (VAR_13 & VAR_5)) {
  VAR_16 = FUNC_0(VAR_10->vdev->unit_address, VAR_12,
      VAR_11, &VAR_13);

  if (VAR_16 != VAR_1) {
   FUNC_3(VAR_7, "unable to change IPv4 checksum "
     "offload settings. %d rc=%ld\n",
     VAR_8, VAR_16);

   VAR_16 = FUNC_0(VAR_10->vdev->unit_address,
       VAR_11, VAR_12, &VAR_13);
  } else {
   VAR_10->fw_ipv4_csum_support = VAR_8;
  }

  VAR_17 = FUNC_0(VAR_10->vdev->unit_address,
      VAR_15, VAR_14, &VAR_13);

  if (VAR_17 != VAR_1) {
   FUNC_3(VAR_7, "unable to change IPv6 checksum "
     "offload settings. %d rc=%ld\n",
     VAR_8, VAR_16);

   VAR_16 = FUNC_0(VAR_10->vdev->unit_address,
       VAR_14, VAR_15,
       &VAR_13);
  } else
   VAR_10->fw_ipv6_csum_support = VAR_8;

  if (VAR_16 == VAR_1 || VAR_17 == VAR_1)
   VAR_9(VAR_7, VAR_8);
  else
   VAR_18 = -VAR_0;
 } else {
  VAR_18 = -VAR_0;
  FUNC_3(VAR_7, "unable to change checksum offload settings."
         " %d rc=%ld ret_attr=%lx\n", VAR_8, VAR_16,
         VAR_13);
 }

 if (VAR_20)
  VAR_19 = FUNC_2(VAR_7);

 return VAR_18 ? VAR_18 : VAR_19;
}
