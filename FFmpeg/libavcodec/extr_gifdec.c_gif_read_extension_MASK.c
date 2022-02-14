
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transparent_color_index; int gce_disposal; int avctx; int gb; } ;
typedef TYPE_1__ GifState ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_4(GifState *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;



    if (FUNC_0(&VAR_2->gb) < 2)
        return VAR_0;

    VAR_3 = FUNC_1(&VAR_2->gb);
    VAR_4 = FUNC_1(&VAR_2->gb);

    FUNC_3(VAR_2->avctx, "ext_code=0x%x len=%d\n", VAR_3, VAR_4);

    switch(VAR_3) {
    case 128:
        if (VAR_4 != 4)
            goto discard_ext;



        if (FUNC_0(&VAR_2->gb) < 5)
            return VAR_0;

        VAR_5 = FUNC_1(&VAR_2->gb);
        FUNC_2(&VAR_2->gb, 2);
        VAR_6 = FUNC_1(&VAR_2->gb);
        if (VAR_5 & 0x01)
            VAR_2->transparent_color_index = VAR_6;
        else
            VAR_2->transparent_color_index = -1;
        VAR_2->gce_disposal = (VAR_5 >> 2) & 0x7;

        FUNC_3(VAR_2->avctx, "gce_flags=%x tcolor=%d disposal=%d\n",
               VAR_5,
               VAR_2->transparent_color_index, VAR_2->gce_disposal);

        if (VAR_2->gce_disposal > 3) {
            VAR_2->gce_disposal = VAR_1;
            FUNC_3(VAR_2->avctx, "invalid value in gce_disposal (%d). Using default value of 0.\n", VAR_4);
        }

        VAR_4 = FUNC_1(&VAR_2->gb);
        break;
    }


 discard_ext:
    while (VAR_4) {

        if (FUNC_0(&VAR_2->gb) < VAR_4 + 1)
            return VAR_0;

        FUNC_2(&VAR_2->gb, VAR_4);
        VAR_4 = FUNC_1(&VAR_2->gb);

        FUNC_3(VAR_2->avctx, "ext_len1=%d\n", VAR_4);
    }
    return 0;
}
