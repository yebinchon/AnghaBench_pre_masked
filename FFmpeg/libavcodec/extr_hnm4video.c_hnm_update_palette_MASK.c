
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int version; int* palette; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(AVCodecContext *VAR_0, uint8_t *VAR_1,
                               uint32_t VAR_2)
{
    Hnm4VideoContext *VAR_3 = VAR_0->priv_data;
    GetByteContext VAR_4;
    uint8_t VAR_5, VAR_6;
    uint16_t VAR_7;
    int VAR_8;

    VAR_8 = VAR_1[7] & 0x80 && VAR_3->version == 0x4a;


    FUNC_2(&VAR_4, VAR_1 + 8, VAR_2 - 8);

    while (FUNC_3(&VAR_4) < VAR_2 - 8) {
        VAR_5 = FUNC_1(&VAR_4);
        VAR_7 = FUNC_1(&VAR_4);
        if (VAR_5 == 255 && VAR_7 == 255)
            break;
        if (VAR_7 == 0)
            VAR_7 = 256;
        VAR_6 = VAR_5;
        while (VAR_7 > 0) {
            VAR_3->palette[VAR_6] = FUNC_0(&VAR_4);
            if (!VAR_8)
                VAR_3->palette[VAR_6] <<= 2;
            VAR_3->palette[VAR_6] |= (0xFFU << 24);
            VAR_7--;
            VAR_6++;
        }
    }
}
