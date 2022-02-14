
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {int frame_ready; unsigned int nb_in; scalar_t__ sync_level; scalar_t__ pts; TYPE_1__* in; scalar_t__ eof; } ;
struct TYPE_6__ {scalar_t__ pts_next; scalar_t__ before; scalar_t__ state; scalar_t__ pts; scalar_t__ sync; scalar_t__ after; int * frame; scalar_t__ have_next; int * frame_next; } ;
typedef TYPE_2__ FFFrameSync ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(FFFrameSync *VAR_7)
{
    unsigned VAR_8;
    int64_t VAR_9;
    int VAR_10;

    while (!(VAR_7->frame_ready || VAR_7->eof)) {
        VAR_10 = FUNC_1(VAR_7);
        if (VAR_10 <= 0)
            return VAR_10;

        VAR_9 = VAR_3;
        for (VAR_8 = 0; VAR_8 < VAR_7->nb_in; VAR_8++)
            if (VAR_7->in[VAR_8].have_next && VAR_7->in[VAR_8].pts_next < VAR_9)
                VAR_9 = VAR_7->in[VAR_8].pts_next;
        if (VAR_9 == VAR_3) {
            FUNC_2(VAR_7);
            break;
        }
        for (VAR_8 = 0; VAR_8 < VAR_7->nb_in; VAR_8++) {
            if (VAR_7->in[VAR_8].pts_next == VAR_9 ||
                (VAR_7->in[VAR_8].before == VAR_1 &&
                 VAR_7->in[VAR_8].state == VAR_4)) {
                FUNC_0(&VAR_7->in[VAR_8].frame);
                VAR_7->in[VAR_8].frame = VAR_7->in[VAR_8].frame_next;
                VAR_7->in[VAR_8].pts = VAR_7->in[VAR_8].pts_next;
                VAR_7->in[VAR_8].frame_next = ((void*)0);
                VAR_7->in[VAR_8].pts_next = VAR_0;
                VAR_7->in[VAR_8].have_next = 0;
                VAR_7->in[VAR_8].state = VAR_7->in[VAR_8].frame ? VAR_6 : VAR_5;
                if (VAR_7->in[VAR_8].sync == VAR_7->sync_level && VAR_7->in[VAR_8].frame)
                    VAR_7->frame_ready = 1;
                if (VAR_7->in[VAR_8].state == VAR_5 &&
                    VAR_7->in[VAR_8].after == VAR_2)
                    FUNC_2(VAR_7);
            }
        }
        if (VAR_7->frame_ready)
            for (VAR_8 = 0; VAR_8 < VAR_7->nb_in; VAR_8++)
                if ((VAR_7->in[VAR_8].state == VAR_4 &&
                     VAR_7->in[VAR_8].before == VAR_2))
                    VAR_7->frame_ready = 0;
        VAR_7->pts = VAR_9;
    }
    return 0;
}
