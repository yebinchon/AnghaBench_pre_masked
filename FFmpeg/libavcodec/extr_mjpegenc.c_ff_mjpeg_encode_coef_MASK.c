
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t huff_ncode; TYPE_1__* huff_buffer; } ;
struct TYPE_5__ {int mant; } ;
typedef TYPE_2__ MJpegContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_3(MJpegContext *VAR_0, uint8_t VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_2 == 0) {
        FUNC_0(VAR_3 == 0);
        FUNC_2(VAR_0, VAR_1, 0);
    } else {
        VAR_4 = VAR_2;
        if (VAR_2 < 0) {
            VAR_2 = -VAR_2;
            VAR_4--;
        }

        VAR_5 = (VAR_3 << 4) | (FUNC_1(VAR_2) + 1);

        VAR_0->huff_buffer[VAR_0->huff_ncode].mant = VAR_4;
        FUNC_2(VAR_0, VAR_1, VAR_5);
    }
}
