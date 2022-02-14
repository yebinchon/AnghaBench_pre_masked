
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {int flags; int fd; scalar_t__ has_ungotten; scalar_t__ buffer_data_size; scalar_t__ buffer_pos; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2( FILE* VAR_2, off_t VAR_3, int VAR_4 ) {
    FUNC_0( VAR_2 );

    VAR_2->buffer_pos = 0;
    VAR_2->buffer_data_size = 0;
    VAR_2->flags &= ~( VAR_0 | VAR_1 );
    VAR_2->has_ungotten = 0;

    return ( FUNC_1( VAR_2->fd, VAR_3, VAR_4 ) != -1 ? 0 : -1 );
}
