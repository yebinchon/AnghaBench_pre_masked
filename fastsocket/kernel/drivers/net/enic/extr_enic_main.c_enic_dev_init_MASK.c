
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {unsigned int rq_count; int * napi; int vdev; struct net_device* netdev; } ;
struct device {int dummy; } ;



 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 int FUNC_4 (struct enic*) ;
 int FUNC_5 (struct enic*) ;
 struct device* FUNC_6 (struct enic*) ;
 int FUNC_7 (struct enic*) ;
 int FUNC_8 (struct enic*) ;
 int FUNC_9 (struct enic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (struct enic*) ;
 int FUNC_11 (struct enic*) ;
 int FUNC_12 (struct net_device*,int *,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct enic *VAR_2)
{
 struct device *VAR_3 = FUNC_6(VAR_2);
 struct net_device *VAR_4 = VAR_2->netdev;
 unsigned int VAR_5;
 int VAR_6;


 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_3, "Using default conversion factor for "
   "interrupt coalesce timer\n");
  FUNC_14(VAR_2->vdev);
 }




 VAR_6 = FUNC_8(VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_3, "Get vNIC configuration failed, aborting\n");
  return VAR_6;
 }




 FUNC_7(VAR_2);





 VAR_6 = FUNC_10(VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_3, "Failed to set intr mode based on resource "
   "counts and system capabilities, aborting\n");
  return VAR_6;
 }




 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_3, "Failed to alloc vNIC resources, aborting\n");
  goto err_out_free_vnic_resources;
 }

 FUNC_9(VAR_2);

 VAR_6 = FUNC_11(VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_3, "Failed to config nic, aborting\n");
  goto err_out_free_vnic_resources;
 }

 switch (FUNC_13(VAR_2->vdev)) {
 default:
  FUNC_12(VAR_4, &VAR_2->napi[0], VAR_0, 64);
  break;
 case 128:
  for (VAR_5 = 0; VAR_5 < VAR_2->rq_count; VAR_5++)
   FUNC_12(VAR_4, &VAR_2->napi[VAR_5],
    VAR_1, 64);
  break;
 }

 return 0;

err_out_free_vnic_resources:
 FUNC_3(VAR_2);
 FUNC_5(VAR_2);

 return VAR_6;
}
