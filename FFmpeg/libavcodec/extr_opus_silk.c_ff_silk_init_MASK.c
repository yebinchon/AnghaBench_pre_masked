
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int output_channels; int * avctx; } ;
typedef TYPE_1__ SilkContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(AVCodecContext *VAR_3, SilkContext **VAR_4, int VAR_5)
{
    SilkContext *VAR_6;

    if (VAR_5 != 1 && VAR_5 != 2) {
        FUNC_1(VAR_3, VAR_0, "Invalid number of output channels: %d\n",
               VAR_5);
        return FUNC_0(VAR_1);
    }

    VAR_6 = FUNC_2(sizeof(*VAR_6));
    if (!VAR_6)
        return FUNC_0(VAR_2);

    VAR_6->avctx = VAR_3;
    VAR_6->output_channels = VAR_5;

    FUNC_3(VAR_6);

    *VAR_4 = VAR_6;

    return 0;
}
