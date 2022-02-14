
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {scalar_t__ events; scalar_t__ munge_ptr; scalar_t__ munge_count; scalar_t__ munge_chan; scalar_t__ scan_progress; scalar_t__ cur_chan; scalar_t__ buf_read_ptr; scalar_t__ buf_write_ptr; scalar_t__ buf_read_count; scalar_t__ buf_read_alloc_count; scalar_t__ buf_write_count; scalar_t__ buf_write_alloc_count; } ;



void FUNC_0(struct comedi_async *VAR_0)
{
 VAR_0->buf_write_alloc_count = 0;
 VAR_0->buf_write_count = 0;
 VAR_0->buf_read_alloc_count = 0;
 VAR_0->buf_read_count = 0;

 VAR_0->buf_write_ptr = 0;
 VAR_0->buf_read_ptr = 0;

 VAR_0->cur_chan = 0;
 VAR_0->scan_progress = 0;
 VAR_0->munge_chan = 0;
 VAR_0->munge_count = 0;
 VAR_0->munge_ptr = 0;

 VAR_0->events = 0;
}
