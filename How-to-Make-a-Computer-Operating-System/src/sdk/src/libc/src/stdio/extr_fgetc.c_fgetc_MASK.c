
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int flags; int unget_buffer; size_t buffer_pos; size_t buffer_data_size; unsigned char* buffer; int buffer_size; int fd; scalar_t__ has_ungotten; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,int ) ;

int FUNC_4( FILE* VAR_5 ) {
    unsigned char VAR_6;



    if ( ( ( VAR_5->flags & VAR_2 ) == 0 ) ||
         ( FUNC_0( VAR_5, VAR_1 ) ) ) {
        VAR_5->flags |= VAR_4;
        FUNC_2("EOF ! \n");
        return VAR_0;
    }



    if ( VAR_5->has_ungotten ) {
        VAR_5->has_ungotten = 0;
        FUNC_2("un get ! \n");
        return VAR_5->unget_buffer;
    }



    if ( FUNC_1( VAR_5 ) ) {
  FUNC_2("EOF ! \n");
        return VAR_0;
    }



    if ( VAR_5->buffer_pos >= VAR_5->buffer_data_size ) {
        ssize_t VAR_7;

        VAR_7 = FUNC_3( VAR_5->fd, VAR_5->buffer, VAR_5->buffer_size );
        if ( VAR_7 == 0 ) {
            VAR_5->flags |= VAR_3;
            FUNC_2("EOF ! \n");
            return VAR_0;
        } else if ( VAR_7 < 0 ) {
            VAR_5->flags |= VAR_4;
            FUNC_2("EOF ! \n");
            return VAR_0;
        }
        VAR_5->buffer_pos = 0;
        VAR_5->buffer_data_size = VAR_7;
    }



    VAR_6 = VAR_5->buffer[ VAR_5->buffer_pos ];

    VAR_5->buffer_pos++;

    return VAR_6;
}
