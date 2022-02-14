
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int orig_buffer_size; int buffer_size; scalar_t__ write_flag; int * buf_ptr_max; int * buf_ptr; int * buffer; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(AVIOContext *VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    VAR_5 = FUNC_2(VAR_4);
    if (!VAR_5)
        return FUNC_0(VAR_2);

    FUNC_1(VAR_3->buffer);
    VAR_3->buffer = VAR_5;
    VAR_3->orig_buffer_size =
    VAR_3->buffer_size = VAR_4;
    VAR_3->buf_ptr = VAR_3->buf_ptr_max = VAR_5;
    FUNC_3(VAR_3, VAR_3->write_flag ? VAR_1 : VAR_0);
    return 0;
}
