
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int* data; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(AVPacket *VAR_2, uint32_t *VAR_3)
{
    uint32_t VAR_4 = -1;
    int VAR_5, VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_2->size - 4; VAR_5++) {
        VAR_4 = (VAR_4 << 8) + VAR_2->data[VAR_5];
        if (VAR_4 == 0x1b8) {
            VAR_6 = VAR_2->data[VAR_5 + 4] >> 6 & 0x01;
        } else if (VAR_4 == 0x100) {
            int VAR_7 = (VAR_2->data[VAR_5 + 1] << 2) | (VAR_2->data[VAR_5 + 2] >> 6);
            if (!VAR_7 || VAR_6)
                *VAR_3 = VAR_1;
            else
                *VAR_3 = VAR_0;
            break;
        }
    }
    return 0;
}
