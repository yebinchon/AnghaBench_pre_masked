
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* internal; } ;
struct TYPE_4__ {int raw_packet_buffer_remaining_size; int raw_packet_buffer_end; int raw_packet_buffer; int packet_buffer_end; int packet_buffer; int parse_queue_end; int parse_queue; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_1)
{
    if (!VAR_1->internal)
        return;
    FUNC_0(&VAR_1->internal->parse_queue, &VAR_1->internal->parse_queue_end);
    FUNC_0(&VAR_1->internal->packet_buffer, &VAR_1->internal->packet_buffer_end);
    FUNC_0(&VAR_1->internal->raw_packet_buffer, &VAR_1->internal->raw_packet_buffer_end);

    VAR_1->internal->raw_packet_buffer_remaining_size = VAR_0;
}
