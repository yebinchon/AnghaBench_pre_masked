
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ device; } ;
struct TYPE_7__ {int top; int bottom; int left; int right; } ;
struct TYPE_6__ {int** outData; } ;
typedef TYPE_1__ JpegDev ;
typedef TYPE_2__ JRECT ;
typedef TYPE_3__ JDEC ;



__attribute__((used)) static uint16_t FUNC_0(JDEC *VAR_0, void *VAR_1, JRECT *VAR_2)
{
    JpegDev *VAR_3 = (JpegDev *)VAR_0->device;
    uint8_t *VAR_4 = (uint8_t *)VAR_1;
    for (int VAR_5 = VAR_2->top; VAR_5 <= VAR_2->bottom; VAR_5++) {
        for (int VAR_6 = VAR_2->left; VAR_6 <= VAR_2->right; VAR_6++) {

            uint16_t VAR_7 = 0;
            VAR_7 |= ((VAR_4[0] >> 3) << 11);
            VAR_7 |= ((VAR_4[1] >> 2) << 5);
            VAR_7 |= ((VAR_4[2] >> 3) << 0);

            VAR_7 = (VAR_7 >> 8) | (VAR_7 << 8);
            VAR_3->outData[VAR_5][VAR_6] = VAR_7;
            VAR_4 += 3;
        }
    }
    return 1;
}
