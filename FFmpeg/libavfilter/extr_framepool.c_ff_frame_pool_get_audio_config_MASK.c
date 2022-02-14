
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {scalar_t__ type; int channels; int nb_samples; int format; int align; } ;
typedef TYPE_1__ FFFramePool ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

int FUNC_2(FFFramePool *VAR_2,
                                   int *VAR_3,
                                   int *VAR_4,
                                   enum AVSampleFormat *VAR_5,
                                   int *VAR_6)
{
    if (!VAR_2)
        return FUNC_0(VAR_1);

    FUNC_1(VAR_2->type == VAR_0);

    *VAR_3 = VAR_2->channels;
    *VAR_4 = VAR_2->nb_samples;
    *VAR_5 = VAR_2->format;
    *VAR_6 = VAR_2->align;

    return 0;
}
