
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {scalar_t__* block_last_index; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static inline int FUNC_0(MpegEncContext *VAR_0, int16_t VAR_1[6][64])
{
    int VAR_2, VAR_3;
    VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
        if (VAR_0->block_last_index[VAR_2] >= 0)
            VAR_3 |= 1 << (5 - VAR_2);
    return VAR_3;
}
