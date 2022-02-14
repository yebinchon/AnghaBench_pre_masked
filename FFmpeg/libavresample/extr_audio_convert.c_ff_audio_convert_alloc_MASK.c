
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_13__ {scalar_t__ dither_method; } ;
struct TYPE_12__ {int out_fmt; int in_fmt; int channels; int apply_map; int planes; int func_type; int dc; TYPE_2__* avr; } ;
typedef TYPE_1__ AudioConvert ;
typedef TYPE_2__ AVAudioResampleContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int,int,int,int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_1__*) ;

AudioConvert *FUNC_10(AVAudioResampleContext *VAR_8,
                                     enum AVSampleFormat VAR_9,
                                     enum AVSampleFormat VAR_10,
                                     int VAR_11, int VAR_12,
                                     int VAR_13)
{
    AudioConvert *VAR_14;
    int VAR_15, VAR_16;

    VAR_14 = FUNC_3(sizeof(*VAR_14));
    if (!VAR_14)
        return ((void*)0);

    VAR_14->avr = VAR_8;
    VAR_14->out_fmt = VAR_9;
    VAR_14->in_fmt = VAR_10;
    VAR_14->channels = VAR_11;
    VAR_14->apply_map = VAR_13;

    if (VAR_8->dither_method != VAR_3 &&
        FUNC_2(VAR_9) == VAR_4 &&
        FUNC_1(VAR_10) > 2) {
        VAR_14->dc = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
                                 VAR_13);
        if (!VAR_14->dc) {
            FUNC_0(VAR_14);
            return ((void*)0);
        }
        return VAR_14;
    }

    VAR_15 = FUNC_8(VAR_10, VAR_11);
    VAR_16 = FUNC_8(VAR_9, VAR_11);

    if (VAR_15 == VAR_16) {
        VAR_14->func_type = VAR_6;
        VAR_14->planes = VAR_15 ? VAR_14->channels : 1;
    } else if (VAR_15)
        VAR_14->func_type = VAR_7;
    else
        VAR_14->func_type = VAR_5;

    FUNC_9(VAR_14);

    if (VAR_0)
        FUNC_4(VAR_14);
    if (VAR_1)
        FUNC_5(VAR_14);
    if (VAR_2)
        FUNC_6(VAR_14);

    return VAR_14;
}
