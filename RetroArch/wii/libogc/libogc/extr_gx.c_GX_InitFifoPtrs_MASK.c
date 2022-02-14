
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct __gxfifo {void* rd_ptr; scalar_t__ size; void* rdwt_dst; void* wt_ptr; } ;
typedef void* s32 ;
typedef int GXFifoObj ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

void FUNC_2(GXFifoObj *VAR_0,void *VAR_1,void *VAR_2)
{
 u32 VAR_3;
 s32 VAR_4;
 struct __gxfifo *VAR_5 = (struct __gxfifo*)VAR_0;

 FUNC_0(VAR_3);
 VAR_4 = VAR_2-VAR_1;
 VAR_5->rd_ptr = (u32)VAR_1;
 VAR_5->wt_ptr = (u32)VAR_2;
 VAR_5->rdwt_dst = VAR_4;
 if(VAR_4<0) {
  VAR_4 += VAR_5->size;
  VAR_5->rd_ptr = VAR_4;
 }
 FUNC_1(VAR_3);
}
