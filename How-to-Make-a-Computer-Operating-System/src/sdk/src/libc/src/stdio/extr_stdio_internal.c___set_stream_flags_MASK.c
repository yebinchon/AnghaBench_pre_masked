
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1( FILE* VAR_1, int VAR_2 ) {
    if ( ( VAR_1->flags & VAR_0 ) != VAR_2) {
        int VAR_3;

        VAR_3 = FUNC_0( VAR_1 );

        VAR_1->flags = ( VAR_1->flags & ~VAR_0 ) | VAR_2;

        return VAR_3;
    }

    return 0;
}
