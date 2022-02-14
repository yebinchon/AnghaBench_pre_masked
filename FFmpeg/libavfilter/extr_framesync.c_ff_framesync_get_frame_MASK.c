
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {unsigned int nb_in; scalar_t__ frame_ready; TYPE_1__* in; } ;
struct TYPE_4__ {scalar_t__ pts_next; int * frame; scalar_t__ have_next; scalar_t__ sync; } ;
typedef TYPE_2__ FFFrameSync ;
typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;

int FUNC_4(FFFrameSync *VAR_2, unsigned VAR_3, AVFrame **VAR_4,
                            unsigned VAR_5)
{
    AVFrame *VAR_6;
    unsigned VAR_7 = 0, VAR_8;
    int64_t VAR_9;
    int VAR_10;

    if (!VAR_2->in[VAR_3].frame) {
        *VAR_4 = ((void*)0);
        return 0;
    }
    VAR_6 = VAR_2->in[VAR_3].frame;
    if (VAR_5) {


        VAR_9 = VAR_2->in[VAR_3].have_next ? VAR_2->in[VAR_3].pts_next : VAR_1;
        for (VAR_8 = 0; VAR_8 < VAR_2->nb_in && !VAR_7; VAR_8++)
            if (VAR_8 != VAR_3 && VAR_2->in[VAR_8].sync &&
                (!VAR_2->in[VAR_8].have_next || VAR_2->in[VAR_8].pts_next < VAR_9))
                VAR_7 = 1;
        if (VAR_7) {
            if (!(VAR_6 = FUNC_1(VAR_6)))
                return FUNC_0(VAR_0);
            if ((VAR_10 = FUNC_3(VAR_6)) < 0) {
                FUNC_2(&VAR_6);
                return VAR_10;
            }
        } else {
            VAR_2->in[VAR_3].frame = ((void*)0);
        }
        VAR_2->frame_ready = 0;
    }
    *VAR_4 = VAR_6;
    return 0;
}
