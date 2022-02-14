
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gxfifo {int cpufifo_ready; int gpfifo_ready; int rd_ptr; int wt_ptr; int rdwt_dst; int lo_mark; int hi_mark; int buf_end; int buf_start; int fifo_wrap; int size; } ;
typedef int GXFifoObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;

void FUNC_12(GXFifoObj *VAR_8)
{
 u32 VAR_9;
 struct __gxfifo *VAR_10 = (struct __gxfifo*)VAR_8;
 struct __gxfifo *VAR_11 = (struct __gxfifo*)&VAR_6;

 FUNC_1(VAR_9);
 FUNC_7();
 FUNC_9(VAR_0,VAR_0);

 if(!VAR_8) {
  VAR_7 = 0;
  VAR_5 = 0;
  VAR_11->cpufifo_ready = 0;
  VAR_11->gpfifo_ready = 0;
  FUNC_6(VAR_2);
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
 VAR_11->cpufifo_ready = VAR_10->cpufifo_ready;
 VAR_11->gpfifo_ready = 1;
 VAR_7 = 1;


 VAR_4[16] = FUNC_3(FUNC_0(VAR_11->buf_start),0,16);
 VAR_4[17] = FUNC_4(FUNC_0(VAR_11->buf_start),16,16);


 VAR_4[18] = FUNC_3(FUNC_0(VAR_11->buf_end),0,16);
 VAR_4[19] = FUNC_4(FUNC_0(VAR_11->buf_end),16,16);


 VAR_4[20] = FUNC_3(VAR_11->hi_mark,0,16);
 VAR_4[21] = FUNC_4(VAR_11->hi_mark,16,16);


 VAR_4[22] = FUNC_3(VAR_11->lo_mark,0,16);
 VAR_4[23] = FUNC_4(VAR_11->lo_mark,16,16);


 VAR_4[24] = FUNC_3(VAR_11->rdwt_dst,0,16);
 VAR_4[25] = FUNC_4(VAR_11->rdwt_dst,16,16);


 VAR_4[26] = FUNC_3(FUNC_0(VAR_11->wt_ptr),0,16);
 VAR_4[27] = FUNC_4(FUNC_0(VAR_11->wt_ptr),16,16);


 VAR_4[28] = FUNC_3(FUNC_0(VAR_11->rd_ptr),0,16);
 VAR_4[29] = FUNC_4(FUNC_0(VAR_11->rd_ptr),16,16);
 FUNC_11();

 if(FUNC_5()) {
  VAR_5 = 1;
  VAR_11->cpufifo_ready = 1;
  FUNC_9(VAR_1,VAR_0);
  FUNC_6(VAR_3);
 } else {
  VAR_5 = 0;
  VAR_11->cpufifo_ready = 0;
  FUNC_9(VAR_0,VAR_0);
  FUNC_6(VAR_2);
 }

 FUNC_10(VAR_3,VAR_3);
 FUNC_8();
 FUNC_2(VAR_9);
}
