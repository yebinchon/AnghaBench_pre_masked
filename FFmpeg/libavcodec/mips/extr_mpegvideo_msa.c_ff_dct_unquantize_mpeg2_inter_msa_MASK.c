
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int * inter_matrix; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int*,int,int const*) ;

void FUNC_1(MpegEncContext *VAR_0,
                                       int16_t *VAR_1, int32_t VAR_2,
                                       int32_t VAR_3)
{
    const uint16_t *VAR_4;
    int32_t VAR_5 = -1;

    VAR_4 = VAR_0->inter_matrix;

    VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);

    VAR_1[63] ^= VAR_5 & 1;
}
