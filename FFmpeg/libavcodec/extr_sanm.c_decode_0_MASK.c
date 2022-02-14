
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int width; int height; int pitch; int gb; int avctx; int * frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(SANMVideoContext *VAR_2)
{
    uint16_t *VAR_3 = VAR_2->frm0;
    int VAR_4, VAR_5;

    if (FUNC_1(&VAR_2->gb) < VAR_2->width * VAR_2->height * 2) {
        FUNC_0(VAR_2->avctx, VAR_1, "Insufficient data for raw frame.\n");
        return VAR_0;
    }
    for (VAR_5 = 0; VAR_5 < VAR_2->height; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_2->width; VAR_4++)
            VAR_3[VAR_4] = FUNC_2(&VAR_2->gb);
        VAR_3 += VAR_2->pitch;
    }
    return 0;
}
