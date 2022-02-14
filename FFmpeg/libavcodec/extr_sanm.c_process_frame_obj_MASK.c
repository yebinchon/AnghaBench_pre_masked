
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; int avctx; int gb; } ;
typedef TYPE_1__ SANMVideoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(SANMVideoContext *VAR_4)
{
    uint16_t VAR_5 = FUNC_4(&VAR_4->gb);
    uint16_t VAR_6 = FUNC_4(&VAR_4->gb);
    uint16_t VAR_7 = FUNC_4(&VAR_4->gb);
    uint16_t VAR_8 = FUNC_4(&VAR_4->gb);
    uint16_t VAR_9 = FUNC_4(&VAR_4->gb);

    if (!VAR_8 || !VAR_9) {
        FUNC_2(VAR_4->avctx, VAR_2, "Dimensions are invalid.\n");
        return VAR_0;
    }

    if (VAR_4->width < VAR_6 + VAR_8 || VAR_4->height < VAR_7 + VAR_9) {
        int VAR_10 = FUNC_6(VAR_4->avctx, FUNC_1(VAR_6 + VAR_8, VAR_4->width),
                                    FUNC_1(VAR_7 + VAR_9, VAR_4->height));
        if (VAR_10 < 0)
            return VAR_10;
        FUNC_8(VAR_4, FUNC_1(VAR_6 + VAR_8, VAR_4->width),
                   FUNC_1(VAR_7 + VAR_9, VAR_4->height));
        if (FUNC_7(VAR_4)) {
            FUNC_2(VAR_4->avctx, VAR_2, "Error resizing buffers.\n");
            return FUNC_0(VAR_3);
        }
    }
    FUNC_5(&VAR_4->gb, 4);

    switch (VAR_5) {
    case 1:
    case 3:
        return FUNC_9(VAR_4, VAR_7, VAR_6, VAR_8, VAR_9);
    case 37:
        return FUNC_10(VAR_4, VAR_7, VAR_6, VAR_8, VAR_9);
    case 47:
        return FUNC_11(VAR_4, VAR_7, VAR_6, VAR_8, VAR_9);
    default:
        FUNC_3(VAR_4->avctx, "Subcodec %d", VAR_5);
        return VAR_1;
    }
}
