
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_ungotten; unsigned char unget_buffer; int flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0( int VAR_3, FILE* VAR_4 ) {
    if ( ( VAR_4->has_ungotten ) ||
         ( VAR_3 < 0 ) ||
         ( VAR_3 > 255 ) ) {
        return VAR_0;
    }

    VAR_4->has_ungotten = 1;
    VAR_4->unget_buffer = ( unsigned char )VAR_3;
    VAR_4->flags &= ~( VAR_1 | VAR_2 );

    return VAR_3;
}
