
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; struct TYPE_5__* buffer; int fd; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3( FILE* VAR_1 ) {
    int VAR_2;

    VAR_2 = FUNC_1( VAR_1 );
    VAR_2 |= FUNC_0( VAR_1->fd );

    if ( ( ( VAR_1->flags & VAR_0 ) == 0 ) &&
         ( VAR_1->buffer != ((void*)0) ) ) {
        FUNC_2( VAR_1->buffer );
    }

    FUNC_2( VAR_1 );

    return VAR_2;
}
