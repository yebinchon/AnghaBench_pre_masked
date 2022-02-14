
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_3__** streams; int * oformat; TYPE_2__* priv_data; } ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ edit_unit_byte_count; } ;
struct TYPE_6__ {scalar_t__ frame_size; scalar_t__ slice_offset; } ;
typedef TYPE_1__ MXFStreamContext ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_2)
{
    MXFContext *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    if (VAR_2->oformat == &VAR_1) {
        MXFStreamContext *VAR_5 = VAR_2->streams[0]->priv_data;
        VAR_3->edit_unit_byte_count = VAR_5->frame_size;
        return;
    }

    VAR_3->edit_unit_byte_count = VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_2->nb_streams; VAR_4++) {
        AVStream *VAR_6 = VAR_2->streams[VAR_4];
        MXFStreamContext *VAR_7 = VAR_6->priv_data;
        VAR_7->slice_offset = VAR_3->edit_unit_byte_count;
        VAR_3->edit_unit_byte_count += 16 + 4 + VAR_7->frame_size;
        VAR_3->edit_unit_byte_count += FUNC_0(VAR_3->edit_unit_byte_count);
    }
}
