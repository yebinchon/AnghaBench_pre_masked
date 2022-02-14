
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dither_state; scalar_t__ last_buf_size; int mdct_buf; int synth_buf; } ;
typedef TYPE_1__ MPADecodeContext ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(MPADecodeContext *VAR_0)
{
    FUNC_0(VAR_0->synth_buf, 0, sizeof(VAR_0->synth_buf));
    FUNC_0(VAR_0->mdct_buf, 0, sizeof(VAR_0->mdct_buf));
    VAR_0->last_buf_size = 0;
    VAR_0->dither_state = 0;
}
