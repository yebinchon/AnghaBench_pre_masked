
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ this_packet_offset; scalar_t__ next_packet_offset; int this_packet_size; int next_packet_size; int audio_track_count; } ;
typedef TYPE_1__ XMVDemuxContext ;
struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    XMVDemuxContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    int VAR_6;

    if (VAR_4->this_packet_offset == VAR_4->next_packet_offset)
        return VAR_0;


    VAR_4->this_packet_offset = VAR_4->next_packet_offset;
    if (FUNC_1(VAR_5, VAR_4->this_packet_offset, VAR_2) != VAR_4->this_packet_offset)
        return FUNC_0(VAR_1);


    VAR_4->this_packet_size = VAR_4->next_packet_size;
    if (VAR_4->this_packet_size < (12 + VAR_4->audio_track_count * 4))
        return FUNC_0(VAR_1);


    VAR_6 = FUNC_2(VAR_3);
    if (VAR_6)
        return VAR_6;


    VAR_4->next_packet_offset = VAR_4->this_packet_offset + VAR_4->this_packet_size;

    return 0;
}
