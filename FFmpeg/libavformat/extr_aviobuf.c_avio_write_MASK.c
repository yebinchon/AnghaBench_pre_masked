
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buf_end; scalar_t__ buf_ptr; int update_checksum; scalar_t__ direct; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,unsigned char const*,int) ;
 int FUNC_4 (TYPE_1__*,unsigned char const*,int) ;

void FUNC_5(AVIOContext *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    if (VAR_0->direct && !VAR_0->update_checksum) {
        FUNC_1(VAR_0);
        FUNC_4(VAR_0, VAR_1, VAR_2);
        return;
    }
    while (VAR_2 > 0) {
        int VAR_3 = FUNC_0(VAR_0->buf_end - VAR_0->buf_ptr, VAR_2);
        FUNC_3(VAR_0->buf_ptr, VAR_1, VAR_3);
        VAR_0->buf_ptr += VAR_3;

        if (VAR_0->buf_ptr >= VAR_0->buf_end)
            FUNC_2(VAR_0);

        VAR_1 += VAR_3;
        VAR_2 -= VAR_3;
    }
}
