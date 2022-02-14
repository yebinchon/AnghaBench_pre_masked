
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nfreqbands; } ;
struct TYPE_4__ {int nfreqbands; int nframesegs; int nchsets; int* navi; int frame_size; int avctx; int gb; int seg_size_nbits; TYPE_2__* chset; int navi_size; } ;
typedef TYPE_1__ DCAXllDecoder ;
typedef TYPE_2__ DCAXllChSet ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int**,int *,int) ;
 int FUNC_2 (int ,int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(DCAXllDecoder *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, *VAR_9;
    DCAXllChSet *VAR_10;


    VAR_7 = VAR_3->nfreqbands * VAR_3->nframesegs * VAR_3->nchsets;
    if (VAR_7 > 1024) {
        FUNC_2(VAR_3->avctx, VAR_1, "Too many NAVI entries (%d)\n", VAR_7);
        return VAR_0;
    }


    FUNC_1(&VAR_3->navi, &VAR_3->navi_size, VAR_7 * sizeof(*VAR_3->navi));
    if (!VAR_3->navi)
        return FUNC_0(VAR_2);


    VAR_8 = FUNC_4(&VAR_3->gb);
    VAR_9 = VAR_3->navi;
    for (VAR_6 = 0; VAR_6 < VAR_3->nfreqbands; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_3->nframesegs; VAR_5++) {
            for (VAR_4 = 0, VAR_10 = VAR_3->chset; VAR_4 < VAR_3->nchsets; VAR_4++, VAR_10++) {
                int VAR_11 = 0;
                if (VAR_10->nfreqbands > VAR_6) {
                    VAR_11 = FUNC_5(&VAR_3->gb, VAR_3->seg_size_nbits);
                    if (VAR_11 < 0 || VAR_11 >= VAR_3->frame_size) {
                        FUNC_2(VAR_3->avctx, VAR_1, "Invalid NAVI segment size (%d bytes)\n", VAR_11);
                        return VAR_0;
                    }
                    VAR_11++;
                }
                *VAR_9++ = VAR_11;
            }
        }
    }



    FUNC_6(&VAR_3->gb, -FUNC_4(&VAR_3->gb) & 7);
    FUNC_6(&VAR_3->gb, 16);


    if (FUNC_3(VAR_3->avctx, &VAR_3->gb, VAR_8, FUNC_4(&VAR_3->gb))) {
        FUNC_2(VAR_3->avctx, VAR_1, "Invalid NAVI checksum\n");
        return VAR_0;
    }

    return 0;
}
