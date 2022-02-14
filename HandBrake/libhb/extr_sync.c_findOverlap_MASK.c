
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int list_current; } ;
typedef TYPE_2__ subtitle_sanitizer_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int flags; scalar_t__ start; scalar_t__ stop; } ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_4(subtitle_sanitizer_t *VAR_2,
                                 int64_t VAR_3, int64_t *VAR_4)
{
    hb_buffer_list_t VAR_5;
    hb_buffer_t * VAR_6;
    int64_t VAR_7;

    VAR_7 = VAR_1;
    FUNC_2(&VAR_5);
    VAR_6 = FUNC_3(&VAR_2->list_current);
    while (VAR_6 != ((void*)0))
    {
        if (VAR_6->s.flags & VAR_0)
        {
            break;
        }
        if (VAR_6->s.start > VAR_3)
        {
            if (VAR_7 > VAR_6->s.start)
            {
                *VAR_4 = VAR_6->s.start;
            }
            break;
        }
        if (VAR_6->s.start <= VAR_3 && VAR_3 < VAR_6->s.stop)
        {
            hb_buffer_t * VAR_8 = FUNC_0(VAR_6);
            VAR_8->s.start = VAR_3;
            FUNC_1(&VAR_5, VAR_8);
            if (VAR_7 > VAR_6->s.stop)
            {
                VAR_7 = VAR_6->s.stop;
                *VAR_4 = VAR_7;
            }
        }
        VAR_6 = VAR_6->next;
    }

    return FUNC_2(&VAR_5);
}
