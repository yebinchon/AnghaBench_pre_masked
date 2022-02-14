
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int list_current; int merge; } ;
struct TYPE_16__ {TYPE_4__ sanitizer; } ;
struct TYPE_18__ {TYPE_1__ subtitle; } ;
typedef TYPE_3__ sync_stream_t ;
typedef TYPE_4__ subtitle_sanitizer_t ;
struct TYPE_17__ {int flags; scalar_t__ stop; } ;
struct TYPE_20__ {TYPE_2__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_5__* FUNC_6 (TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static hb_buffer_t * FUNC_7(sync_stream_t * VAR_2)
{
    hb_buffer_t * VAR_3;
    hb_buffer_list_t VAR_4;
    subtitle_sanitizer_t * VAR_5 = &VAR_2->subtitle.sanitizer;

    FUNC_1(&VAR_4);

    if (!VAR_5->merge)
    {


        while (FUNC_2(&VAR_5->list_current) > 0)
        {
            VAR_3 = FUNC_3(&VAR_5->list_current);
            if (!(VAR_3->s.flags & VAR_1) &&
                VAR_3->s.stop != VAR_0)
            {
                VAR_3 = FUNC_4(&VAR_5->list_current);
                VAR_3 = FUNC_6(VAR_2, VAR_3);
                FUNC_0(&VAR_4, VAR_3);
            }
            else
            {
                break;
            }
        }
        return FUNC_1(&VAR_4);
    }


    while (FUNC_2(&VAR_5->list_current) > 0)
    {
        VAR_3 = FUNC_3(&VAR_5->list_current);
        if (VAR_3->s.flags & VAR_1)
        {

            VAR_3 = FUNC_4(&VAR_5->list_current);
            FUNC_0(&VAR_4, VAR_3);
            break;
        }

        int VAR_6 = FUNC_5(VAR_5);
        if (VAR_6 < 0)
        {

            break;
        }


        VAR_3 = FUNC_4(&VAR_5->list_current);
        if (VAR_3 != ((void*)0) && !(VAR_3->s.flags & VAR_1))
        {
            VAR_3 = FUNC_6(VAR_2, VAR_3);
            FUNC_0(&VAR_4, VAR_3);
        }
    }

    return FUNC_1(&VAR_4);
}
