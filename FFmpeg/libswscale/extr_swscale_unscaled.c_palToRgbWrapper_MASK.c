
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_4__ {int srcFormat; int dstFormat; int srcW; scalar_t__ pal_rgb; } ;
typedef TYPE_1__ SwsContext ;


 int VAR_0 ;






 int const VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ,int ) ;
 void FUNC_2 (int const*,int const*,int,int const*) ;
 void FUNC_3 (int const*,int const*,int,int const*) ;
 void FUNC_4 (int const*,int const*,int,int const*) ;
 void FUNC_5 (int const*,int const*,int,int const*) ;
 void FUNC_6 (int const*,int const*,int,int const*) ;
 scalar_t__ FUNC_7 (int const) ;

__attribute__((used)) static int FUNC_8(SwsContext *VAR_2, const uint8_t *VAR_3[], int VAR_4[],
                           int VAR_5, int VAR_6, uint8_t *VAR_7[],
                           int VAR_8[])
{
    const enum AVPixelFormat VAR_9 = VAR_2->srcFormat;
    const enum AVPixelFormat VAR_10 = VAR_2->dstFormat;
    void (*VAR_11)(const uint8_t *VAR_12, uint8_t *VAR_13, int VAR_14,
                 const uint8_t *VAR_15) = ((void*)0);
    int VAR_16;
    uint8_t *VAR_17 = VAR_7[0] + VAR_8[0] * VAR_5;
    const uint8_t *VAR_18 = VAR_3[0];

    if (VAR_9 == VAR_1) {
        switch (VAR_10) {
        case 129 : VAR_11 = FUNC_3; break;
        case 132 : VAR_11 = FUNC_3; break;
        case 131: VAR_11 = FUNC_4; break;
        case 128: VAR_11 = FUNC_4; break;
        case 130 : VAR_11 = FUNC_2; break;
        case 133 : VAR_11 = FUNC_2; break;
        }
    } else if (FUNC_7(VAR_9)) {
        switch (VAR_10) {
        case 129 : VAR_11 = FUNC_6; break;
        case 132 : VAR_11 = FUNC_6; break;
        case 131: VAR_11 = FUNC_6; break;
        case 128: VAR_11 = FUNC_6; break;
        case 130 : VAR_11 = FUNC_5; break;
        case 133 : VAR_11 = FUNC_5; break;
        }
    }

    if (!VAR_11)
        FUNC_1(VAR_2, VAR_0, "internal error %s -> %s converter\n",
               FUNC_0(VAR_9), FUNC_0(VAR_10));
    else {
        for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
            VAR_11(VAR_18, VAR_17, VAR_2->srcW, (uint8_t *) VAR_2->pal_rgb);
            VAR_18 += VAR_4[0];
            VAR_17 += VAR_8[0];
        }
    }

    return VAR_6;
}
