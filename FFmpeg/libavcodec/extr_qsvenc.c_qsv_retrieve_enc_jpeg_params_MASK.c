
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Height; int Width; } ;
struct TYPE_7__ {int BufferSizeInKB; int BRCParamMultiplier; TYPE_1__ FrameInfo; } ;
struct TYPE_9__ {TYPE_2__ mfx; } ;
struct TYPE_8__ {int packet_size; TYPE_5__ param; int session; } ;
typedef TYPE_3__ QSVEncContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int *,int,char*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, QSVEncContext *VAR_1)
{
    int VAR_2 = 0;

    VAR_2 = FUNC_0(VAR_1->session, &VAR_1->param);
    if (VAR_2 < 0)
        return FUNC_1(VAR_0, VAR_2,
                                  "Error calling GetVideoParam");

    VAR_1->packet_size = VAR_1->param.mfx.BufferSizeInKB * VAR_1->param.mfx.BRCParamMultiplier * 1000;


    if (VAR_1->packet_size == 0)
        VAR_1->packet_size = VAR_1->param.mfx.FrameInfo.Height * VAR_1->param.mfx.FrameInfo.Width * 4;

    return 0;
}
