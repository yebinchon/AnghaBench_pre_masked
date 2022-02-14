
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * frame; } ;
struct TYPE_7__ {size_t queued; } ;
typedef TYPE_1__ FFFrameQueue ;
typedef TYPE_2__ FFFrameBucket ;
typedef int AVFrame ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

AVFrame *FUNC_3(FFFrameQueue *VAR_0, size_t VAR_1)
{
    FFFrameBucket *VAR_2;

    FUNC_2(VAR_0);
    FUNC_0(VAR_1 < VAR_0->queued);
    VAR_2 = FUNC_1(VAR_0, VAR_1);
    FUNC_2(VAR_0);
    return VAR_2->frame;
}
