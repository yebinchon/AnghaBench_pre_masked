
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {int nb_elem; TYPE_3__* elem; } ;
struct TYPE_15__ {int cues_parsing_deferred; scalar_t__ segment_start; TYPE_2__* ctx; TYPE_6__ seekhead; } ;
struct TYPE_14__ {int parsed; scalar_t__ pos; } ;
struct TYPE_13__ {scalar_t__ id; scalar_t__ pos; } ;
struct TYPE_12__ {TYPE_1__* pb; } ;
struct TYPE_11__ {int seekable; } ;
typedef TYPE_3__ MatroskaSeekhead ;
typedef TYPE_4__ MatroskaLevel1Element ;
typedef TYPE_5__ MatroskaDemuxContext ;
typedef TYPE_6__ EbmlList ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(MatroskaDemuxContext *VAR_2)
{
    EbmlList *VAR_3 = &VAR_2->seekhead;
    int VAR_4;


    if (!(VAR_2->ctx->pb->seekable & VAR_0))
        return;

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_elem; VAR_4++) {
        MatroskaSeekhead *VAR_5 = VAR_3->elem;
        uint32_t VAR_6 = VAR_5[VAR_4].id;
        int64_t VAR_7 = VAR_5[VAR_4].pos + VAR_2->segment_start;

        MatroskaLevel1Element *VAR_8 = FUNC_0(VAR_2, VAR_6);
        if (!VAR_8 || VAR_8->parsed)
            continue;

        VAR_8->pos = VAR_7;


        if (VAR_6 == VAR_1)
            continue;

        if (FUNC_1(VAR_2, VAR_7) < 0) {

            VAR_2->cues_parsing_deferred = -1;
            break;
        }

        VAR_8->parsed = 1;
    }
}
