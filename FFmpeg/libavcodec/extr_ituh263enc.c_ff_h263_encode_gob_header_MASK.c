
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_num; int qscale; scalar_t__ pict_type; int gob_index; int pb; scalar_t__ h263_slice_structured; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(MpegEncContext * VAR_1, int VAR_2)
{
    FUNC_1(&VAR_1->pb, 17, 1);

    if(VAR_1->h263_slice_structured){
        FUNC_1(&VAR_1->pb, 1, 1);

        FUNC_0(VAR_1);

        if(VAR_1->mb_num > 1583)
            FUNC_1(&VAR_1->pb, 1, 1);
        FUNC_1(&VAR_1->pb, 5, VAR_1->qscale);
        FUNC_1(&VAR_1->pb, 1, 1);
        FUNC_1(&VAR_1->pb, 2, VAR_1->pict_type == VAR_0);
    }else{
        int VAR_3= VAR_2 / VAR_1->gob_index;

        FUNC_1(&VAR_1->pb, 5, VAR_3);
        FUNC_1(&VAR_1->pb, 2, VAR_1->pict_type == VAR_0);
        FUNC_1(&VAR_1->pb, 5, VAR_1->qscale);
    }
}
