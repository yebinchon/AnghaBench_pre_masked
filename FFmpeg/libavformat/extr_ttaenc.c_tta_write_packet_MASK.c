
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {scalar_t__ duration; int size; } ;
struct TYPE_8__ {scalar_t__ frame_size; scalar_t__ last_frame; int nb_samples; int seek_table; int queue_end; int queue; } ;
typedef TYPE_1__ TTAMuxContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    TTAMuxContext *VAR_5 = VAR_3->priv_data;
    int VAR_6;

    VAR_6 = FUNC_2(&VAR_5->queue, &VAR_5->queue_end, VAR_4,
                             VAR_2);
    if (VAR_6 < 0) {
        return VAR_6;
    }

    FUNC_1(VAR_5->seek_table, VAR_4->size);
    VAR_5->nb_samples += VAR_4->duration;

    if (VAR_5->frame_size != VAR_4->duration) {
        if (VAR_5->last_frame) {



            FUNC_0(VAR_3, VAR_1, "Invalid frame durations\n");

            return VAR_0;
        }


        VAR_5->last_frame++;
    }

    return 0;
}
