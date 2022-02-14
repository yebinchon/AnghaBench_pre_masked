
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; char unget_buffer; scalar_t__ has_ungotten; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

size_t FUNC_1( void* VAR_3, size_t VAR_4, size_t VAR_5, FILE* VAR_6 ) {
    int VAR_7;
    unsigned long VAR_8, VAR_9;

    VAR_9 = VAR_4 * VAR_5;
    VAR_8 = 0;

    if ( ( VAR_6->flags & VAR_1 ) == 0 ) {
        VAR_6->flags |= VAR_2;
        return 0;
    }

    if ( ( VAR_9 == 0 ) ||
         ( ( VAR_9 / VAR_5 ) != VAR_4 ) ) {
        return 0;
    }

    if ( VAR_6->has_ungotten ) {
        VAR_6->has_ungotten = 0;
        *( char* )VAR_3 = VAR_6->unget_buffer;
        ++VAR_8;

        if ( VAR_9 == 1 ) {
            return 1;
        }
    }

    for ( ; VAR_8 < VAR_9; ++VAR_8 ) {
        VAR_7 = FUNC_0( VAR_6 );

        if ( VAR_7 == VAR_0 ) {
            return VAR_8 / VAR_4;
        } else {
            ( ( unsigned char* )VAR_3 )[ VAR_8 ] = ( unsigned char )VAR_7;
        }
    }

    return VAR_5;
}
