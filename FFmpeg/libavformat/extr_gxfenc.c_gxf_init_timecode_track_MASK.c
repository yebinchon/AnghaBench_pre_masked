
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int media_type; int sample_rate; char media_info; int track_type; int sample_size; int fields; int lines_index; int frame_rate_index; } ;
typedef TYPE_1__ GXFStreamContext ;



__attribute__((used)) static void FUNC_0(GXFStreamContext *VAR_0, GXFStreamContext *VAR_1)
{
    if (!VAR_1)
        return;

    VAR_0->media_type = VAR_1->sample_rate == 60 ? 7 : 8;
    VAR_0->sample_rate = VAR_1->sample_rate;
    VAR_0->media_info = ('T'<<8) | '0';
    VAR_0->track_type = 3;
    VAR_0->frame_rate_index = VAR_1->frame_rate_index;
    VAR_0->lines_index = VAR_1->lines_index;
    VAR_0->sample_size = 16;
    VAR_0->fields = VAR_1->fields;
}
