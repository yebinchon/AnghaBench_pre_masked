
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* prefetch ) (int *,int,int) ;} ;
struct TYPE_5__ {int const*** mv; int mb_x; int mb_y; int const linesize; int const uvlinesize; TYPE_1__ vdsp; scalar_t__ quarter_sample; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int *,int const,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(MpegEncContext *VAR_0, uint8_t **VAR_1, int VAR_2)
{


    const int VAR_3 = VAR_0->quarter_sample ? 2 : 1;
    const int VAR_4 = (VAR_0->mv[VAR_2][0][0] >> VAR_3) + 16 * VAR_0->mb_x + 8;
    const int VAR_5 = (VAR_0->mv[VAR_2][0][1] >> VAR_3) + 16 * VAR_0->mb_y;
    int VAR_6 = VAR_4 + (VAR_5 + (VAR_0->mb_x & 3) * 4) * VAR_0->linesize + 64;

    VAR_0->vdsp.prefetch(VAR_1[0] + VAR_6, VAR_0->linesize, 4);
    VAR_6 = (VAR_4 >> 1) + ((VAR_5 >> 1) + (VAR_0->mb_x & 7)) * VAR_0->uvlinesize + 64;
    VAR_0->vdsp.prefetch(VAR_1[1] + VAR_6, VAR_1[2] - VAR_1[1], 2);
}
