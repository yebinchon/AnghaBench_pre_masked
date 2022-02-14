
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; int fd; int flags; int buffer_size; scalar_t__ has_ungotten; scalar_t__ buffer_data_size; scalar_t__ buffer_pos; } ;
typedef TYPE_1__ FILE ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

FILE* FUNC_3( int VAR_3, int VAR_4, int VAR_5 ) {
    FILE* VAR_6;

    VAR_6 = ( FILE* )FUNC_2( sizeof( FILE ) );

    if ( VAR_6 == ((void*)0) ) {
        if ( VAR_4 ) {
            FUNC_0( VAR_3 );
        }

        return ((void*)0);
    }

    VAR_6->buffer = ( char* )FUNC_2( VAR_0 );

    if ( VAR_6->buffer == ((void*)0) ) {
        FUNC_1( VAR_6 );

        if ( VAR_4 ) {
              FUNC_0( VAR_3 );
        }

        return ((void*)0);
    }

    VAR_6->fd = VAR_3;
    VAR_6->flags = 0;
    VAR_6->buffer_pos = 0;
    VAR_6->buffer_size = VAR_0;
    VAR_6->buffer_data_size = 0;

    switch ( VAR_5 & 129 ) {
        case 129 : VAR_6->flags |= ( VAR_2 | VAR_1 ); break;
        case 130 : VAR_6->flags |= VAR_1; break;
        case 128 : VAR_6->flags |= VAR_2; break;
        default : break;
    }

    VAR_6->has_ungotten = 0;

    return VAR_6;
}
