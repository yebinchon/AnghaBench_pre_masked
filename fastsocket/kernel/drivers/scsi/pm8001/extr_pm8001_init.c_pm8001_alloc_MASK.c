
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* region; } ;
struct pm8001_hba_info {int flags; int tags_num; TYPE_5__* ccb_info; TYPE_4__ memoryMap; TYPE_5__* devices; int pdev; int tags; TYPE_2__* port; TYPE_1__* chip; int lock; } ;
struct pm8001_device {int dummy; } ;
struct pm8001_ccb_info {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct TYPE_10__ {int id; int device_id; int ccb_tag; int * device; int * task; scalar_t__ ccb_dma_handle; scalar_t__ running_req; int dev_type; } ;
struct TYPE_8__ {int num_elements; int element_size; int total_len; int alignment; int phys_addr; TYPE_5__* virt_ptr; int phys_addr_lo; int phys_addr_hi; } ;
struct TYPE_7__ {int list; scalar_t__ port_state; scalar_t__ port_attached; scalar_t__ wide_port_phymap; } ;
struct TYPE_6__ {int n_phy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (struct pm8001_hba_info*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__**,int *,int *,int *,int,int) ;
 int FUNC_5 (struct pm8001_hba_info*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct pm8001_hba_info*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct pm8001_hba_info *VAR_21,
   const struct pci_device_id *VAR_22)
{
 int VAR_23;
 FUNC_8(&VAR_21->lock);
 FUNC_2(VAR_21,
  FUNC_6("pm8001_alloc: PHY:%x\n",
    VAR_21->chip->n_phy));
 for (VAR_23 = 0; VAR_23 < VAR_21->chip->n_phy; VAR_23++) {
  FUNC_5(VAR_21, VAR_23);
  VAR_21->port[VAR_23].wide_port_phymap = 0;
  VAR_21->port[VAR_23].port_attached = 0;
  VAR_21->port[VAR_23].port_state = 0;
  FUNC_0(&VAR_21->port[VAR_23].list);
 }

 VAR_21->tags = FUNC_3(VAR_13, VAR_5);
 if (!VAR_21->tags)
  goto err_out;

 VAR_21->memoryMap.region[VAR_0].num_elements = 1;
 VAR_21->memoryMap.region[VAR_0].element_size = VAR_12;
 VAR_21->memoryMap.region[VAR_0].total_len = VAR_12;
 VAR_21->memoryMap.region[VAR_0].alignment = 32;


 VAR_21->memoryMap.region[VAR_7].num_elements = 1;
 VAR_21->memoryMap.region[VAR_7].element_size = VAR_12;
 VAR_21->memoryMap.region[VAR_7].total_len = VAR_12;
 VAR_21->memoryMap.region[VAR_7].alignment = 32;

 for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++) {

  VAR_21->memoryMap.region[VAR_2+VAR_23].num_elements = 1;
  VAR_21->memoryMap.region[VAR_2+VAR_23].element_size = 4;
  VAR_21->memoryMap.region[VAR_2+VAR_23].total_len = 4;
  VAR_21->memoryMap.region[VAR_2+VAR_23].alignment = 4;

  if ((VAR_22->driver_data) != VAR_20) {

   VAR_21->memoryMap.region[VAR_6+VAR_23].num_elements =
      VAR_17;
   VAR_21->memoryMap.region[VAR_6+VAR_23].element_size = 128;
   VAR_21->memoryMap.region[VAR_6+VAR_23].total_len =
      VAR_17 * 128;
   VAR_21->memoryMap.region[VAR_6+VAR_23].alignment = 128;
  } else {
   VAR_21->memoryMap.region[VAR_6+VAR_23].num_elements =
      VAR_17;
   VAR_21->memoryMap.region[VAR_6+VAR_23].element_size = 64;
   VAR_21->memoryMap.region[VAR_6+VAR_23].total_len =
      VAR_17 * 64;
   VAR_21->memoryMap.region[VAR_6+VAR_23].alignment = 64;
  }
 }

 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {

  VAR_21->memoryMap.region[VAR_10+VAR_23].num_elements = 1;
  VAR_21->memoryMap.region[VAR_10+VAR_23].element_size = 4;
  VAR_21->memoryMap.region[VAR_10+VAR_23].total_len = 4;
  VAR_21->memoryMap.region[VAR_10+VAR_23].alignment = 4;

  if (VAR_22->driver_data != VAR_20) {

   VAR_21->memoryMap.region[VAR_9+VAR_23].num_elements =
      VAR_17;
   VAR_21->memoryMap.region[VAR_9+VAR_23].element_size = 128;
   VAR_21->memoryMap.region[VAR_9+VAR_23].total_len =
      VAR_17 * 128;
   VAR_21->memoryMap.region[VAR_9+VAR_23].alignment = 128;
  } else {

   VAR_21->memoryMap.region[VAR_9+VAR_23].num_elements =
      VAR_17;
   VAR_21->memoryMap.region[VAR_9+VAR_23].element_size = 64;
   VAR_21->memoryMap.region[VAR_9+VAR_23].total_len =
      VAR_17 * 64;
   VAR_21->memoryMap.region[VAR_9+VAR_23].alignment = 64;
  }

 }

 VAR_21->memoryMap.region[VAR_8].num_elements = 1;
 VAR_21->memoryMap.region[VAR_8].element_size = 4096;
 VAR_21->memoryMap.region[VAR_8].total_len = 4096;

 VAR_21->memoryMap.region[VAR_3].num_elements = 1;
 VAR_21->memoryMap.region[VAR_3].element_size = VAR_14 *
  sizeof(struct pm8001_device);
 VAR_21->memoryMap.region[VAR_3].total_len = VAR_14 *
  sizeof(struct pm8001_device);


 VAR_21->memoryMap.region[VAR_1].num_elements = 1;
 VAR_21->memoryMap.region[VAR_1].element_size = VAR_13 *
  sizeof(struct pm8001_ccb_info);
 VAR_21->memoryMap.region[VAR_1].total_len = VAR_13 *
  sizeof(struct pm8001_ccb_info);


 VAR_21->memoryMap.region[VAR_4].total_len = 4096;

 for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++) {
  if (FUNC_4(VAR_21->pdev,
   &VAR_21->memoryMap.region[VAR_23].virt_ptr,
   &VAR_21->memoryMap.region[VAR_23].phys_addr,
   &VAR_21->memoryMap.region[VAR_23].phys_addr_hi,
   &VAR_21->memoryMap.region[VAR_23].phys_addr_lo,
   VAR_21->memoryMap.region[VAR_23].total_len,
   VAR_21->memoryMap.region[VAR_23].alignment) != 0) {
    FUNC_1(VAR_21,
     FUNC_6("Mem%d alloc failed\n",
     VAR_23));
    goto err_out;
  }
 }

 VAR_21->devices = VAR_21->memoryMap.region[VAR_3].virt_ptr;
 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
  VAR_21->devices[VAR_23].dev_type = VAR_18;
  VAR_21->devices[VAR_23].id = VAR_23;
  VAR_21->devices[VAR_23].device_id = VAR_14;
  VAR_21->devices[VAR_23].running_req = 0;
 }
 VAR_21->ccb_info = VAR_21->memoryMap.region[VAR_1].virt_ptr;
 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  VAR_21->ccb_info[VAR_23].ccb_dma_handle =
   VAR_21->memoryMap.region[VAR_1].phys_addr +
   VAR_23 * sizeof(struct pm8001_ccb_info);
  VAR_21->ccb_info[VAR_23].task = ((void*)0);
  VAR_21->ccb_info[VAR_23].ccb_tag = 0xffffffff;
  VAR_21->ccb_info[VAR_23].device = ((void*)0);
  ++VAR_21->tags_num;
 }
 VAR_21->flags = VAR_11;

 FUNC_7(VAR_21);
 return 0;
err_out:
 return 1;
}
