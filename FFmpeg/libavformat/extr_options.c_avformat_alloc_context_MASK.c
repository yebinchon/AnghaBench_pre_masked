
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* internal; } ;
struct TYPE_8__ {void* shortest_end; int raw_packet_buffer_remaining_size; void* offset; } ;
typedef TYPE_1__ AVFormatInternal ;
typedef TYPE_2__ AVFormatContext ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

AVFormatContext *FUNC_4(void)
{
    AVFormatContext *VAR_2;
    AVFormatInternal *VAR_3;
    VAR_2 = FUNC_1(sizeof(AVFormatContext));
    if (!VAR_2) return VAR_2;

    VAR_3 = FUNC_2(sizeof(*VAR_3));
    if (!VAR_3) {
        FUNC_0(VAR_2);
        return ((void*)0);
    }
    FUNC_3(VAR_2);
    VAR_2->internal = VAR_3;
    VAR_2->internal->offset = VAR_0;
    VAR_2->internal->raw_packet_buffer_remaining_size = VAR_1;
    VAR_2->internal->shortest_end = VAR_0;

    return VAR_2;
}
