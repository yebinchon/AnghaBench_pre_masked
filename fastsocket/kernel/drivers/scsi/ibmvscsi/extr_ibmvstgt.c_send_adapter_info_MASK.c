
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct vio_port {int riobn; int liobn; } ;
struct srp_target {int dev; struct Scsi_Host* shost; } ;
struct mad_adapter_info_data {int mad_version; int os_type; int* port_max_txu; int partition_number; int partition_name; int srp_version; } ;
struct iu_entry {struct srp_target* target; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int max_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mad_adapter_info_data* FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,int,struct mad_adapter_info_data*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mad_adapter_info_data*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int) ;
 struct vio_port* FUNC_8 (struct srp_target*) ;

int FUNC_9(struct iu_entry *VAR_4,
        dma_addr_t VAR_5, uint16_t VAR_6)
{
 struct srp_target *VAR_7 = VAR_4->target;
 struct vio_port *VAR_8 = FUNC_8(VAR_7);
 struct Scsi_Host *VAR_9 = VAR_7->shost;
 dma_addr_t VAR_10;
 struct mad_adapter_info_data *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_7->dev, sizeof(*VAR_11), &VAR_10,
      VAR_0);
 if (!VAR_11) {
  FUNC_3("bad dma_alloc_coherent %p\n", VAR_7);
  return 1;
 }


 VAR_12 = FUNC_4(sizeof(*VAR_11), VAR_8->riobn, VAR_5,
     VAR_8->liobn, VAR_10);
 if (VAR_12 == VAR_1) {
  FUNC_2("Client connect: %s (%d)\n",
   VAR_11->partition_name, VAR_11->partition_number);
 }

 FUNC_5(VAR_11, 0, sizeof(*VAR_11));

 FUNC_6(VAR_11->srp_version, "16.a");
 FUNC_7(VAR_11->partition_name, VAR_2,
  sizeof(VAR_11->partition_name));
 VAR_11->partition_number = VAR_3;
 VAR_11->mad_version = 1;
 VAR_11->os_type = 2;
 VAR_11->port_max_txu[0] = VAR_9->hostt->max_sectors << 9;


 VAR_12 = FUNC_4(sizeof(*VAR_11), VAR_8->liobn, VAR_10,
     VAR_8->riobn, VAR_5);

 FUNC_1(VAR_7->dev, sizeof(*VAR_11), VAR_11, VAR_10);

 if (VAR_12 != VAR_1) {
  FUNC_3("Error sending adapter info %d\n", VAR_12);
  return 1;
 }

 return 0;
}
