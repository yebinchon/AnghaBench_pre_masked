
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buf_end; scalar_t__ buf_ptr; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int,int) ;

void FUNC_3(AVIOContext *VAR_0, int VAR_1, int VAR_2)
{
    while (VAR_2 > 0) {
        int VAR_3 = FUNC_0(VAR_0->buf_end - VAR_0->buf_ptr, VAR_2);
        FUNC_2(VAR_0->buf_ptr, VAR_1, VAR_3);
        VAR_0->buf_ptr += VAR_3;

        if (VAR_0->buf_ptr >= VAR_0->buf_end)
            FUNC_1(VAR_0);

        VAR_2 -= VAR_3;
    }
}
