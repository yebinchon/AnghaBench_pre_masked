
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int width; int height; int* current; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*) ;

__attribute__((used)) static void FUNC_6(AVCodecContext *VAR_1, uint8_t *VAR_2,
                              uint32_t VAR_3)
{
    Hnm4VideoContext *VAR_4 = VAR_1->priv_data;
    GetByteContext VAR_5;
    uint32_t VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
    uint16_t VAR_9;
    int32_t VAR_10;
    int VAR_11 = 0;

    FUNC_3(&VAR_5, VAR_2, VAR_3);

    while (FUNC_4(&VAR_5) < VAR_3) {
        if (FUNC_5(&VAR_5, &VAR_6, &VAR_11)) {
            if (VAR_7 >= VAR_4->width * VAR_4->height) {
                FUNC_0(VAR_1, VAR_0,
                       "Attempting to write out of bounds\n");
                break;
            }
            VAR_4->current[VAR_7++] = FUNC_1(&VAR_5);
        } else {
            if (FUNC_5(&VAR_5, &VAR_6, &VAR_11)) {
                VAR_9 = FUNC_2(&VAR_5);
                VAR_8 = VAR_9 & 0x07;
                VAR_10 = (VAR_9 >> 3) - 0x2000;
                if (!VAR_8)
                    VAR_8 = FUNC_1(&VAR_5);
                if (!VAR_8)
                    return;
            } else {
                VAR_8 = FUNC_5(&VAR_5, &VAR_6, &VAR_11) * 2;
                VAR_8 += FUNC_5(&VAR_5, &VAR_6, &VAR_11);
                VAR_10 = FUNC_1(&VAR_5) - 0x0100;
            }
            VAR_8 += 2;
            VAR_10 += VAR_7;
            if (VAR_10 < 0 || VAR_10 + VAR_8 >= VAR_4->width * VAR_4->height) {
                FUNC_0(VAR_1, VAR_0, "Attempting to read out of bounds\n");
                break;
            } else if (VAR_7 + VAR_8 >= VAR_4->width * VAR_4->height) {
                FUNC_0(VAR_1, VAR_0,
                       "Attempting to write out of bounds\n");
                break;
            }
            while (VAR_8--) {
                VAR_4->current[VAR_7++] = VAR_4->current[VAR_10++];
            }
        }
    }
}
