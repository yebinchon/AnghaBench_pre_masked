
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int roq_cell ;
struct TYPE_12__ {int * idx; } ;
struct TYPE_11__ {int numCB4; int numCB2; int* unpacked_cb2; scalar_t__ unpacked_cb4_enlarged; scalar_t__ unpacked_cb4; } ;
struct TYPE_10__ {int width; int height; int* cb2x2; TYPE_4__* cb4x4; scalar_t__ quake3_compat; int frame_to_enc; } ;
struct TYPE_9__ {void* closest_cb2; TYPE_3__ codebooks; } ;
typedef TYPE_1__ RoqTempdata ;
typedef TYPE_2__ RoqContext ;
typedef TYPE_3__ RoqCodebooks ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int,int*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int*,int,int*,int,int) ;
 int FUNC_7 (int*,int*,int,int *,int) ;
 int FUNC_8 (int*,int*) ;
 int FUNC_9 (int*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(RoqContext *VAR_4, RoqTempdata *VAR_5)
{
    int VAR_6, VAR_7, VAR_8 = 0;
    RoqCodebooks *VAR_9 = &VAR_5->codebooks;
    int VAR_10 = VAR_4->width*VAR_4->height/16;
    uint8_t VAR_11[3*4];
    roq_cell *VAR_12 = FUNC_2(sizeof(roq_cell)*VAR_3*4);
    uint8_t *VAR_13=FUNC_3(VAR_10, sizeof(int)*6*4);
    int *VAR_14 = FUNC_3(VAR_10, 6*4*sizeof(int));
    int VAR_15;

    if (!VAR_12 || !VAR_13 || !VAR_14) {
        VAR_8 = FUNC_0(VAR_1);
        goto out;
    }


    FUNC_4(VAR_4->frame_to_enc, VAR_4->width, VAR_4->height, VAR_13);


    for (VAR_6=0; VAR_6<VAR_10*24; VAR_6++) {
        VAR_15 = ((VAR_6%6)<4) ? 1 : VAR_0;
        VAR_14[VAR_6] = VAR_15*VAR_13[VAR_6];
    }


    if ((VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_14, VAR_10,
                                 VAR_12, 4, (VAR_4->quake3_compat ? VAR_3-1 : VAR_3))) < 0)
        goto out;

    VAR_9->numCB4 = (VAR_4->quake3_compat ? VAR_3-1 : VAR_3);

    VAR_5->closest_cb2 = FUNC_3(VAR_10, 4*sizeof(int));
    if (!VAR_5->closest_cb2) {
        VAR_8 = FUNC_0(VAR_1);
        goto out;
    }


    if ((VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_14, VAR_10 * 4,
                                 VAR_4->cb2x2, 2, VAR_2)) < 0)
        goto out;

    VAR_9->numCB2 = VAR_2;


    for (VAR_6=0; VAR_6<VAR_9->numCB2; VAR_6++)
        FUNC_8(VAR_4->cb2x2 + VAR_6, VAR_9->unpacked_cb2 + VAR_6*2*2*3);


    for (VAR_6=0; VAR_6<VAR_9->numCB4; VAR_6++) {
        for (VAR_7=0; VAR_7<4; VAR_7++) {
            FUNC_8(&VAR_12[4*VAR_6 + VAR_7], VAR_11);
            FUNC_7(VAR_11, VAR_9->unpacked_cb2, VAR_9->numCB2,
                     &VAR_4->cb4x4[VAR_6].idx[VAR_7], 2);
        }
        FUNC_9(VAR_9->unpacked_cb2, VAR_4->cb4x4 + VAR_6,
                         VAR_9->unpacked_cb4 + VAR_6*4*4*3);
        FUNC_5(VAR_9->unpacked_cb4 + VAR_6*4*4*3,
                        VAR_9->unpacked_cb4_enlarged + VAR_6*8*8*3);
    }
out:
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    FUNC_1(VAR_12);
    return VAR_8;
}
