
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; int avctx; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct TYPE_8__ {int type; int width; int height; void* start; void* pts; void* vlc_set; void* quant; } ;
typedef TYPE_2__ SliceInfo ;
typedef TYPE_3__ RV34DecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(RV34DecContext *VAR_1, GetBitContext *VAR_2, SliceInfo *VAR_3)
{
    int VAR_4;
    int VAR_5 = VAR_1->s.width, VAR_6 = VAR_1->s.height;
    int VAR_7;
    int VAR_8;

    FUNC_4(VAR_3, 0, sizeof(SliceInfo));
    if(FUNC_3(VAR_2))
        return VAR_0;
    VAR_3->type = FUNC_2(VAR_2, 2);
    if(VAR_3->type == 1) VAR_3->type = 0;
    VAR_3->quant = FUNC_2(VAR_2, 5);
    if(FUNC_2(VAR_2, 2))
        return VAR_0;
    VAR_3->vlc_set = FUNC_2(VAR_2, 2);
    FUNC_6(VAR_2);
    VAR_3->pts = FUNC_2(VAR_2, 13);
    if(!VAR_3->type || !FUNC_3(VAR_2))
        FUNC_5(VAR_2, &VAR_5, &VAR_6);
    if ((VAR_8 = FUNC_0(VAR_5, VAR_6, 0, VAR_1->s.avctx)) < 0)
        return VAR_8;
    VAR_3->width = VAR_5;
    VAR_3->height = VAR_6;
    VAR_7 = ((VAR_5 + 15) >> 4) * ((VAR_6 + 15) >> 4);
    VAR_4 = FUNC_1(VAR_2, VAR_7);
    VAR_3->start = FUNC_2(VAR_2, VAR_4);

    return 0;
}
