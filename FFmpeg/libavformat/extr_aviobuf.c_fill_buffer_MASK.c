
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int max_packet_size; int buffer_size; int eof_reached; int orig_buffer_size; int error; int pos; int bytes_read; int * buf_end; int * buf_ptr; int * buffer; int * checksum_ptr; scalar_t__ read_packet; int checksum; int (* update_checksum ) (int ,int *,int) ;} ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(AVIOContext *VAR_3)
{
    int VAR_4 = VAR_3->max_packet_size ?
                          VAR_3->max_packet_size : VAR_2;
    uint8_t *VAR_5 = VAR_3->buf_end - VAR_3->buffer + VAR_4 < VAR_3->buffer_size ?
                          VAR_3->buf_end : VAR_3->buffer;
    int VAR_6 = VAR_3->buffer_size - (VAR_5 - VAR_3->buffer);


    if (!VAR_3->read_packet && VAR_3->buf_ptr >= VAR_3->buf_end)
        VAR_3->eof_reached = 1;


    if (VAR_3->eof_reached)
        return;

    if (VAR_3->update_checksum && VAR_5 == VAR_3->buffer) {
        if (VAR_3->buf_end > VAR_3->checksum_ptr)
            VAR_3->checksum = VAR_3->update_checksum(VAR_3->checksum, VAR_3->checksum_ptr,
                                             VAR_3->buf_end - VAR_3->checksum_ptr);
        VAR_3->checksum_ptr = VAR_3->buffer;
    }


    if (VAR_3->read_packet && VAR_3->orig_buffer_size && VAR_3->buffer_size > VAR_3->orig_buffer_size && VAR_6 >= VAR_3->orig_buffer_size) {
        if (VAR_5 == VAR_3->buffer && VAR_3->buf_ptr != VAR_5) {
            int VAR_7 = FUNC_1(VAR_3, VAR_3->orig_buffer_size);
            if (VAR_7 < 0)
                FUNC_0(VAR_3, VAR_1, "Failed to decrease buffer size\n");

            VAR_3->checksum_ptr = VAR_5 = VAR_3->buffer;
        }
        VAR_6 = VAR_3->orig_buffer_size;
    }

    VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_6);
    if (VAR_6 == VAR_0) {


        VAR_3->eof_reached = 1;
    } else if (VAR_6 < 0) {
        VAR_3->eof_reached = 1;
        VAR_3->error= VAR_6;
    } else {
        VAR_3->pos += VAR_6;
        VAR_3->buf_ptr = VAR_5;
        VAR_3->buf_end = VAR_5 + VAR_6;
        VAR_3->bytes_read += VAR_6;
    }
}
