
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gxfifo {int gpfifo_ready; int cpufifo_ready; int fifo_wrap; int lo_mark; int hi_mark; int rdwt_dst; int wt_ptr; int rd_ptr; int size; int buf_end; int buf_start; } ;
typedef int GXFifoObj ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(GXFifoObj *VAR_2)
{
 struct __gxfifo* VAR_3 = (struct __gxfifo*)VAR_2;
 struct __gxfifo* VAR_4 = (struct __gxfifo*)&VAR_0;

 if(!VAR_1) return;

 FUNC_0();
 FUNC_1();

 VAR_3->buf_start = VAR_4->buf_start;
 VAR_3->buf_end = VAR_4->buf_end;
 VAR_3->size = VAR_4->size;
 VAR_3->rd_ptr = VAR_4->rd_ptr;
 VAR_3->wt_ptr = VAR_4->wt_ptr;
 VAR_3->rdwt_dst = VAR_4->rdwt_dst;
 VAR_3->hi_mark = VAR_4->hi_mark;
 VAR_3->lo_mark = VAR_4->lo_mark;
 VAR_3->fifo_wrap = VAR_4->fifo_wrap;
 VAR_3->cpufifo_ready = VAR_4->cpufifo_ready;
 VAR_3->gpfifo_ready = VAR_4->gpfifo_ready;
}
