
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int vscroll; int hscroll; TYPE_1__* frame; } ;
struct TYPE_4__ {int* linesize; int** data; } ;
typedef TYPE_2__ CDGraphicsContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(CDGraphicsContext *VAR_5, uint8_t *VAR_6, int VAR_7)
{
    unsigned VAR_8, VAR_9;
    int VAR_10;
    int VAR_11, VAR_12;
    int VAR_13;
    int VAR_14 = VAR_5->frame->linesize[0];
    uint8_t *VAR_15 = VAR_5->frame->data[0];

    VAR_9 = (VAR_6[2] & 0x1F) * VAR_2 + VAR_5->vscroll;
    VAR_8 = (VAR_6[3] & 0x3F) * VAR_3 + VAR_5->hscroll;

    if (VAR_9 > (VAR_0 - VAR_2))
        return FUNC_0(VAR_4);
    if (VAR_8 > (VAR_1 - VAR_3))
        return FUNC_0(VAR_4);

    for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
            if (!((VAR_6[4 + VAR_12] >> (5 - VAR_11)) & 0x01))
                VAR_10 = VAR_6[0] & 0x0F;
            else
                VAR_10 = VAR_6[1] & 0x0F;

            VAR_13 = VAR_8 + VAR_11 + (VAR_14 * (VAR_9 + VAR_12));
            if (VAR_7)
                VAR_10 ^= VAR_15[VAR_13];
            VAR_15[VAR_13] = VAR_10;
        }
    }

    return 0;
}
