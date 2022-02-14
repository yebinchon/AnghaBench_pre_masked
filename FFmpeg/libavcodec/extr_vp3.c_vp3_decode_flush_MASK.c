
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ f; } ;
struct TYPE_6__ {TYPE_5__ current_frame; TYPE_5__ last_frame; TYPE_5__ golden_frame; } ;
typedef TYPE_1__ Vp3DecodeContext ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    Vp3DecodeContext *VAR_1 = VAR_0->priv_data;

    if (VAR_1->golden_frame.f)
        FUNC_0(VAR_0, &VAR_1->golden_frame);
    if (VAR_1->last_frame.f)
        FUNC_0(VAR_0, &VAR_1->last_frame);
    if (VAR_1->current_frame.f)
        FUNC_0(VAR_0, &VAR_1->current_frame);
}
