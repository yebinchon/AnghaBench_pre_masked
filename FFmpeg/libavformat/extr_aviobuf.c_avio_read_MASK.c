
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buf_end; int buf_ptr; int buffer_size; int eof_reached; int error; int pos; int bytes_read; int buffer; int update_checksum; scalar_t__ direct; scalar_t__ write_flag; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,int) ;

int FUNC_5(AVIOContext *VAR_1, unsigned char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_5 = VAR_3;
    while (VAR_3 > 0) {
        VAR_4 = FUNC_0(VAR_1->buf_end - VAR_1->buf_ptr, VAR_3);
        if (VAR_4 == 0 || VAR_1->write_flag) {
            if((VAR_1->direct || VAR_3 > VAR_1->buffer_size) && !VAR_1->update_checksum) {

                VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
                if (VAR_4 == VAR_0) {


                    VAR_1->eof_reached = 1;
                    break;
                } else if (VAR_4 < 0) {
                    VAR_1->eof_reached = 1;
                    VAR_1->error= VAR_4;
                    break;
                } else {
                    VAR_1->pos += VAR_4;
                    VAR_1->bytes_read += VAR_4;
                    VAR_3 -= VAR_4;
                    VAR_2 += VAR_4;

                    VAR_1->buf_ptr = VAR_1->buffer;
                    VAR_1->buf_end = VAR_1->buffer ;
                }
            } else {
                FUNC_2(VAR_1);
                VAR_4 = VAR_1->buf_end - VAR_1->buf_ptr;
                if (VAR_4 == 0)
                    break;
            }
        } else {
            FUNC_3(VAR_2, VAR_1->buf_ptr, VAR_4);
            VAR_2 += VAR_4;
            VAR_1->buf_ptr += VAR_4;
            VAR_3 -= VAR_4;
        }
    }
    if (VAR_5 == VAR_3) {
        if (VAR_1->error) return VAR_1->error;
        if (FUNC_1(VAR_1)) return VAR_0;
    }
    return VAR_5 - VAR_3;
}
