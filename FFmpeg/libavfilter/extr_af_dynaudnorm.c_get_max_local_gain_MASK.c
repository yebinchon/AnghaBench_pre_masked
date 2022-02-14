
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double peak_value; double target_rms; int max_amplification; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef int AVFrame ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (double const,double const) ;
 double FUNC_1 (int ,int ) ;
 double FUNC_2 (int *,int) ;
 double FUNC_3 (int *,int) ;

__attribute__((used)) static double FUNC_4(DynamicAudioNormalizerContext *VAR_2, AVFrame *VAR_3,
                                 int VAR_4)
{
    const double VAR_5 = VAR_2->peak_value / FUNC_3(VAR_3, VAR_4);
    const double VAR_6 = VAR_2->target_rms > VAR_0 ? (VAR_2->target_rms / FUNC_2(VAR_3, VAR_4)) : VAR_1;
    return FUNC_1(VAR_2->max_amplification, FUNC_0(VAR_5, VAR_6));
}
