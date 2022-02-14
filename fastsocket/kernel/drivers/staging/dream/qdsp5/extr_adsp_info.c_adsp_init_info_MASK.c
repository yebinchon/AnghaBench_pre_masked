
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct adsp_info {int send_irq; int read_ctrl; int write_ctrl; int max_msg16_size; int max_msg32_size; int max_task_id; int max_image_id; int module; int module_count; int ** task_to_module; int ** queue_offset; int max_queue_id; scalar_t__ max_module_id; TYPE_1__* init_info_ptr; } ;
struct TYPE_2__ {int ** task_to_module_tbl; int ** queue_offsets; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;

int FUNC_1(struct adsp_info *VAR_6)
{
 uint32_t VAR_7;

 VAR_6->send_irq = 0x00c00200;
 VAR_6->read_ctrl = 0x00400038;
 VAR_6->write_ctrl = 0x00400034;

 VAR_6->max_msg16_size = 193;
 VAR_6->max_msg32_size = 8;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_4[VAR_7] =
  &VAR_6->init_info_ptr->queue_offsets[VAR_7][0];

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5[VAR_7] =
  &VAR_6->init_info_ptr->task_to_module_tbl[VAR_7][0];
 VAR_6->max_task_id = 30;
 VAR_6->max_module_id = VAR_2 - 1;
 VAR_6->max_queue_id = VAR_1;
 VAR_6->max_image_id = 2;
 VAR_6->queue_offset = VAR_4;
 VAR_6->task_to_module = VAR_5;

 VAR_6->module_count = FUNC_0(VAR_3);
 VAR_6->module = VAR_3;
 return 0;
}
