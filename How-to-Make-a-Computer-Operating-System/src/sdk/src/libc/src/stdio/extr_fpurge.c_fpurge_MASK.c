
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ buffer_pos; scalar_t__ buffer_data_size; scalar_t__ has_ungotten; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0( FILE* VAR_2 ) {
    if ( VAR_2->flags & VAR_1 ) {
        return 0;
    }

    VAR_2->has_ungotten = 0;

    if ( VAR_2->flags & VAR_0 ) {
        VAR_2->buffer_pos = VAR_2->buffer_data_size;
    } else {
        VAR_2->buffer_pos = 0;
    }

    return 0;
}
