
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int hdr_state; int pic_state; scalar_t__ color_type; int* palette; int bit_depth; int* transparent_color_be; int has_trns; int gb; } ;
typedef TYPE_1__ PNGDecContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_8, PNGDecContext *VAR_9,
                             uint32_t VAR_10)
{
    int VAR_11, VAR_12;

    if (!(VAR_9->hdr_state & VAR_6)) {
        FUNC_1(VAR_8, VAR_1, "trns before IHDR\n");
        return VAR_0;
    }

    if (VAR_9->pic_state & VAR_5) {
        FUNC_1(VAR_8, VAR_1, "trns after IDAT\n");
        return VAR_0;
    }

    if (VAR_9->color_type == VAR_3) {
        if (VAR_10 > 256 || !(VAR_9->hdr_state & VAR_7))
            return VAR_0;

        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            unsigned VAR_13 = FUNC_4(&VAR_9->gb);
            VAR_9->palette[VAR_12] = (VAR_9->palette[VAR_12] & 0x00ffffff) | (VAR_13 << 24);
        }
    } else if (VAR_9->color_type == VAR_2 || VAR_9->color_type == VAR_4) {
        if ((VAR_9->color_type == VAR_2 && VAR_10 != 2) ||
            (VAR_9->color_type == VAR_4 && VAR_10 != 6) ||
            VAR_9->bit_depth == 1)
            return VAR_0;

        for (VAR_12 = 0; VAR_12 < VAR_10 / 2; VAR_12++) {

            VAR_11 = FUNC_2(FUNC_3(&VAR_9->gb), VAR_9->bit_depth);

            if (VAR_9->bit_depth > 8)
                FUNC_0(&VAR_9->transparent_color_be[2 * VAR_12], VAR_11);
            else
                VAR_9->transparent_color_be[VAR_12] = VAR_11;
        }
    } else {
        return VAR_0;
    }

    FUNC_5(&VAR_9->gb, 4);
    VAR_9->has_trns = 1;

    return 0;
}
