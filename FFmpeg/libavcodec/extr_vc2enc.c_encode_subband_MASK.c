
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ dwtcoef ;
struct TYPE_5__ {int num_x; int num_y; int** qmagic_lut; } ;
typedef TYPE_1__ VC2EncContext ;
struct TYPE_6__ {int width; int height; int const stride; scalar_t__* buf; } ;
typedef TYPE_2__ SubBand ;
typedef int PutBitContext ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int const,int const,int const) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(VC2EncContext *VAR_1, PutBitContext *VAR_2, int VAR_3, int VAR_4,
                           SubBand *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    const int VAR_9 = VAR_5->width * (VAR_3+0) / VAR_1->num_x;
    const int VAR_10 = VAR_5->width * (VAR_3+1) / VAR_1->num_x;
    const int VAR_11 = VAR_5->height * (VAR_4+0) / VAR_1->num_y;
    const int VAR_12 = VAR_5->height * (VAR_4+1) / VAR_1->num_y;

    dwtcoef *VAR_13 = VAR_5->buf + VAR_11 * VAR_5->stride;
    const uint64_t VAR_14 = ((uint64_t)(VAR_1->qmagic_lut[VAR_6][0])) << 2;
    const uint64_t VAR_15 = VAR_1->qmagic_lut[VAR_6][1];
    const int VAR_16 = FUNC_2(VAR_0[VAR_6]) + 32;

    for (VAR_8 = VAR_11; VAR_8 < VAR_12; VAR_8++) {
        for (VAR_7 = VAR_9; VAR_7 < VAR_10; VAR_7++) {
            uint32_t VAR_17 = FUNC_1(FUNC_0(VAR_13[VAR_7]), VAR_14, VAR_15, VAR_16);
            FUNC_4(VAR_2, VAR_17);
            if (VAR_17)
                FUNC_3(VAR_2, 1, VAR_13[VAR_7] < 0);
        }
        VAR_13 += VAR_5->stride;
    }
}
