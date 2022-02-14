
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct pci_dev {int dev; } ;
struct mem_ctl_info {int edac_cap; int * dev; struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {size_t mc_node_id; scalar_t__ channel_count; struct pci_dev* F2; TYPE_2__* csels; TYPE_1__* ops; } ;
struct amd64_family_type {int f3_id; int f1_id; } ;
struct TYPE_4__ {int b_cnt; } ;
struct TYPE_3__ {scalar_t__ (* early_channel_count ) (struct amd64_pvt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct amd64_family_type* FUNC_0 (struct amd64_pvt*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_6 (int ,int ,scalar_t__,size_t) ;
 int FUNC_7 (struct mem_ctl_info*) ;
 int FUNC_8 (struct amd64_pvt*) ;
 size_t FUNC_9 (struct pci_dev*) ;
 scalar_t__ FUNC_10 (struct mem_ctl_info*) ;
 int FUNC_11 (struct amd64_pvt*) ;
 struct amd64_pvt* FUNC_12 (int,int ) ;
 struct mem_ctl_info** VAR_7 ;
 int FUNC_13 (struct amd64_pvt*) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (struct amd64_pvt*,int ,int ) ;
 int FUNC_15 (struct mem_ctl_info*) ;
 int FUNC_16 (struct mem_ctl_info*,struct amd64_family_type*) ;
 scalar_t__ FUNC_17 (struct amd64_pvt*) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_9)
{
 struct amd64_pvt *VAR_10 = ((void*)0);
 struct amd64_family_type *VAR_11 = ((void*)0);
 struct mem_ctl_info *VAR_12 = ((void*)0);
 int VAR_13 = 0, VAR_14;
 u8 VAR_15 = FUNC_9(VAR_9);

 VAR_14 = -VAR_3;
 VAR_10 = FUNC_12(sizeof(struct amd64_pvt), VAR_4);
 if (!VAR_10)
  goto err_ret;

 VAR_10->mc_node_id = VAR_15;
 VAR_10->F2 = VAR_9;

 VAR_14 = -VAR_1;
 VAR_11 = FUNC_0(VAR_10);
 if (!VAR_11)
  goto err_free;

 VAR_14 = -VAR_2;
 VAR_13 = FUNC_14(VAR_10, VAR_11->f1_id, VAR_11->f3_id);
 if (VAR_13)
  goto err_free;

 FUNC_13(VAR_10);






 VAR_14 = -VAR_1;
 VAR_10->channel_count = VAR_10->ops->early_channel_count(VAR_10);
 if (VAR_10->channel_count < 0)
  goto err_siblings;

 VAR_14 = -VAR_3;
 VAR_12 = FUNC_6(0, VAR_10->csels[0].b_cnt, VAR_10->channel_count, VAR_15);
 if (!VAR_12)
  goto err_siblings;

 VAR_12->pvt_info = VAR_10;
 VAR_12->dev = &VAR_10->F2->dev;

 FUNC_16(VAR_12, VAR_11);

 if (FUNC_10(VAR_12))
  VAR_12->edac_cap = VAR_0;

 FUNC_15(VAR_12);

 VAR_14 = -VAR_2;
 if (FUNC_5(VAR_12)) {
  FUNC_4("failed edac_mc_add_mc()\n");
  goto err_add_mc;
 }


 if (VAR_8)
  FUNC_2(1);

 FUNC_1(VAR_5);

 VAR_7[VAR_15] = VAR_12;

 FUNC_3(&VAR_6);

 return 0;

err_add_mc:
 FUNC_7(VAR_12);

err_siblings:
 FUNC_8(VAR_10);

err_free:
 FUNC_11(VAR_10);

err_ret:
 return VAR_14;
}
