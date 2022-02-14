
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t prim_dmix_type; size_t audio_mode; int* prim_dmix_coeff; int avctx; int gb; int lfe_present; scalar_t__ prim_dmix_embedded; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int* VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *,int,int) ;
 int* VAR_6 ;
 int* VAR_7 ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(DCACoreDecoder *VAR_8)
{
    int VAR_9;

    if (FUNC_5(&VAR_8->gb) < 0)
        return VAR_0;


    FUNC_7(&VAR_8->gb, 6);


    FUNC_8(&VAR_8->gb, -FUNC_4(&VAR_8->gb) & 31);


    if (FUNC_6(&VAR_8->gb, 32) != VAR_3) {
        FUNC_0(VAR_8->avctx, VAR_1, "Invalid auxiliary data sync word\n");
        return VAR_0;
    }

    VAR_9 = FUNC_4(&VAR_8->gb);


    if (FUNC_3(&VAR_8->gb))
        FUNC_8(&VAR_8->gb, 47);


    if ((VAR_8->prim_dmix_embedded = FUNC_3(&VAR_8->gb))) {
        int VAR_10, VAR_11, VAR_12;


        VAR_8->prim_dmix_type = FUNC_2(&VAR_8->gb, 3);
        if (VAR_8->prim_dmix_type >= VAR_2) {
            FUNC_0(VAR_8->avctx, VAR_1, "Invalid primary channel set downmix type\n");
            return VAR_0;
        }


        VAR_11 = VAR_6[VAR_8->prim_dmix_type];
        VAR_12 = VAR_5[VAR_8->audio_mode] + !!VAR_8->lfe_present;


        for (VAR_10 = 0; VAR_10 < VAR_11 * VAR_12; VAR_10++) {
            int VAR_13 = FUNC_2(&VAR_8->gb, 9);
            int VAR_14 = (VAR_13 >> 8) - 1;
            unsigned int VAR_15 = VAR_13 & 0xff;
            if (VAR_15 >= VAR_4) {
                FUNC_0(VAR_8->avctx, VAR_1, "Invalid downmix coefficient index\n");
                return VAR_0;
            }
            VAR_8->prim_dmix_coeff[VAR_10] = (VAR_7[VAR_15] ^ VAR_14) - VAR_14;
        }
    }


    FUNC_7(&VAR_8->gb, -FUNC_4(&VAR_8->gb) & 7);


    FUNC_7(&VAR_8->gb, 16);


    if (FUNC_1(VAR_8->avctx, &VAR_8->gb, VAR_9, FUNC_4(&VAR_8->gb))) {
        FUNC_0(VAR_8->avctx, VAR_1, "Invalid auxiliary data checksum\n");
        return VAR_0;
    }

    return 0;
}
