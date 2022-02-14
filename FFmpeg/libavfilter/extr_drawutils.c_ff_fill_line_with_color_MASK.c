
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int rgba_map ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {int log2_chroma_w; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 size_t FUNC_2 (size_t,size_t,size_t,int ) ;
 size_t FUNC_3 (size_t,size_t,size_t,int ) ;
 size_t FUNC_4 (size_t,size_t,size_t) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (size_t**) ;
 int FUNC_7 (TYPE_1__ const*) ;
 size_t* FUNC_8 (int) ;
 size_t* FUNC_9 (int,int) ;
 TYPE_1__* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (size_t*,int) ;
 int FUNC_12 (size_t*,size_t*,int) ;
 int FUNC_13 (size_t*,size_t,int) ;

int FUNC_14(uint8_t *VAR_1[4], int VAR_2[4], int VAR_3, uint8_t VAR_4[4],
                            enum AVPixelFormat VAR_5, uint8_t VAR_6[4],
                            int *VAR_7, uint8_t VAR_8[4])
{
    uint8_t VAR_9[4] = {0};
    int VAR_10;
    const AVPixFmtDescriptor *VAR_11 = FUNC_10(VAR_5);
    int VAR_12;

    FUNC_5(VAR_11);

    VAR_12 = VAR_11->log2_chroma_w;

    *VAR_7 = FUNC_11(VAR_9, VAR_5) >= 0;

    if (*VAR_7) {
        VAR_2[0] = (FUNC_7(VAR_11))>>3;
        for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
            VAR_4[VAR_9[VAR_10]] = VAR_6[VAR_10];

        VAR_1[0] = FUNC_9(VAR_3, VAR_2[0]);
        if (!VAR_1[0])
            return FUNC_0(VAR_0);
        for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
            FUNC_12(VAR_1[0] + VAR_10 * VAR_2[0], VAR_4, VAR_2[0]);
        if (VAR_8)
            FUNC_12(VAR_8, VAR_9, sizeof(VAR_9[0]) * 4);
    } else {
        int VAR_13;

        VAR_4[0] = FUNC_4(VAR_6[0], VAR_6[1], VAR_6[2]);
        VAR_4[1] = FUNC_2(VAR_6[0], VAR_6[1], VAR_6[2], 0);
        VAR_4[2] = FUNC_3(VAR_6[0], VAR_6[1], VAR_6[2], 0);
        VAR_4[3] = VAR_6[3];

        for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
            int VAR_14;
            int VAR_15 = (VAR_13 == 1 || VAR_13 == 2) ? VAR_12 : 0;

            VAR_2[VAR_13] = 1;
            VAR_14 = FUNC_1(VAR_3, VAR_15) * VAR_2[VAR_13];
            VAR_1[VAR_13] = FUNC_8(VAR_14);
            if (!VAR_1[VAR_13]) {
                while(VAR_13 && VAR_1[VAR_13-1])
                    FUNC_6(&VAR_1[--VAR_13]);
                return FUNC_0(VAR_0);
            }
            FUNC_13(VAR_1[VAR_13], VAR_4[VAR_13], VAR_14);
        }
    }

    return 0;
}
