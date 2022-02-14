
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t dmix_type; int hier_ofs; int* dmix_coeff; int* dmix_scale; int* dmix_scale_inv; int nchannels; scalar_t__ primary_chset; } ;
struct TYPE_5__ {int avctx; int gb; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAXllChSet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(DCAXllDecoder *VAR_8, DCAXllChSet *VAR_9)
{

    int VAR_10 = VAR_9->primary_chset ? VAR_5[VAR_9->dmix_type] : VAR_9->hier_ofs;
    int VAR_11, VAR_12, *VAR_13 = VAR_9->dmix_coeff;

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18 = 0;
        unsigned int VAR_19;


        if (!VAR_9->primary_chset) {
            VAR_14 = FUNC_1(&VAR_8->gb, 9);
            VAR_15 = (VAR_14 >> 8) - 1;
            VAR_19 = (VAR_14 & 0xff) - VAR_2;
            if (VAR_19 >= VAR_4) {
                FUNC_0(VAR_8->avctx, VAR_1, "Invalid XLL downmix scale index\n");
                return VAR_0;
            }
            VAR_17 = VAR_6[VAR_19 + VAR_2];
            VAR_18 = VAR_7[VAR_19];
            VAR_9->dmix_scale[VAR_11] = (VAR_17 ^ VAR_15) - VAR_15;
            VAR_9->dmix_scale_inv[VAR_11] = (VAR_18 ^ VAR_15) - VAR_15;
        }


        for (VAR_12 = 0; VAR_12 < VAR_9->nchannels; VAR_12++) {
            VAR_14 = FUNC_1(&VAR_8->gb, 9);
            VAR_15 = (VAR_14 >> 8) - 1;
            VAR_19 = VAR_14 & 0xff;
            if (VAR_19 >= VAR_3) {
                FUNC_0(VAR_8->avctx, VAR_1, "Invalid XLL downmix coefficient index\n");
                return VAR_0;
            }
            VAR_16 = VAR_6[VAR_19];
            if (!VAR_9->primary_chset)

                VAR_16 = FUNC_2(VAR_18, VAR_16);
            *VAR_13++ = (VAR_16 ^ VAR_15) - VAR_15;
        }
    }

    return 0;
}
