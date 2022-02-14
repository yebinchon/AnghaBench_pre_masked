
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; scalar_t__ pb; } ;
struct TYPE_8__ {scalar_t__ limit_filesize; int ost_index; TYPE_3__* ctx; } ;
struct TYPE_7__ {size_t file_index; scalar_t__ frame_number; scalar_t__ max_frames; scalar_t__ finished; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ OutputFile ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        OutputStream *VAR_4 = VAR_2[VAR_3];
        OutputFile *VAR_5 = VAR_1[VAR_4->file_index];
        AVFormatContext *VAR_6 = VAR_1[VAR_4->file_index]->ctx;

        if (VAR_4->finished ||
            (VAR_6->pb && FUNC_0(VAR_6->pb) >= VAR_5->limit_filesize))
            continue;
        if (VAR_4->frame_number >= VAR_4->max_frames) {
            int VAR_7;
            for (VAR_7 = 0; VAR_7 < VAR_5->ctx->nb_streams; VAR_7++)
                FUNC_1(VAR_2[VAR_5->ost_index + VAR_7]);
            continue;
        }

        return 1;
    }

    return 0;
}
