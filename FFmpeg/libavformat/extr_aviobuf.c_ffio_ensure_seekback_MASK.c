
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;
struct TYPE_3__ {int max_packet_size; int buffer_size; int * buffer; int * checksum_ptr; int * buf_end; int * buf_ptr; int write_flag; int read_packet; scalar_t__ seekable; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;

int FUNC_5(AVIOContext *VAR_2, int64_t VAR_3)
{
    uint8_t *VAR_4;
    int VAR_5 = VAR_2->max_packet_size ?
                          VAR_2->max_packet_size : VAR_1;
    int VAR_6 = VAR_2->buf_end - VAR_2->buffer;
    ptrdiff_t VAR_7 = VAR_2->checksum_ptr ? VAR_2->checksum_ptr - VAR_2->buffer : -1;

    VAR_3 += VAR_2->buf_ptr - VAR_2->buffer + VAR_5;

    if (VAR_3 < VAR_6 || VAR_2->seekable || !VAR_2->read_packet)
        return 0;
    FUNC_1(!VAR_2->write_flag);

    VAR_4 = FUNC_3(VAR_3);
    if (!VAR_4)
        return FUNC_0(VAR_0);

    FUNC_4(VAR_4, VAR_2->buffer, VAR_6);
    FUNC_2(VAR_2->buffer);
    VAR_2->buf_ptr = VAR_4 + (VAR_2->buf_ptr - VAR_2->buffer);
    VAR_2->buf_end = VAR_4 + (VAR_2->buf_end - VAR_2->buffer);
    VAR_2->buffer = VAR_4;
    VAR_2->buffer_size = VAR_3;
    if (VAR_7 >= 0)
        VAR_2->checksum_ptr = VAR_2->buffer + VAR_7;
    return 0;
}
