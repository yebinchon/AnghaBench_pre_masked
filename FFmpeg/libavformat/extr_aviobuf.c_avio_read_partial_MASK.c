
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pos; int buf_end; int buf_ptr; int buffer; int error; scalar_t__ write_flag; scalar_t__ read_packet; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int) ;

int FUNC_4(AVIOContext *VAR_1, unsigned char *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_3 < 0)
        return -1;

    if (VAR_1->read_packet && VAR_1->write_flag) {
        VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
        if (VAR_4 > 0)
            VAR_1->pos += VAR_4;
        return VAR_4;
    }

    VAR_4 = VAR_1->buf_end - VAR_1->buf_ptr;
    if (VAR_4 == 0) {






        VAR_1->buf_end = VAR_1->buf_ptr = VAR_1->buffer;
        FUNC_1(VAR_1);
        VAR_4 = VAR_1->buf_end - VAR_1->buf_ptr;
    }
    if (VAR_4 > VAR_3)
        VAR_4 = VAR_3;
    FUNC_2(VAR_2, VAR_1->buf_ptr, VAR_4);
    VAR_1->buf_ptr += VAR_4;
    if (!VAR_4) {
        if (VAR_1->error) return VAR_1->error;
        if (FUNC_0(VAR_1)) return VAR_0;
    }
    return VAR_4;
}
