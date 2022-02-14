
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* subtitle; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_11__ {int flags; } ;
struct TYPE_13__ {TYPE_2__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_10__ {scalar_t__ source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__**) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (char*) ;

int FUNC_3( hb_work_object_t * VAR_4, hb_buffer_t ** VAR_5,
                hb_buffer_t ** VAR_6 )
{
    hb_buffer_t * VAR_7 = *VAR_5;

    if (VAR_4->subtitle->source != VAR_3)
    {

        FUNC_2("encvobsub: invalid subtitle source");
        FUNC_0( VAR_5 );
        *VAR_6 = FUNC_1();
    }
    if (VAR_7->s.flags & VAR_0)
    {

        *VAR_6 = VAR_7;
        *VAR_5 = ((void*)0);
        return VAR_1;
    }





    if (VAR_6)
    {
        *VAR_6 = VAR_7;
        *VAR_5 = ((void*)0);
    }

    return VAR_2;
}
