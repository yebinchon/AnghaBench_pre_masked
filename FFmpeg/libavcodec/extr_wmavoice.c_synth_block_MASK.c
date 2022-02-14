
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct frame_type_desc {scalar_t__ acb_type; int n_blocks; } ;
struct TYPE_5__ {int lsps; } ;
typedef TYPE_1__ WMAVoiceContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double const) ;
 int FUNC_1 (double*,float*,int) ;
 int FUNC_2 (float*,float*,float*,int,int) ;
 int FUNC_3 (TYPE_1__*,int *,int,int,int,struct frame_type_desc const*,float*) ;
 int FUNC_4 (TYPE_1__*,int *,int,int,struct frame_type_desc const*,float*) ;

__attribute__((used)) static void FUNC_5(WMAVoiceContext *VAR_2, GetBitContext *VAR_3,
                        int VAR_4, int VAR_5,
                        int VAR_6,
                        const double *VAR_7, const double *VAR_8,
                        const struct frame_type_desc *VAR_9,
                        float *VAR_10, float *VAR_11)
{
    double VAR_12[VAR_1];
    float VAR_13[VAR_1];
    float VAR_14;
    int VAR_15;

    if (VAR_9->acb_type == VAR_0)
        FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_9, VAR_10);
    else
        FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                            VAR_9, VAR_10);


    VAR_14 = (VAR_4 + 0.5) / VAR_9->n_blocks;
    for (VAR_15 = 0; VAR_15 < VAR_2->lsps; VAR_15++)
        VAR_12[VAR_15] = FUNC_0(VAR_8[VAR_15] + VAR_14 * (VAR_7[VAR_15] - VAR_8[VAR_15]));
    FUNC_1(VAR_12, VAR_13, VAR_2->lsps >> 1);


    FUNC_2(VAR_11, VAR_13, VAR_10, VAR_5, VAR_2->lsps);
}
