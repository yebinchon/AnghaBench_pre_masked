
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int num_level1_elems; int cues_parsing_deferred; TYPE_2__* level1_elems; TYPE_1__* ctx; } ;
struct TYPE_8__ {scalar_t__ id; int parsed; int pos; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ MatroskaLevel1Element ;
typedef TYPE_3__ MatroskaDemuxContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(MatroskaDemuxContext *VAR_2) {
    int VAR_3;

    if (VAR_2->ctx->flags & VAR_0)
        return;

    for (VAR_3 = 0; VAR_3 < VAR_2->num_level1_elems; VAR_3++) {
        MatroskaLevel1Element *VAR_4 = &VAR_2->level1_elems[VAR_3];
        if (VAR_4->id == VAR_1 && !VAR_4->parsed) {
            if (FUNC_1(VAR_2, VAR_4->pos) < 0)
                VAR_2->cues_parsing_deferred = -1;
            VAR_4->parsed = 1;
            break;
        }
    }

    FUNC_0(VAR_2);
}
