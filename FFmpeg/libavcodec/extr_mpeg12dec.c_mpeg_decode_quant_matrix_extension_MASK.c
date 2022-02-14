
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chroma_inter_matrix; int gb; int chroma_intra_matrix; int * inter_matrix; int * intra_matrix; int avctx; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int) ;

__attribute__((used)) static void FUNC_3(MpegEncContext *VAR_0)
{
    FUNC_0(VAR_0->avctx, "matrix extension\n");

    if (FUNC_1(&VAR_0->gb))
        FUNC_2(VAR_0, VAR_0->chroma_intra_matrix, VAR_0->intra_matrix, 1);
    if (FUNC_1(&VAR_0->gb))
        FUNC_2(VAR_0, VAR_0->chroma_inter_matrix, VAR_0->inter_matrix, 0);
    if (FUNC_1(&VAR_0->gb))
        FUNC_2(VAR_0, VAR_0->chroma_intra_matrix, ((void*)0), 1);
    if (FUNC_1(&VAR_0->gb))
        FUNC_2(VAR_0, VAR_0->chroma_inter_matrix, ((void*)0), 0);
}
