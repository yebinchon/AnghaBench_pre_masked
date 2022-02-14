
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus_reset_delay; int retry_delay; int async_data_setup_time; int req_ack_active_negation; int data_line_active_negation; int data_dma_burst_enable; int command_dma_burst_enable; int tag_aging; int selection_timeout; int max_queue_depth; scalar_t__ retry_count; int initiator_scsi_id; } ;
struct qlogicpti {TYPE_2__* dev_param; scalar_t__ ultra; TYPE_1__ host_param; int scsi_id; } ;
struct TYPE_4__ {int device_flags; int execution_throttle; int synchronous_period; int synchronous_offset; int device_enable; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct qlogicpti *VAR_1)
{
 int VAR_2;

 VAR_1->host_param.initiator_scsi_id = VAR_1->scsi_id;
 VAR_1->host_param.bus_reset_delay = 3;
 VAR_1->host_param.retry_count = 0;
 VAR_1->host_param.retry_delay = 5;
 VAR_1->host_param.async_data_setup_time = 3;
 VAR_1->host_param.req_ack_active_negation = 1;
 VAR_1->host_param.data_line_active_negation = 1;
 VAR_1->host_param.data_dma_burst_enable = 1;
 VAR_1->host_param.command_dma_burst_enable = 1;
 VAR_1->host_param.tag_aging = 8;
 VAR_1->host_param.selection_timeout = 250;
 VAR_1->host_param.max_queue_depth = 256;

 for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {







  VAR_1->dev_param[VAR_2].device_flags = 0xcd;
  VAR_1->dev_param[VAR_2].execution_throttle = 16;
  if (VAR_1->ultra) {
   VAR_1->dev_param[VAR_2].synchronous_period = 12;
   VAR_1->dev_param[VAR_2].synchronous_offset = 8;
  } else {
   VAR_1->dev_param[VAR_2].synchronous_period = 25;
   VAR_1->dev_param[VAR_2].synchronous_offset = 12;
  }
  VAR_1->dev_param[VAR_2].device_enable = 1;
 }
}
