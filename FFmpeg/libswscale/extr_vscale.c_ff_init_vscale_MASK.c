
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VScalerContext ;
struct TYPE_7__ {int use_mmx_vfilter; int yuv2anyX; scalar_t__ yuv2packedX; int yuv2packed2; int yuv2packed1; int yuv2nv12cX; int yuv2planeX; int yuv2plane1; int needAlpha; int dstFormat; } ;
struct TYPE_6__ {int alpha; int * dst; int * src; int * instance; int process; } ;
typedef int SwsSlice ;
typedef TYPE_1__ SwsFilterDescriptor ;
typedef TYPE_2__ SwsContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_7(SwsContext *VAR_5, SwsFilterDescriptor *VAR_6, SwsSlice *VAR_7, SwsSlice *VAR_8)
{
    VScalerContext *VAR_9 = ((void*)0);
    VScalerContext *VAR_10 = ((void*)0);

    if (FUNC_6(VAR_5->dstFormat) || (FUNC_5(VAR_5->dstFormat) && !FUNC_4(VAR_5->dstFormat))) {
        VAR_9 = FUNC_1(sizeof(VScalerContext));
        if (!VAR_9)
            return FUNC_0(VAR_0);


        VAR_6[0].process = VAR_3;
        VAR_6[0].instance = VAR_9;
        VAR_6[0].src = VAR_7;
        VAR_6[0].dst = VAR_8;
        VAR_6[0].alpha = VAR_5->needAlpha;

        if (!FUNC_5(VAR_5->dstFormat)) {
            VAR_10 = FUNC_1(sizeof(VScalerContext));
            if (!VAR_10)
                return FUNC_0(VAR_0);
            VAR_6[1].process = VAR_2;
            VAR_6[1].instance = VAR_10;
            VAR_6[1].src = VAR_7;
            VAR_6[1].dst = VAR_8;
        }
    } else {
        VAR_9 = FUNC_2(sizeof(VScalerContext), 2);
        if (!VAR_9)
            return FUNC_0(VAR_0);
        VAR_10 = &VAR_9[1];

        VAR_6[0].process = VAR_5->yuv2packedX ? VAR_4 : VAR_1;
        VAR_6[0].instance = VAR_9;
        VAR_6[0].src = VAR_7;
        VAR_6[0].dst = VAR_8;
        VAR_6[0].alpha = VAR_5->needAlpha;
    }

    FUNC_3(VAR_5, VAR_5->yuv2plane1, VAR_5->yuv2planeX, VAR_5->yuv2nv12cX,
        VAR_5->yuv2packed1, VAR_5->yuv2packed2, VAR_5->yuv2packedX, VAR_5->yuv2anyX, VAR_5->use_mmx_vfilter);
    return 0;
}
