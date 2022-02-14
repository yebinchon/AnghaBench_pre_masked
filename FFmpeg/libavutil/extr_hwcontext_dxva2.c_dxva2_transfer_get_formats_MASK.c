
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVHWFrameTransferDirection { ____Placeholder_AVHWFrameTransferDirection } AVHWFrameTransferDirection ;
struct TYPE_3__ {int sw_format; } ;
typedef TYPE_1__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(AVHWFramesContext *VAR_2,
                                      enum AVHWFrameTransferDirection VAR_3,
                                      enum AVPixelFormat **VAR_4)
{
    enum AVPixelFormat *VAR_5;

    VAR_5 = FUNC_1(2, sizeof(*VAR_5));
    if (!VAR_5)
        return FUNC_0(VAR_1);

    VAR_5[0] = VAR_2->sw_format;
    VAR_5[1] = VAR_0;

    *VAR_4 = VAR_5;

    return 0;
}
