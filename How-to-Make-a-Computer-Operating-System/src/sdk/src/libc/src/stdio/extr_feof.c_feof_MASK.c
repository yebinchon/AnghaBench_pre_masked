
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ has_ungotten; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;

int FUNC_0( FILE* VAR_1 ) {
    if ( VAR_1->has_ungotten ) {
        return 0;
    }

    return ( VAR_1->flags & VAR_0 );
}
