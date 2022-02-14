
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int list_current; } ;
typedef TYPE_2__ subtitle_sanitizer_t ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {int flags; scalar_t__ start; scalar_t__ stop; } ;
struct TYPE_18__ {TYPE_1__ s; struct TYPE_18__* next; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(subtitle_sanitizer_t *VAR_3)
{
    hb_buffer_t * VAR_4 = ((void*)0);
    hb_buffer_t * VAR_5, * VAR_6;

    VAR_5 = FUNC_4(&VAR_3->list_current);
    if (VAR_5 != ((void*)0) && (VAR_5->s.flags & VAR_1))
    {

        return 0;
    }
    if (VAR_5 == ((void*)0) ||
        VAR_5->s.start == VAR_0 || VAR_5->s.stop == VAR_0)
    {

        return -1;
    }
    VAR_6 = VAR_5->next;
    if (VAR_6 != ((void*)0) && VAR_5->s.stop <= VAR_6->s.start)
    {

        return 0;
    }





    while (VAR_6 != ((void*)0) &&
           VAR_6->s.start < VAR_5->s.stop && !(VAR_6->s.flags & VAR_1))
    {
        if (VAR_6->s.start == VAR_0 || VAR_6->s.stop == VAR_0)
        {

            return -1;
        }
        VAR_6 = VAR_6->next;
    }
    if (VAR_6 == ((void*)0))
    {

        return -1;
    }

    hb_buffer_list_t VAR_7;
    int64_t VAR_8, VAR_9, VAR_10;

    if (VAR_6->s.flags & VAR_1)
    {
        VAR_10 = VAR_2;
    }
    else
    {
        VAR_10 = VAR_6->s.start;
    }

    FUNC_3(&VAR_7);
    VAR_5 = FUNC_4(&VAR_3->list_current);
    VAR_9 = VAR_8 = VAR_5->s.start;
    while (VAR_8 < VAR_10)
    {
        hb_buffer_t * VAR_11 = FUNC_0(VAR_3, VAR_8, &VAR_9);
        if (VAR_11 == ((void*)0))
        {
            break;
        }
        VAR_5 = VAR_11;
        VAR_4 = ((void*)0);
        while (VAR_5 != ((void*)0))
        {
            hb_buffer_t * VAR_12;

            VAR_12 = FUNC_7(VAR_4, VAR_5);
            FUNC_1(&VAR_4);
            VAR_4 = VAR_12;

            VAR_5 = VAR_5->next;
        }
        VAR_4->s.stop = VAR_9;
        FUNC_1(&VAR_11);
        FUNC_2(&VAR_7, VAR_4);
        VAR_8 = VAR_9;


        VAR_5 = FUNC_4(&VAR_3->list_current);
        while (VAR_5 != ((void*)0) && VAR_5->s.start < VAR_9 &&
               !(VAR_5->s.flags & VAR_1))
        {
            hb_buffer_t * VAR_13 = VAR_5->next;
            if (VAR_5->s.stop <= VAR_9)
            {

                FUNC_6(&VAR_3->list_current, VAR_5);
                FUNC_1(&VAR_5);
            }
            else
            {
                VAR_5->s.start = VAR_9;
            }
            VAR_5 = VAR_13;
        }
    }
    VAR_4 = FUNC_3(&VAR_7);
    FUNC_5(&VAR_3->list_current, VAR_4);

    return 0;
}
