
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adsp_info {int send_irq; int read_ctrl; int write_ctrl; int max_msg16_size; int max_msg32_size; int max_task_id; int max_image_id; int module; int module_count; int task_to_module; int queue_offset; int max_queue_id; scalar_t__ max_module_id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct adsp_info *VAR_5)
{
 VAR_5->send_irq = 0x00c00200;
 VAR_5->read_ctrl = 0x00400038;
 VAR_5->write_ctrl = 0x00400034;

 VAR_5->max_msg16_size = 193;
 VAR_5->max_msg32_size = 8;

 VAR_5->max_task_id = 16;
 VAR_5->max_module_id = VAR_0 - 1;
 VAR_5->max_queue_id = VAR_1;
 VAR_5->max_image_id = 2;
 VAR_5->queue_offset = VAR_3;
 VAR_5->task_to_module = VAR_4;

 VAR_5->module_count = FUNC_0(VAR_2);
 VAR_5->module = VAR_2;
 return 0;
}
