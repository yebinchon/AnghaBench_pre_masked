
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef unsigned int int16_t ;
struct TYPE_5__ {int (* clear_block ) (unsigned int*) ;} ;
struct TYPE_6__ {unsigned int* last_dc; int avctx; TYPE_1__ bdsp; } ;
typedef TYPE_2__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (unsigned int*) ;

__attribute__((used)) static int FUNC_3(MJpegDecodeContext *VAR_2, int16_t *VAR_3,
                                 int VAR_4, int VAR_5,
                                 uint16_t *VAR_6, int VAR_7)
{
    unsigned VAR_8;
    VAR_2->bdsp.clear_block(VAR_3);
    VAR_8 = FUNC_1(VAR_2, VAR_5);
    if (VAR_8 == 0xfffff) {
        FUNC_0(VAR_2->avctx, VAR_1, "error dc\n");
        return VAR_0;
    }
    VAR_8 = (VAR_8 * (VAR_6[0] << VAR_7)) + VAR_2->last_dc[VAR_4];
    VAR_2->last_dc[VAR_4] = VAR_8;
    VAR_3[0] = VAR_8;
    return 0;
}
