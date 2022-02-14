
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tail; int allocated; int * queue; } ;
typedef TYPE_1__ FFFrameQueue ;
typedef int FFFrameBucket ;



__attribute__((used)) static inline FFFrameBucket *FUNC_0(FFFrameQueue *VAR_0, size_t VAR_1)
{
    return &VAR_0->queue[(VAR_0->tail + VAR_1) & (VAR_0->allocated - 1)];
}
