
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmcraid_ioarcb {int hrrq_id; int* cdb; int ioarcb_bus_addr; int resource_handle; int request_type; } ;
struct pmcraid_instance {int num_hrrq; int * hrrq_start_bus_addr; } ;
struct pmcraid_cmd {int hrrq_index; TYPE_1__* ioa_cb; struct pmcraid_instance* drv_inst; } ;
typedef int hrrq_size ;
typedef int hrrq_addr ;
typedef int __be64 ;
struct TYPE_2__ {struct pmcraid_ioarcb ioarcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int *,int) ;
 void FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (struct pmcraid_cmd*) ;
 int FUNC_7 (struct pmcraid_cmd*,void (*) (struct pmcraid_cmd*),int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(struct pmcraid_cmd *VAR_6)
{
 struct pmcraid_instance *VAR_7 = VAR_6->drv_inst;
 struct pmcraid_ioarcb *VAR_8 = &VAR_6->ioa_cb->ioarcb;
 int VAR_9 = VAR_6->hrrq_index;
 __be64 VAR_10 = FUNC_1(VAR_7->hrrq_start_bus_addr[VAR_9]);
 u32 VAR_11 = FUNC_0(sizeof(u32) * VAR_3);
 void (*VAR_12)(struct pmcraid_cmd *);

 FUNC_6(VAR_6);
 VAR_6->hrrq_index = VAR_9 + 1;

 if (VAR_6->hrrq_index < VAR_7->num_hrrq) {
  VAR_12 = FUNC_8;
 } else {
  VAR_6->hrrq_index = 0;
  VAR_12 = FUNC_4;
 }


 VAR_8->request_type = VAR_4;
 VAR_8->resource_handle = FUNC_2(VAR_2);


 VAR_8->hrrq_id = VAR_9;
 VAR_8->cdb[0] = VAR_0;
 VAR_8->cdb[1] = VAR_9;




 FUNC_5("HRRQ_IDENTIFY with hrrq:ioarcb:index => %llx:%llx:%x\n",
       VAR_10, VAR_8->ioarcb_bus_addr, VAR_9);

 FUNC_3(&(VAR_8->cdb[2]), &VAR_10, sizeof(VAR_10));
 FUNC_3(&(VAR_8->cdb[10]), &VAR_11, sizeof(VAR_11));





 FUNC_7(VAR_6, VAR_12,
    VAR_1,
    VAR_5);
}
