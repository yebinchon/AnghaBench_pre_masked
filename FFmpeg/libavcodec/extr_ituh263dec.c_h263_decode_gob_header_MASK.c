
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_num; unsigned int mb_y; unsigned int gob_index; unsigned int mb_height; void* qscale; int gb; scalar_t__ mb_x; int avctx; scalar_t__ h263_slice_structured; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(MpegEncContext *VAR_0)
{
    unsigned int VAR_1, VAR_2;
    int VAR_3;


    VAR_1 = FUNC_6(&VAR_0->gb, 16);
    if(VAR_1)
        return -1;


    FUNC_7(&VAR_0->gb, 16);
    VAR_3= FUNC_5(&VAR_0->gb);
    VAR_3 = FUNC_0(VAR_3, 32);

    for(;VAR_3>13; VAR_3--){
        if(FUNC_4(&VAR_0->gb)) break;
    }
    if(VAR_3<=13)
        return -1;

    if(VAR_0->h263_slice_structured){
        if(FUNC_1(VAR_0->avctx, &VAR_0->gb, "before MBA")==0)
            return -1;

        FUNC_2(VAR_0);

        if(VAR_0->mb_num > 1583)
            if(FUNC_1(VAR_0->avctx, &VAR_0->gb, "after MBA")==0)
                return -1;

        VAR_0->qscale = FUNC_3(&VAR_0->gb, 5);
        if(FUNC_1(VAR_0->avctx, &VAR_0->gb, "after SQUANT")==0)
            return -1;
        FUNC_7(&VAR_0->gb, 2);
    }else{
        VAR_2 = FUNC_3(&VAR_0->gb, 5);
        VAR_0->mb_x= 0;
        VAR_0->mb_y= VAR_0->gob_index* VAR_2;
        FUNC_7(&VAR_0->gb, 2);
        VAR_0->qscale = FUNC_3(&VAR_0->gb, 5);
    }

    if(VAR_0->mb_y >= VAR_0->mb_height)
        return -1;

    if(VAR_0->qscale==0)
        return -1;

    return 0;
}
