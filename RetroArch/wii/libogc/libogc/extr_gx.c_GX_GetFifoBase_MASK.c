
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gxfifo {scalar_t__ buf_start; } ;
typedef int GXFifoObj ;



void* FUNC_0(GXFifoObj *VAR_0)
{
 return (void*)((struct __gxfifo*)VAR_0)->buf_start;
}
