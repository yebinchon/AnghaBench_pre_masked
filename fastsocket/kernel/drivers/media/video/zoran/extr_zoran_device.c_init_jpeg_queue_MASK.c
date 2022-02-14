
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_buffers; TYPE_1__* buffer; } ;
struct zoran {int * stat_com; TYPE_2__ jpg_buffers; scalar_t__ jpg_queued_num; scalar_t__ jpg_err_shift; scalar_t__ jpg_err_seq; scalar_t__ num_errors; scalar_t__ JPEG_error; scalar_t__ jpg_seq_num; scalar_t__ jpg_que_tail; scalar_t__ jpg_dma_tail; scalar_t__ jpg_dma_head; scalar_t__ jpg_que_head; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct zoran *VAR_2)
{
 int VAR_3;


 VAR_2->jpg_que_head = 0;
 VAR_2->jpg_dma_head = 0;
 VAR_2->jpg_dma_tail = 0;
 VAR_2->jpg_que_tail = 0;
 VAR_2->jpg_seq_num = 0;
 VAR_2->JPEG_error = 0;
 VAR_2->num_errors = 0;
 VAR_2->jpg_err_seq = 0;
 VAR_2->jpg_err_shift = 0;
 VAR_2->jpg_queued_num = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->jpg_buffers.num_buffers; VAR_3++) {
  VAR_2->jpg_buffers.buffer[VAR_3].state = VAR_1;
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->stat_com[VAR_3] = FUNC_0(1);
 }
}
