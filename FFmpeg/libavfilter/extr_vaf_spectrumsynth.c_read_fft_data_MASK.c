
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_8__ {int format; } ;
struct TYPE_7__ {int channels; int orientation; } ;
typedef TYPE_1__ SpectrumSynthContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
 int FUNC_0 (TYPE_1__*,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    SpectrumSynthContext *VAR_4 = VAR_0->priv;
    AVFilterLink *VAR_5 = VAR_0->inputs[0];
    int VAR_6 = VAR_2 * (VAR_4->channels - VAR_3) - 1;
    int VAR_7 = VAR_2 * (VAR_4->channels - VAR_3 - 1);
    int VAR_8, VAR_9;

    switch (VAR_4->orientation) {
    case 128:
        switch (VAR_5->format) {
        case 131:
        case 134:
            for (VAR_8 = VAR_6, VAR_9 = 0; VAR_8 >= VAR_7; VAR_8--, VAR_9++) {
                FUNC_0(VAR_4, VAR_1, VAR_8, VAR_9, VAR_3);
            }
            break;
        case 130:
        case 132:
        case 133:
            for (VAR_8 = VAR_6, VAR_9 = 0; VAR_8 >= VAR_7; VAR_8--, VAR_9++) {
                FUNC_1(VAR_4, VAR_1, VAR_8, VAR_9, VAR_3);
            }
            break;
        }
        break;
    case 129:
        switch (VAR_5->format) {
        case 131:
        case 134:
            for (VAR_8 = VAR_7, VAR_9 = 0; VAR_8 <= VAR_6; VAR_8++, VAR_9++) {
                FUNC_0(VAR_4, VAR_8, VAR_1, VAR_9, VAR_3);
            }
            break;
        case 130:
        case 132:
        case 133:
            for (VAR_8 = VAR_7, VAR_9 = 0; VAR_8 <= VAR_6; VAR_8++, VAR_9++) {
                FUNC_1(VAR_4, VAR_8, VAR_1, VAR_9, VAR_3);
            }
            break;
        }
        break;
    }
}
