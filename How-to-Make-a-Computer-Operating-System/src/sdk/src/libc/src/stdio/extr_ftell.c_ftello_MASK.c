
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int flags; int buffer_data_size; int buffer_pos; int has_ungotten; int fd; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

off_t FUNC_1( FILE* VAR_4 ) {
    off_t VAR_5;

    if ( VAR_4->flags & ( VAR_2 | VAR_3 ) ) {
        return -1;
    }

    VAR_5 = FUNC_0( VAR_4->fd, 0, VAR_0 );

    if ( VAR_5 == ( off_t )-1 ) {
        return -1;
    }

    if ( VAR_4->flags & VAR_1 ) {
        return VAR_5 - ( VAR_4->buffer_data_size - VAR_4->buffer_pos ) - VAR_4->has_ungotten;
    } else {
        return VAR_5 + VAR_4->buffer_pos;
    }
}
