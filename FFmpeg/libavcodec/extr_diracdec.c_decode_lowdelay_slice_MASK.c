
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum dirac_subband { ____Placeholder_dirac_subband } dirac_subband ;
struct TYPE_12__ {TYPE_4__* priv_data; } ;
struct TYPE_8__ {scalar_t__** quant; } ;
struct TYPE_11__ {int wavelet_depth; TYPE_2__* plane; TYPE_1__ lowdelay; } ;
struct TYPE_10__ {int bytes; int slice_y; int slice_x; int gb; } ;
struct TYPE_9__ {int ** band; } ;
typedef int GetBitContext ;
typedef TYPE_3__ DiracSlice ;
typedef TYPE_4__ DiracContext ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int *,int,int ,int ,int,int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_0, void *VAR_1)
{
    DiracContext *VAR_2 = VAR_0->priv_data;
    DiracSlice *VAR_3 = VAR_1;
    GetBitContext *VAR_4 = &VAR_3->gb;
    enum dirac_subband VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;

    int VAR_10 = FUNC_4(VAR_4, 7);
    int VAR_11 = FUNC_2(8 * VAR_3->bytes)+1;
    int VAR_12 = FUNC_7(VAR_4, VAR_11);
    int VAR_13 = FUNC_5(VAR_4) + FUNC_1(VAR_12, FUNC_6(VAR_4));


    for (VAR_6 = 0; VAR_6 < VAR_2->wavelet_depth; VAR_6++)
        for (VAR_5 = !!VAR_6; VAR_5 < 4; VAR_5++) {
            VAR_7 = FUNC_0(VAR_10 - VAR_2->lowdelay.quant[VAR_6][VAR_5], 0);
            FUNC_3(VAR_2, VAR_4, VAR_7, VAR_3->slice_x, VAR_3->slice_y, VAR_13,
                           &VAR_2->plane[0].band[VAR_6][VAR_5], ((void*)0));
        }


    FUNC_8(VAR_4, FUNC_5(VAR_4) - VAR_13);

    VAR_8 = 8*VAR_3->bytes - 7 - VAR_11 - VAR_12;
    VAR_9 = FUNC_5(VAR_4) + FUNC_1(VAR_8, FUNC_6(VAR_4));

    for (VAR_6 = 0; VAR_6 < VAR_2->wavelet_depth; VAR_6++)
        for (VAR_5 = !!VAR_6; VAR_5 < 4; VAR_5++) {
            VAR_7 = FUNC_0(VAR_10 - VAR_2->lowdelay.quant[VAR_6][VAR_5], 0);
            FUNC_3(VAR_2, VAR_4, VAR_7, VAR_3->slice_x, VAR_3->slice_y, VAR_9,
                           &VAR_2->plane[1].band[VAR_6][VAR_5],
                           &VAR_2->plane[2].band[VAR_6][VAR_5]);
        }

    return 0;
}
