
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pts; } ;
struct TYPE_6__ {int duration; scalar_t__ last_delay; } ;
typedef TYPE_1__ GIFContext ;
typedef TYPE_2__ AVPacket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(GIFContext *VAR_1, AVPacket *VAR_2, AVPacket *VAR_3)
{
    if (VAR_3 && VAR_3->pts != VAR_0)
        VAR_1->duration = FUNC_0(VAR_3->pts - VAR_2->pts);
    else if (!VAR_3 && VAR_1->last_delay >= 0)
        VAR_1->duration = VAR_1->last_delay;

    return VAR_1->duration;
}
