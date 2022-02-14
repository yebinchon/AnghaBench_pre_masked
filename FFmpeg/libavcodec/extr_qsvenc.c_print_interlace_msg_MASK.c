
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ CodecId; scalar_t__ CodecProfile; scalar_t__ CodecLevel; } ;
struct TYPE_6__ {TYPE_1__ mfx; } ;
struct TYPE_7__ {TYPE_2__ param; } ;
typedef TYPE_3__ QSVEncContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_5, QSVEncContext *VAR_6)
{
    if (VAR_6->param.mfx.CodecId == VAR_1) {
        if (VAR_6->param.mfx.CodecProfile == VAR_4 ||
            VAR_6->param.mfx.CodecLevel < VAR_2 ||
            VAR_6->param.mfx.CodecLevel > VAR_3)
            FUNC_0(VAR_5, VAR_0,
                   "Interlaced coding is supported"
                   " at Main/High Profile Level 2.2-4.0\n");
    }
}
