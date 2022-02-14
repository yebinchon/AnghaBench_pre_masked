
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gxfifo {int wt_ptr; int fifo_wrap; int rd_ptr; int rdwt_dst; int size; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_4()
{
 s32 VAR_7;
 u32 VAR_8,VAR_9;
 struct __gxfifo *VAR_10 = (struct __gxfifo*)&VAR_2;
 struct __gxfifo *VAR_11 = (struct __gxfifo*)&VAR_3;

 FUNC_1(VAR_8);

 if(VAR_4) {
  VAR_9 = VAR_6[0x05];
  VAR_10->wt_ptr = (u32)FUNC_0((VAR_9&0x1FFFFFE0));
  VAR_10->fifo_wrap = ((VAR_9&0x20000000)==0x20000000);
 }

 if(VAR_5) {
  VAR_11->rd_ptr = (u32)FUNC_0(FUNC_3(VAR_0[29],16,16)|(VAR_0[28]&0xffff));
  VAR_11->rdwt_dst = (FUNC_3(VAR_0[25],16,16)|(VAR_0[24]&0xffff));
 }

 if(VAR_1) {
  VAR_10->rd_ptr = VAR_11->rd_ptr;
  VAR_10->rdwt_dst = VAR_11->rdwt_dst;
  VAR_11->wt_ptr = VAR_10->wt_ptr;
 } else if(VAR_4) {
  VAR_7 = (VAR_10->wt_ptr - VAR_10->rd_ptr);
  if(VAR_7<0) VAR_10->rdwt_dst = (VAR_10->rdwt_dst + VAR_10->size);
  else VAR_10->rdwt_dst = VAR_7;
 }

 FUNC_2(VAR_8);
}
