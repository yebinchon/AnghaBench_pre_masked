
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef int conv_func_type ;
struct TYPE_7__ {int channels; int const* ch_map; int simd_f; int silence; int * conv_f; } ;
typedef TYPE_1__ AudioConvert ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int ** VAR_11 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;

AudioConvert *FUNC_8(enum AVSampleFormat VAR_12,
                                       enum AVSampleFormat VAR_13,
                                       int VAR_14, const int *VAR_15,
                                       int VAR_16)
{
    AudioConvert *VAR_17;
    conv_func_type *VAR_18 = VAR_11[FUNC_1(VAR_12) + VAR_2*FUNC_1(VAR_13)];

    if (!VAR_18)
        return ((void*)0);
    VAR_17 = FUNC_3(sizeof(*VAR_17));
    if (!VAR_17)
        return ((void*)0);

    if(VAR_14 == 1){
         VAR_13 = FUNC_2( VAR_13);
        VAR_12 = FUNC_2(VAR_12);
    }

    VAR_17->channels = VAR_14;
    VAR_17->conv_f = VAR_18;
    VAR_17->ch_map = VAR_15;
    if (VAR_13 == VAR_3 || VAR_13 == VAR_4)
        FUNC_4(VAR_17->silence, 0x80, sizeof(VAR_17->silence));

    if(VAR_12 == VAR_13 && !VAR_15) {
        switch(FUNC_0(VAR_13)){
            case 1:VAR_17->simd_f = VAR_7; break;
            case 2:VAR_17->simd_f = VAR_8; break;
            case 4:VAR_17->simd_f = VAR_9; break;
            case 8:VAR_17->simd_f = VAR_10; break;
        }
    }

    if(VAR_6 && VAR_5) FUNC_7(VAR_17, VAR_12, VAR_13, VAR_14);
    if(VAR_1) FUNC_6(VAR_17, VAR_12, VAR_13, VAR_14);
    if(VAR_0) FUNC_5(VAR_17, VAR_12, VAR_13, VAR_14);

    return VAR_17;
}
