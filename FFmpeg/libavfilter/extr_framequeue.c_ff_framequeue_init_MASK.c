
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated; int first_bucket; int * queue; } ;
typedef int FFFrameQueueGlobal ;
typedef TYPE_1__ FFFrameQueue ;



void FUNC_0(FFFrameQueue *VAR_0, FFFrameQueueGlobal *VAR_1)
{
    VAR_0->queue = &VAR_0->first_bucket;
    VAR_0->allocated = 1;
}
