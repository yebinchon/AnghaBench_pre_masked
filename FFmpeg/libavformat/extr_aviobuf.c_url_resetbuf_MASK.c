
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write_flag; scalar_t__ buffer; scalar_t__ buf_end; scalar_t__ buffer_size; } ;
typedef TYPE_1__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVIOContext *VAR_2, int VAR_3)
{
    FUNC_0(VAR_3 == VAR_1 || VAR_3 == VAR_0);

    if (VAR_3 & VAR_1) {
        VAR_2->buf_end = VAR_2->buffer + VAR_2->buffer_size;
        VAR_2->write_flag = 1;
    } else {
        VAR_2->buf_end = VAR_2->buffer;
        VAR_2->write_flag = 0;
    }
    return 0;
}
