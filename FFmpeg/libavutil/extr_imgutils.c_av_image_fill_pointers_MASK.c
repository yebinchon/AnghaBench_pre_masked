
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int data ;
struct TYPE_5__ {int flags; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_4__ {size_t plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int **,int ,int) ;

int FUNC_3(uint8_t *VAR_5[4], enum AVPixelFormat VAR_6, int VAR_7,
                           uint8_t *VAR_8, const int VAR_9[4])
{
    int VAR_10, VAR_11, VAR_12[4] = { 0 }, VAR_13[4] = { 0 };

    const AVPixFmtDescriptor *VAR_14 = FUNC_1(VAR_6);
    FUNC_2(VAR_5 , 0, sizeof(VAR_5[0])*4);

    if (!VAR_14 || VAR_14->flags & VAR_0)
        return FUNC_0(VAR_2);

    VAR_5[0] = VAR_8;
    if (VAR_9[0] > (VAR_4 - 1024) / VAR_7)
        return FUNC_0(VAR_2);
    VAR_12[0] = VAR_9[0] * VAR_7;

    if (VAR_14->flags & VAR_1 ||
        VAR_14->flags & VAR_3) {
        VAR_5[1] = VAR_8 + VAR_12[0];
        return VAR_12[0] + 256 * 4;
    }

    for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
        VAR_13[VAR_14->comp[VAR_10].plane] = 1;

    VAR_11 = VAR_12[0];
    for (VAR_10 = 1; VAR_10 < 4 && VAR_13[VAR_10]; VAR_10++) {
        int VAR_15, VAR_16 = (VAR_10 == 1 || VAR_10 == 2) ? VAR_14->log2_chroma_h : 0;
        VAR_5[VAR_10] = VAR_5[VAR_10-1] + VAR_12[VAR_10-1];
        VAR_15 = (VAR_7 + (1 << VAR_16) - 1) >> VAR_16;
        if (VAR_9[VAR_10] > VAR_4 / VAR_15)
            return FUNC_0(VAR_2);
        VAR_12[VAR_10] = VAR_15 * VAR_9[VAR_10];
        if (VAR_11 > VAR_4 - VAR_12[VAR_10])
            return FUNC_0(VAR_2);
        VAR_11 += VAR_12[VAR_10];
    }

    return VAR_11;
}
