
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffered_size; } ;
typedef TYPE_1__ hb_track_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0( hb_track_t * VAR_1 )
{
    if ( VAR_1->buffered_size > VAR_0 )
        return 1;

    return 0;
}
