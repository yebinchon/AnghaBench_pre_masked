
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gxfifo {int buf_start; int buf_end; int size; scalar_t__ rdwt_dst; } ;
typedef int GXFifoObj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *,void*,void*) ;

void FUNC_2(GXFifoObj *VAR_2,void *VAR_3,u32 VAR_4)
{
 struct __gxfifo *VAR_5 = (struct __gxfifo*)VAR_2;

 if(!VAR_5 || VAR_4<VAR_1) return;

 VAR_5->buf_start = (u32)VAR_3;
 VAR_5->buf_end = (u32)VAR_3 + VAR_4 - 4;
 VAR_5->size = VAR_4;
 VAR_5->rdwt_dst = 0;

 FUNC_0(VAR_2,(VAR_4-VAR_0),((VAR_4>>1)&0x7fffffe0));
 FUNC_1(VAR_2,VAR_3,VAR_3);
}
