
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int nb_bsfs; int idx; int flushed_idx; int * bsfs; } ;
typedef TYPE_1__ BSFListContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    BSFListContext *VAR_4 = VAR_2->priv_data;
    int VAR_5;

    if (!VAR_4->nb_bsfs)
        return FUNC_4(VAR_2, VAR_3);

    while (1) {
        if (VAR_4->idx > VAR_4->flushed_idx) {
            VAR_5 = FUNC_1(VAR_4->bsfs[VAR_4->idx-1], VAR_3);
            if (VAR_5 == FUNC_0(VAR_1)) {

                VAR_4->idx--;
                continue;
            } else if (VAR_5 == VAR_0) {

                VAR_4->flushed_idx = VAR_4->idx;
                continue;
            }else if (VAR_5 < 0) {

                break;
            }
        } else {
            VAR_5 = FUNC_4(VAR_2, VAR_3);
            if (VAR_5 == VAR_0) {
                VAR_4->idx = VAR_4->flushed_idx;
            } else if (VAR_5 < 0)
                break;
        }

        if (VAR_4->idx < VAR_4->nb_bsfs) {
            AVPacket *VAR_6;
            if (VAR_5 == VAR_0 && VAR_4->idx == VAR_4->flushed_idx) {


                VAR_6 = ((void*)0);
            } else {
                VAR_6 = VAR_3;
            }
            VAR_5 = FUNC_2(VAR_4->bsfs[VAR_4->idx], VAR_6);
            if (VAR_5 < 0)
                break;
            VAR_4->idx++;
        } else {

            break;
        }
    }

    if (VAR_5 < 0)
        FUNC_3(VAR_3);

    return VAR_5;
}
