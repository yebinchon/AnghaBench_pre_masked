
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int bit_buf; int bit_left; int buf_end; int buf_ptr; } ;
typedef TYPE_1__ PutBitContext ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static inline void FUNC_3(PutBitContext *VAR_1, int VAR_2, unsigned int VAR_3)
{
    unsigned int VAR_4;
    int VAR_5;

    FUNC_1(VAR_2 <= 31 && VAR_3 < (1U << VAR_2));

    VAR_4 = VAR_1->bit_buf;
    VAR_5 = VAR_1->bit_left;

    VAR_4 |= VAR_3 << (32 - VAR_5);
    if (VAR_2 >= VAR_5) {
        if (3 < VAR_1->buf_end - VAR_1->buf_ptr) {
            FUNC_0(VAR_1->buf_ptr, VAR_4);
            VAR_1->buf_ptr += 4;
        } else {
            FUNC_2(((void*)0), VAR_0, "Internal error, put_bits buffer too small\n");
            FUNC_1(0);
        }
        VAR_4 = VAR_3 >> VAR_5;
        VAR_5 += 32;
    }
    VAR_5 -= VAR_2;

    VAR_1->bit_buf = VAR_4;
    VAR_1->bit_left = VAR_5;
}
