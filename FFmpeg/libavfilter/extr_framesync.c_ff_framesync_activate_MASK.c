
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* on_event ) (TYPE_1__*) ;scalar_t__ frame_ready; scalar_t__ eof; } ;
typedef TYPE_1__ FFFrameSync ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(FFFrameSync *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 < 0)
        return VAR_1;
    if (VAR_0->eof || !VAR_0->frame_ready)
        return 0;
    VAR_1 = VAR_0->on_event(VAR_0);
    if (VAR_1 < 0)
        return VAR_1;
    VAR_0->frame_ready = 0;

    return 0;
}
