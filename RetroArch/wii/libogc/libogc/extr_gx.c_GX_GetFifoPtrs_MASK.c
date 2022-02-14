
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gxfifo {scalar_t__ wt_ptr; scalar_t__ rd_ptr; } ;
typedef int GXFifoObj ;



void FUNC_0(GXFifoObj *VAR_0,void **VAR_1,void **VAR_2)
{
 struct __gxfifo *VAR_3 = (struct __gxfifo*)VAR_0;
 *VAR_1 = (void*)VAR_3->rd_ptr;
 *VAR_2 = (void*)VAR_3->wt_ptr;
}
