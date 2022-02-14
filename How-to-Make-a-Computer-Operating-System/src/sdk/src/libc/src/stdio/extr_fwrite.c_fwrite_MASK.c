
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_5__ {int flags; unsigned long buffer_size; int fd; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (unsigned char const,TYPE_1__*) ;
 size_t FUNC_2 (int ,void const*,unsigned long) ;

size_t FUNC_3( const void* VAR_3, size_t VAR_4, size_t VAR_5, FILE* VAR_6 ) {
    ssize_t VAR_7;
    unsigned long VAR_8=VAR_4 * VAR_5;
    long VAR_9;

    if ( ( VAR_6->flags & VAR_0 ) == 0 ) {
        VAR_6->flags |= VAR_1;
        return 0;
    }

    if ( ( VAR_5 == 0 ) ||
         ( ( VAR_8 / VAR_5 ) != VAR_4 ) ) {
        return 0;
    }

    if ( ( VAR_8 > VAR_6->buffer_size ) || ( VAR_6->flags & VAR_2 ) ) {
        if ( FUNC_0( VAR_6 ) ) {
            return 0;
        }

        VAR_7 = FUNC_2( VAR_6->fd, VAR_3, VAR_8 );
    } else {
        register const unsigned char* VAR_10 = VAR_3;

        for ( VAR_9 = VAR_8; VAR_9 > 0; --VAR_9, ++VAR_10 ) {
            if ( FUNC_1( *VAR_10, VAR_6 ) ) {
                VAR_7 = VAR_8 - VAR_9;
                goto abort;
            }
        }

        VAR_7 = VAR_8;
    }

    if ( VAR_7 < 0 ) {
        VAR_6->flags |= VAR_1;
        return 0;
    }

abort:
    return VAR_4 ? VAR_7 / VAR_4 : 0;
}
