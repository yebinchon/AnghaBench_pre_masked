
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel_mode; int * delay; } ;
typedef TYPE_1__ AC3DecodeContext ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(AC3DecodeContext *VAR_0)
{
    int VAR_1 = sizeof(VAR_0->delay[0]);
    switch (VAR_0->channel_mode) {
    case 129:
    case 128:

        FUNC_0(VAR_0->delay[1], VAR_0->delay[0], VAR_1);
        break;
    case 133:
        FUNC_1(VAR_0->delay[3], 0, VAR_1);
    case 134:
        FUNC_1(VAR_0->delay[2], 0, VAR_1);
        break;
    case 130:
        FUNC_1(VAR_0->delay[4], 0, VAR_1);
    case 131:
        FUNC_1(VAR_0->delay[3], 0, VAR_1);
    case 132:
        FUNC_0(VAR_0->delay[2], VAR_0->delay[1], VAR_1);
        FUNC_1(VAR_0->delay[1], 0, VAR_1);
        break;
    }
}
