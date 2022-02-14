
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hb_work_private_t ;
struct TYPE_10__ {int * private_data; } ;
typedef TYPE_2__ hb_work_object_t ;
struct TYPE_9__ {scalar_t__ stop; int flags; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                        hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;

    if ( VAR_7->s.stop == 0 ) {
        FUNC_0( "dectx3gsub: subtitle packet lacks duration" );
    }

    if (VAR_7->s.flags & VAR_0)
    {
        *VAR_5 = VAR_7;
        *VAR_4 = ((void*)0);
        return VAR_1;
    }

    *VAR_5 = FUNC_1(VAR_6, VAR_7);

    return VAR_2;
}
