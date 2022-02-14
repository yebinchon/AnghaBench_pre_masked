
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVHWFrameTransferDirection { ____Placeholder_AVHWFrameTransferDirection } AVHWFrameTransferDirection ;
struct TYPE_7__ {int sw_format; TYPE_1__* internal; } ;
struct TYPE_6__ {scalar_t__ format; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ D3D11VAFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(AVHWFramesContext *VAR_3,
                                        enum AVHWFrameTransferDirection VAR_4,
                                        enum AVPixelFormat **VAR_5)
{
    D3D11VAFramesContext *VAR_6 = VAR_3->internal->priv;
    enum AVPixelFormat *VAR_7;

    VAR_7 = FUNC_1(2, sizeof(*VAR_7));
    if (!VAR_7)
        return FUNC_0(VAR_2);

    VAR_7[0] = VAR_3->sw_format;
    VAR_7[1] = VAR_0;


    if (VAR_6->format == VAR_1)
        VAR_7[0] = VAR_0;

    *VAR_5 = VAR_7;

    return 0;
}
