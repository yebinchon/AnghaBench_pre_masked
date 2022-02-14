
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int maplength; int depth; scalar_t__ type; int length; int p; } ;
typedef TYPE_1__ SUNRASTContext ;
typedef int PutByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(AVCodecContext *VAR_3,
                                      const uint8_t *VAR_4,
                                      const uint32_t *VAR_5,
                                      int VAR_6)
{
    SUNRASTContext *VAR_7 = VAR_3->priv_data;
    const uint8_t *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    if (VAR_7->maplength) {
        PutByteContext VAR_13, VAR_14;
        int VAR_15 = VAR_7->maplength / 3;

        VAR_13 = VAR_7->p;
        FUNC_3(&VAR_7->p, VAR_15);
        VAR_14 = VAR_7->p;
        FUNC_3(&VAR_7->p, VAR_15);

        for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++) {
            uint32_t VAR_16 = VAR_5[VAR_11];

            FUNC_2(&VAR_13, (VAR_16 >> 16) & 0xFF);
            FUNC_2(&VAR_14, (VAR_16 >> 8) & 0xFF);
            FUNC_2(&VAR_7->p, VAR_16 & 0xFF);
        }
    }

    VAR_9 = (VAR_7->depth * VAR_3->width + 7) >> 3;
    VAR_10 = VAR_9 + (VAR_9 & 1);
    VAR_8 = VAR_4;

     if (VAR_7->type == VAR_2) {
        uint8_t VAR_17, VAR_18;
        int VAR_19;

        VAR_8 = VAR_4;



        VAR_11 = 0, VAR_12 = 0;
        VAR_18 = VAR_12 >= VAR_3->height ? 0 : VAR_11 >= VAR_9 ? VAR_8[VAR_9-1] : VAR_8[VAR_11];
        while (VAR_12 < VAR_3->height) {
            VAR_19 = 1;
            VAR_17 = VAR_18;
            VAR_11++;
            if (VAR_11 >= VAR_10) {
                VAR_11 = 0;
                VAR_8 += VAR_6, VAR_12++;
            }

            VAR_18 = VAR_12 >= VAR_3->height ? 0 : VAR_11 >= VAR_9 ? VAR_8[VAR_9-1] : VAR_8[VAR_11];
            while (VAR_18 == VAR_17 && VAR_19 < 256 && VAR_12 < VAR_3->height) {
                VAR_11++;
                VAR_19++;
                if (VAR_11 >= VAR_10) {
                    VAR_11 = 0;
                    VAR_8 += VAR_6, VAR_12++;
                }
                VAR_18 = VAR_12 >= VAR_3->height ? 0 : VAR_11 >= VAR_9 ? VAR_8[VAR_9-1] : VAR_8[VAR_11];
            }

            if (VAR_19 > 2 || VAR_17 == VAR_1) {
                FUNC_2(&VAR_7->p, VAR_1);
                FUNC_2(&VAR_7->p, VAR_19 - 1);
                if (VAR_19 > 1)
                    FUNC_2(&VAR_7->p, VAR_17);
            } else if (VAR_19 == 1) {
                FUNC_2(&VAR_7->p, VAR_17);
            } else
                FUNC_0(&VAR_7->p, (VAR_17 << 8) | VAR_17);
        }


        VAR_7->length = FUNC_4(&VAR_7->p) - 32 - VAR_7->maplength;
    } else {
        for (VAR_12 = 0; VAR_12 < VAR_3->height; VAR_12++) {
            FUNC_1(&VAR_7->p, VAR_8, VAR_9);
            if (VAR_9 < VAR_10)
                FUNC_2(&VAR_7->p, 0);
            VAR_8 += VAR_6;
        }
    }
}
