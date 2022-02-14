
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int mb_x; int mb_y; int b8_stride; int mb_stride; TYPE_1__* current_picture_ptr; TYPE_3__* next_picture_ptr; TYPE_2__* avctx; int pict_type; int gb; } ;
struct TYPE_17__ {scalar_t__** dmv; int rv30; TYPE_5__ s; } ;
struct TYPE_16__ {int* mb_type; int *** motion_val; int tf; } ;
struct TYPE_15__ {int active_thread_type; } ;
struct TYPE_14__ {int *** motion_val; } ;
typedef TYPE_4__ RV34DecContext ;
typedef TYPE_5__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__**,int ,int) ;
 int* VAR_5 ;
 int FUNC_11 (TYPE_4__*,int,int,int,int,int,int,int) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,int,int,int) ;
 int FUNC_15 (TYPE_4__*,int,int) ;
 int FUNC_16 (TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_17(RV34DecContext *VAR_6, int VAR_7)
{
    MpegEncContext *VAR_8 = &VAR_6->s;
    GetBitContext *VAR_9 = &VAR_8->gb;
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14 = VAR_8->mb_x * 2 + VAR_8->mb_y * 2 * VAR_8->b8_stride;
    int VAR_15;

    FUNC_10(VAR_6->dmv, 0, sizeof(VAR_6->dmv));
    for(VAR_10 = 0; VAR_10 < VAR_5[VAR_7]; VAR_10++){
        VAR_6->dmv[VAR_10][0] = FUNC_9(VAR_9);
        VAR_6->dmv[VAR_10][1] = FUNC_9(VAR_9);
        if (VAR_6->dmv[VAR_10][0] == VAR_4 ||
            VAR_6->dmv[VAR_10][1] == VAR_4) {
            VAR_6->dmv[VAR_10][0] = VAR_6->dmv[VAR_10][1] = 0;
            return VAR_0;
        }
    }
    switch(VAR_7){
    case 129:
    case 128:
        FUNC_6(VAR_8->current_picture_ptr->motion_val[0][VAR_8->mb_x * 2 + VAR_8->mb_y * 2 * VAR_8->b8_stride], VAR_8->b8_stride);
        return 0;
    case 130:
        if(VAR_8->pict_type == VAR_1){
            FUNC_6(VAR_8->current_picture_ptr->motion_val[0][VAR_8->mb_x * 2 + VAR_8->mb_y * 2 * VAR_8->b8_stride], VAR_8->b8_stride);
            FUNC_11 (VAR_6, VAR_7, 0, 0, 0, 2, 2, 0);
            break;
        }
    case 137:


        if (VAR_3 && (VAR_8->avctx->active_thread_type & VAR_2))
            FUNC_8(&VAR_8->next_picture_ptr->tf, FUNC_0(0, VAR_8->mb_y-1), 0);

        VAR_15 = VAR_8->next_picture_ptr->mb_type[VAR_8->mb_x + VAR_8->mb_y * VAR_8->mb_stride];
        if(FUNC_4(VAR_15) || FUNC_5(VAR_15)){
            FUNC_6(VAR_8->current_picture_ptr->motion_val[0][VAR_8->mb_x * 2 + VAR_8->mb_y * 2 * VAR_8->b8_stride], VAR_8->b8_stride);
            FUNC_6(VAR_8->current_picture_ptr->motion_val[1][VAR_8->mb_x * 2 + VAR_8->mb_y * 2 * VAR_8->b8_stride], VAR_8->b8_stride);
        }else
            for(VAR_11 = 0; VAR_11 < 2; VAR_11++)
                for(VAR_10 = 0; VAR_10 < 2; VAR_10++)
                    for(VAR_12 = 0; VAR_12 < 2; VAR_12++)
                        for(VAR_13 = 0; VAR_13 < 2; VAR_13++)
                            VAR_8->current_picture_ptr->motion_val[VAR_13][VAR_14 + VAR_10 + VAR_11*VAR_8->b8_stride][VAR_12] = FUNC_7(VAR_6, VAR_13, VAR_8->next_picture_ptr->motion_val[0][VAR_14 + VAR_10 + VAR_11*VAR_8->b8_stride][VAR_12]);
        if(!(FUNC_1(VAR_15) || FUNC_2(VAR_15) || FUNC_3(VAR_15)))
            FUNC_12(VAR_6, VAR_7);
        else
            FUNC_13(VAR_6);
        FUNC_6(VAR_8->current_picture_ptr->motion_val[0][VAR_8->mb_x * 2 + VAR_8->mb_y * 2 * VAR_8->b8_stride], VAR_8->b8_stride);
        break;
    case 135:
    case 131:
        FUNC_14(VAR_6, VAR_7, 0, 0);
        FUNC_11 (VAR_6, VAR_7, 0, 0, 0, 2, 2, 0);
        break;
    case 136:
    case 139:
        VAR_6->dmv[1][0] = VAR_6->dmv[0][0];
        VAR_6->dmv[1][1] = VAR_6->dmv[0][1];
        if(VAR_6->rv30)
            FUNC_16(VAR_6, VAR_7, VAR_7 == 139);
        else
            FUNC_15 (VAR_6, VAR_7, VAR_7 == 139);
        FUNC_11 (VAR_6, VAR_7, 0, 0, 0, 2, 2, VAR_7 == 139);
        break;
    case 134:
    case 133:
        FUNC_14(VAR_6, VAR_7, 0, 0);
        FUNC_14(VAR_6, VAR_7, 1 + (VAR_7 == 134), 1);
        if(VAR_7 == 134){
            FUNC_11(VAR_6, VAR_7, 0, 0, 0, 2, 1, 0);
            FUNC_11(VAR_6, VAR_7, 0, 8, VAR_8->b8_stride, 2, 1, 0);
        }
        if(VAR_7 == 133){
            FUNC_11(VAR_6, VAR_7, 0, 0, 0, 1, 2, 0);
            FUNC_11(VAR_6, VAR_7, 8, 0, 1, 1, 2, 0);
        }
        break;
    case 138:
        FUNC_15 (VAR_6, VAR_7, 0);
        FUNC_15 (VAR_6, VAR_7, 1);
        FUNC_12 (VAR_6, VAR_7);
        break;
    case 132:
        for(VAR_10=0;VAR_10< 4;VAR_10++){
            FUNC_14(VAR_6, VAR_7, VAR_10, VAR_10);
            FUNC_11 (VAR_6, VAR_7, (VAR_10&1)<<3, (VAR_10&2)<<2, (VAR_10&1)+(VAR_10>>1)*VAR_8->b8_stride, 1, 1, 0);
        }
        break;
    }

    return 0;
}
