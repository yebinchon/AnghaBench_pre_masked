
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1,
                                   uint8_t *VAR_2, int VAR_3,
                                    const uint8_t **VAR_4, int VAR_5,
                                    int VAR_6, uint8_t *VAR_7, int VAR_8)
{
    const uint8_t *VAR_9 = (*VAR_4) + VAR_5;
    int VAR_10;
    int VAR_11;
    int VAR_12 = VAR_8;

    VAR_2 += VAR_8;

    while (*VAR_4 < VAR_9 && VAR_12 < VAR_3) {
        VAR_10 = *(*VAR_4)++;

        if (VAR_10) {
            if (VAR_6 != 1 || VAR_10 != 1) {
                if (VAR_7)
                    *VAR_2++ = VAR_7[VAR_10];
                else
                    *VAR_2++ = VAR_10;
            }
            VAR_12++;
        } else {
            VAR_10 = *(*VAR_4)++;
            VAR_11 = VAR_10 & 0x7f;
            if ((VAR_10 & 0x80) == 0) {
                if (VAR_11 == 0) {
                    return VAR_12;
                }

                VAR_10 = 0;
            } else {
                VAR_10 = *(*VAR_4)++;
            }
            if (VAR_6 == 1 && VAR_10 == 1)
                VAR_12 += VAR_11;
            else {
                if (VAR_7)
                    VAR_10 = VAR_7[VAR_10];
                while (VAR_11-- > 0 && VAR_12 < VAR_3) {
                    *VAR_2++ = VAR_10;
                    VAR_12++;
                }
            }
        }
    }

    if (*(*VAR_4)++)
        FUNC_0(VAR_1, VAR_0, "line overflow\n");

    return VAR_12;
}
