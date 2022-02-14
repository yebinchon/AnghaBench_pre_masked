
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_7__ {int sample_size; int planes; int stride; int sample_fmt; int channels; int allocated_channels; int allow_realloc; char const* name; scalar_t__ read_only; int * class; scalar_t__ is_planar; } ;
typedef TYPE_1__ AudioData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int,int) ;

AudioData *FUNC_6(int VAR_2, int VAR_3,
                               enum AVSampleFormat VAR_4, const char *VAR_5)
{
    AudioData *VAR_6;
    int VAR_7;

    if (VAR_2 < 1 || VAR_2 > VAR_0)
        return ((void*)0);

    VAR_6 = FUNC_2(sizeof(*VAR_6));
    if (!VAR_6)
        return ((void*)0);

    VAR_6->sample_size = FUNC_1(VAR_4);
    if (!VAR_6->sample_size) {
        FUNC_0(VAR_6);
        return ((void*)0);
    }
    VAR_6->is_planar = FUNC_5(VAR_4, VAR_2);
    VAR_6->planes = VAR_6->is_planar ? VAR_2 : 1;
    VAR_6->stride = VAR_6->sample_size * (VAR_6->is_planar ? 1 : VAR_2);

    VAR_6->class = &VAR_1;
    VAR_6->sample_fmt = VAR_4;
    VAR_6->channels = VAR_2;
    VAR_6->allocated_channels = VAR_2;
    VAR_6->read_only = 0;
    VAR_6->allow_realloc = 1;
    VAR_6->name = VAR_5 ? VAR_5 : "{no name}";

    if (VAR_3 > 0) {
        VAR_7 = FUNC_4(VAR_6, VAR_3);
        if (VAR_7 < 0) {
            FUNC_0(VAR_6);
            return ((void*)0);
        }
        return VAR_6;
    } else {
        FUNC_3(VAR_6);
        return VAR_6;
    }
}
