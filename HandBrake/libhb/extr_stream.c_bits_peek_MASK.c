
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int val; int* buf; } ;
typedef TYPE_1__ bitbuf_t ;


 int* VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(bitbuf_t *VAR_1, int VAR_2)
{
    unsigned int VAR_3;
    int VAR_4 = 32 - (VAR_1->pos & 31);

    if (VAR_2 < VAR_4)
    {
        VAR_3 = (VAR_1->val >> (VAR_4 - VAR_2)) & VAR_0[VAR_2];
    }
    else
    {
        VAR_3 = (VAR_1->val & VAR_0[VAR_4]) << (VAR_2 - VAR_4);
        int VAR_5 = VAR_1->pos + VAR_4;
        VAR_2 -= VAR_4;


        if (VAR_2 > 0)
        {
            int VAR_6 = VAR_5 >> 3;
            int VAR_7 = (VAR_1->buf[VAR_6] << 24) |
                        (VAR_1->buf[VAR_6 + 1] << 16) |
                        (VAR_1->buf[VAR_6 + 2] << 8) |
                         VAR_1->buf[VAR_6 + 3];
            VAR_3 |= (VAR_7 >> (32 - VAR_2)) & VAR_0[VAR_2];
        }
    }

    return VAR_3;
}
