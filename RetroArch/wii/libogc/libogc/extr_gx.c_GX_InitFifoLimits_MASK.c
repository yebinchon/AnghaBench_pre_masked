
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct __gxfifo {void* lo_mark; void* hi_mark; } ;
typedef int GXFifoObj ;



void FUNC_0(GXFifoObj *VAR_0,u32 VAR_1,u32 VAR_2)
{
 struct __gxfifo *VAR_3 = (struct __gxfifo*)VAR_0;

 VAR_3->hi_mark = VAR_1;
 VAR_3->lo_mark = VAR_2;
}
