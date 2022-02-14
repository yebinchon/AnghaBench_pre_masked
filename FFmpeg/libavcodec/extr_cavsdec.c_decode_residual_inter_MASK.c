
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cbp; unsigned int qp; int l_stride; scalar_t__* luma_scan; scalar_t__ cy; int gb; int qp_fixed; int avctx; } ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int** VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,unsigned int,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_5(AVSContext *VAR_4)
{
    int VAR_5;


    int VAR_6 = FUNC_4(&VAR_4->gb);
    if (VAR_6 > 63U) {
        FUNC_0(VAR_4->avctx, VAR_1, "illegal inter cbp %d\n", VAR_6);
        return VAR_0;
    }
    VAR_4->cbp = VAR_2[VAR_6][1];


    if (VAR_4->cbp && !VAR_4->qp_fixed)
        VAR_4->qp = (VAR_4->qp + (unsigned)FUNC_3(&VAR_4->gb)) & 63;
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        if (VAR_4->cbp & (1 << VAR_5))
            FUNC_1(VAR_4, &VAR_4->gb, VAR_3, 0, VAR_4->qp,
                                  VAR_4->cy + VAR_4->luma_scan[VAR_5], VAR_4->l_stride);
    FUNC_2(VAR_4);

    return 0;
}
