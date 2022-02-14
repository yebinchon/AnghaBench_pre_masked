
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; char* buffer; size_t buffer_size; scalar_t__ buffer_data_size; scalar_t__ buffer_pos; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3( FILE* VAR_1, char* VAR_2, int VAR_3, size_t VAR_4 ) {
    if ( VAR_2 != ((void*)0) ) {
        if ( ( VAR_1->flags & VAR_0 ) == 0 ) {
            FUNC_0( VAR_1->buffer );
        }

        VAR_1->buffer = VAR_2;
        VAR_1->flags |= VAR_0;
    } else {
        char *VAR_5;

        if ( VAR_4 == 0 ) {
            return FUNC_2( VAR_1, VAR_3 );
        }

        VAR_5 = ( char* )FUNC_1( VAR_4 );

        if ( VAR_5 == ((void*)0) ) {
            return -1;
        }

        if ( ( VAR_1->flags & VAR_0 ) == 0 ) {
            FUNC_0( VAR_1->buffer );
        }

        VAR_1->buffer = VAR_5;
        VAR_1->flags &= ~VAR_0;
    }

    VAR_1->buffer_size = VAR_4;
    VAR_1->buffer_pos = 0;
    VAR_1->buffer_data_size = 0;

    return FUNC_2( VAR_1, VAR_3 );
}
