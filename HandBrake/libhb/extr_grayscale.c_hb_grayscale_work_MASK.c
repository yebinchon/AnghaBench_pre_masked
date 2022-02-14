
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hb_filter_private_t ;
struct TYPE_9__ {int * private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
struct TYPE_8__ {int flags; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1( hb_filter_object_t * VAR_3,
                              hb_buffer_t ** VAR_4,
                              hb_buffer_t ** VAR_5 )
{
    hb_filter_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;

    *VAR_4 = ((void*)0);
    if (VAR_7->s.flags & VAR_0)
    {
        *VAR_5 = VAR_7;
        return VAR_1;
    }


    FUNC_0(VAR_6, VAR_7);

    *VAR_5 = VAR_7;

    return VAR_2;
}
