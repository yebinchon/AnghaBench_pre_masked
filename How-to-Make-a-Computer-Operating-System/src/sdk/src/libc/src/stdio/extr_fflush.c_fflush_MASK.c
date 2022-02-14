
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ buffer_pos; char* buffer; int fd; scalar_t__ buffer_data_size; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__) ;

int FUNC_4( FILE* VAR_4 ) {
    if ( VAR_4->flags & VAR_2 ) {
        int VAR_5;

        VAR_5 = ( int )VAR_4->buffer_pos - ( int )VAR_4->buffer_data_size;

        if ( VAR_5 != 0 ) {
            FUNC_0( VAR_4->fd, VAR_5, VAR_0 );
        }

        VAR_4->buffer_pos = 0;
        VAR_4->buffer_data_size = 0;
    } else {
        if ( VAR_4->buffer_pos > 0 ) {
            if ( FUNC_3( VAR_4->fd, VAR_4->buffer, VAR_4->buffer_pos ) != VAR_4->buffer_pos ) {
    FUNC_3(0,"\nerror file \n",FUNC_2("\nerror file \n"));
                VAR_4->flags |= VAR_3;
                return -1;
            }
   FUNC_1(VAR_4->buffer,0,VAR_1);
            VAR_4->buffer_pos = 0;
        }
    }

    return 0;
}
