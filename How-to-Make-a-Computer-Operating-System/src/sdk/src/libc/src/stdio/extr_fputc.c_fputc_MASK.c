
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int buffer_pos; int buffer_size; int* buffer; int fd; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int*,int) ;

int FUNC_3( int VAR_5, FILE* VAR_6 ) {


    if ( ( ( VAR_6->flags & VAR_2 ) == 0 ) ||
         ( FUNC_0( VAR_6, 0 ) ) ) {
        VAR_6->flags |= VAR_3;
        return VAR_0;
    }



    if ( VAR_6->buffer_pos >= VAR_6->buffer_size - 1 ) {
        if ( FUNC_1( VAR_6 ) ) {
            VAR_6->flags |= VAR_3;
            return VAR_0;
        }
    }

    if ( VAR_6->flags & VAR_4 ) {
        if ( FUNC_2( VAR_6->fd, &VAR_5, 1 ) != 1 ) {
            VAR_6->flags |= VAR_3;
            return VAR_0;
        }

        return 0;
    }

    VAR_6->buffer[ VAR_6->buffer_pos++ ] = VAR_5;

    if ( ( ( VAR_6->flags & VAR_1 ) && ( VAR_5 == '\n' ) ) ||
         ( VAR_6->flags & VAR_4 ) ) {
        if ( FUNC_1( VAR_6 ) ) {
            VAR_6->flags |= VAR_3;
            return VAR_0;
        }
    }

    return 0;
}
