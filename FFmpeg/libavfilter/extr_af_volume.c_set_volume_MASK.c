
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int volume; int* var_values; scalar_t__ eval_mode; size_t precision; int volume_i; int volume_pexpr; } ;
typedef TYPE_1__ VolumeContext ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int ,int*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 double FUNC_4 (double) ;
 int * VAR_10 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_11)
{
    VolumeContext *VAR_12 = VAR_11->priv;

    VAR_12->volume = FUNC_1(VAR_12->volume_pexpr, VAR_12->var_values, ((void*)0));
    if (FUNC_3(VAR_12->volume)) {
        if (VAR_12->eval_mode == VAR_4) {
            FUNC_2(VAR_11, VAR_0, "Invalid value NaN for volume\n");
            return FUNC_0(VAR_3);
        } else {
            FUNC_2(VAR_11, VAR_2, "Invalid value NaN for volume, setting to 0\n");
            VAR_12->volume = 0;
        }
    }
    VAR_12->var_values[VAR_9] = VAR_12->volume;

    FUNC_2(VAR_11, VAR_1, "n:%f t:%f pts:%f precision:%s ",
           VAR_12->var_values[VAR_6], VAR_12->var_values[VAR_8], VAR_12->var_values[VAR_7],
           VAR_10[VAR_12->precision]);

    if (VAR_12->precision == VAR_5) {
        VAR_12->volume_i = (int)(VAR_12->volume * 256 + 0.5);
        VAR_12->volume = VAR_12->volume_i / 256.0;
        FUNC_2(VAR_11, VAR_1, "volume_i:%d/255 ", VAR_12->volume_i);
    }
    FUNC_2(VAR_11, VAR_1, "volume:%f volume_dB:%f\n",
           VAR_12->volume, 20.0*FUNC_4(VAR_12->volume));

    FUNC_5(VAR_12);
    return 0;
}
