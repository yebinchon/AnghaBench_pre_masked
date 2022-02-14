
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {int buffer; } ;
typedef TYPE_1__ QpegContext ;


 int FUNC_0 (int,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void**,int,int) ;

__attribute__((used)) static void FUNC_4(QpegContext *VAR_0, uint8_t *VAR_1,
                              int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7, VAR_8;
    int VAR_9, VAR_10;
    int VAR_11 = 0;
    int VAR_12;

    VAR_12 = VAR_4;
    VAR_4--;
    VAR_1 = VAR_1 + VAR_4 * VAR_2;

    while ((FUNC_2(&VAR_0->buffer) > 0) && (VAR_12 > 0)) {
        VAR_6 = FUNC_1(&VAR_0->buffer);
        VAR_9 = VAR_10 = 0;
        if(VAR_6 == 0xFC)
            break;
        if(VAR_6 >= 0xF8) {
            VAR_7 = FUNC_1(&VAR_0->buffer);
            VAR_8 = FUNC_1(&VAR_0->buffer);
            VAR_9 = ((VAR_6 & 0x7) << 16) + (VAR_7 << 8) + VAR_8 + 2;
        } else if (VAR_6 >= 0xF0) {
            VAR_7 = FUNC_1(&VAR_0->buffer);
            VAR_9 = ((VAR_6 & 0xF) << 8) + VAR_7 + 2;
        } else if (VAR_6 >= 0xE0) {
            VAR_9 = (VAR_6 & 0x1F) + 2;
        } else if (VAR_6 >= 0xC0) {
            VAR_7 = FUNC_1(&VAR_0->buffer);
            VAR_8 = FUNC_1(&VAR_0->buffer);
            VAR_10 = ((VAR_6 & 0x3F) << 16) + (VAR_7 << 8) + VAR_8 + 1;
        } else if (VAR_6 >= 0x80) {
            VAR_7 = FUNC_1(&VAR_0->buffer);
            VAR_10 = ((VAR_6 & 0x7F) << 8) + VAR_7 + 1;
        } else {
            VAR_10 = VAR_6 + 1;
        }


        if(VAR_9) {
            int VAR_13;

            VAR_13 = FUNC_1(&VAR_0->buffer);
            for(VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
                int VAR_14 = FUNC_0(VAR_9 - VAR_5, VAR_3 - VAR_11);
                FUNC_3(VAR_1+VAR_11, VAR_13, VAR_14);
                VAR_11 += VAR_14;
                VAR_5 += VAR_14 - 1;
                if (VAR_11 >= VAR_3) {
                    VAR_11 = 0;
                    VAR_1 -= VAR_2;
                    VAR_12--;
                    while (VAR_9 - VAR_5 > VAR_3 && VAR_12 > 0) {
                        FUNC_3(VAR_1, VAR_13, VAR_3);
                        VAR_1 -= VAR_2;
                        VAR_12--;
                        VAR_5 += VAR_3;
                    }
                    if(VAR_12 <= 0)
                        break;
                }
            }
        } else {
            if (FUNC_2(&VAR_0->buffer) < VAR_10)
                VAR_10 = FUNC_2(&VAR_0->buffer);
            for(VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
                VAR_1[VAR_11++] = FUNC_1(&VAR_0->buffer);
                if (VAR_11 >= VAR_3) {
                    VAR_11 = 0;
                    VAR_1 -= VAR_2;
                    VAR_12--;
                    if(VAR_12 <= 0)
                        break;
                }
            }
        }
    }
}
