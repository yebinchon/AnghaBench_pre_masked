
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gxfifo {int gpfifo_ready; int cpufifo_ready; int wt_ptr; int buf_end; int buf_start; int fifo_wrap; int rdwt_dst; int rd_ptr; int lo_mark; int hi_mark; int size; } ;
typedef int GXFifoObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_7 () ;

void FUNC_8(GXFifoObj *VAR_8)
{
 u32 VAR_9;
 struct __gxfifo *VAR_10 = (struct __gxfifo*)VAR_8;
 struct __gxfifo *VAR_11 = (struct __gxfifo*)&VAR_5;

 FUNC_1(VAR_9);
 if(!VAR_8) {
  VAR_6 = 0;
  VAR_4 = 0;
  VAR_11->gpfifo_ready = 0;
  VAR_11->cpufifo_ready = 0;
  FUNC_2(VAR_9);
  return;
 }

 VAR_11->buf_start = VAR_10->buf_start;
 VAR_11->buf_end = VAR_10->buf_end;
 VAR_11->size = VAR_10->size;
 VAR_11->hi_mark = VAR_10->hi_mark;
 VAR_11->lo_mark = VAR_10->lo_mark;
 VAR_11->rd_ptr = VAR_10->rd_ptr;
 VAR_11->wt_ptr = VAR_10->wt_ptr;
 VAR_11->rdwt_dst = VAR_10->rdwt_dst;
 VAR_11->fifo_wrap = VAR_10->fifo_wrap;
 VAR_11->gpfifo_ready = VAR_10->gpfifo_ready;
 VAR_11->cpufifo_ready = 1;

 VAR_6 = 1;
 if(FUNC_3()) {
  VAR_4 = 1;
  VAR_11->gpfifo_ready = 1;

  VAR_7[3] = FUNC_0(VAR_11->buf_start);
  VAR_7[4] = FUNC_0(VAR_11->buf_end);
  VAR_7[5] = (VAR_11->wt_ptr&0x1FFFFFE0);

  FUNC_6(VAR_3,VAR_3);
  FUNC_5(VAR_1,VAR_0);
  FUNC_4(VAR_3);

  FUNC_2(VAR_9);
  return;
 }

 if(VAR_4) {
  FUNC_4(VAR_2);
  VAR_4 = 0;
 }

 FUNC_5(VAR_0,VAR_0);

 VAR_7[3] = FUNC_0(VAR_11->buf_start);
 VAR_7[4] = FUNC_0(VAR_11->buf_end);
 VAR_7[5] = (VAR_11->wt_ptr&0x1FFFFFE0);
 FUNC_7();

 FUNC_2(VAR_9);
}
