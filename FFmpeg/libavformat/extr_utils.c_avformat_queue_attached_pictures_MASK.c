
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_9__ {int nb_streams; TYPE_2__** streams; TYPE_1__* internal; } ;
struct TYPE_8__ {int disposition; scalar_t__ discard; TYPE_4__ attached_pic; } ;
struct TYPE_7__ {int raw_packet_buffer_end; int raw_packet_buffer; } ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (int *,int *,TYPE_4__*,int ) ;

int FUNC_2(AVFormatContext *VAR_4)
{
    int VAR_5, VAR_6;
    for (VAR_5 = 0; VAR_5 < VAR_4->nb_streams; VAR_5++)
        if (VAR_4->streams[VAR_5]->disposition & VAR_1 &&
            VAR_4->streams[VAR_5]->discard < VAR_0) {
            if (VAR_4->streams[VAR_5]->attached_pic.size <= 0) {
                FUNC_0(VAR_4, VAR_2,
                    "Attached picture on stream %d has invalid size, "
                    "ignoring\n", VAR_5);
                continue;
            }

            VAR_6 = FUNC_1(&VAR_4->internal->raw_packet_buffer,
                                     &VAR_4->internal->raw_packet_buffer_end,
                                     &VAR_4->streams[VAR_5]->attached_pic,
                                     VAR_3);
            if (VAR_6 < 0)
                return VAR_6;
        }
    return 0;
}
