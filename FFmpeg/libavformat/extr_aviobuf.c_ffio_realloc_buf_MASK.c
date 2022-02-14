
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int buffer_size; int orig_buffer_size; int * buf_ptr; int * buffer; scalar_t__ write_flag; int * buf_end; int * buf_ptr_max; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int *,int) ;

int FUNC_5(AVIOContext *VAR_1, int VAR_2)
{
    uint8_t *VAR_3;
    int VAR_4;

    if (!VAR_1->buffer_size)
        return FUNC_3(VAR_1, VAR_2);

    if (VAR_2 <= VAR_1->buffer_size)
        return 0;

    VAR_3 = FUNC_2(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);

    VAR_4 = VAR_1->write_flag ? (VAR_1->buf_ptr - VAR_1->buffer) : (VAR_1->buf_end - VAR_1->buf_ptr);
    if (VAR_4 > 0)
        FUNC_4(VAR_3, VAR_1->write_flag ? VAR_1->buffer : VAR_1->buf_ptr, VAR_4);
    FUNC_1(VAR_1->buffer);
    VAR_1->buffer = VAR_3;
    VAR_1->orig_buffer_size = VAR_2;
    VAR_1->buffer_size = VAR_2;
    VAR_1->buf_ptr = VAR_1->write_flag ? (VAR_1->buffer + VAR_4) : VAR_1->buffer;
    if (VAR_1->write_flag)
        VAR_1->buf_ptr_max = VAR_1->buffer + VAR_4;

    VAR_1->buf_end = VAR_1->write_flag ? (VAR_1->buffer + VAR_1->buffer_size) : (VAR_1->buf_ptr + VAR_4);

    return 0;
}
