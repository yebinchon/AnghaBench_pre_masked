
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_6__ {int sample_size; int planes; int stride; int allocated_samples; int nb_samples; int sample_fmt; int channels; int allocated_channels; int read_only; char const* name; int samples_align; scalar_t__ allow_realloc; int ** data; scalar_t__ is_planar; int * class; } ;
typedef TYPE_1__ AudioData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

int FUNC_6(AudioData *VAR_4, uint8_t * const *VAR_5, int VAR_6,
                       int VAR_7, int VAR_8,
                       enum AVSampleFormat VAR_9, int VAR_10,
                       const char *VAR_11)
{
    int VAR_12;

    FUNC_5(VAR_4, 0, sizeof(*VAR_4));
    VAR_4->class = &VAR_3;

    if (VAR_7 < 1 || VAR_7 > VAR_0) {
        FUNC_2(VAR_4, VAR_1, "invalid channel count: %d\n", VAR_7);
        return FUNC_0(VAR_2);
    }

    VAR_4->sample_size = FUNC_1(VAR_9);
    if (!VAR_4->sample_size) {
        FUNC_2(VAR_4, VAR_1, "invalid sample format\n");
        return FUNC_0(VAR_2);
    }
    VAR_4->is_planar = FUNC_4(VAR_9, VAR_7);
    VAR_4->planes = VAR_4->is_planar ? VAR_7 : 1;
    VAR_4->stride = VAR_4->sample_size * (VAR_4->is_planar ? 1 : VAR_7);

    for (VAR_12 = 0; VAR_12 < (VAR_4->is_planar ? VAR_7 : 1); VAR_12++) {
        if (!VAR_5[VAR_12]) {
            FUNC_2(VAR_4, VAR_1, "invalid NULL pointer for src[%d]\n", VAR_12);
            return FUNC_0(VAR_2);
        }
        VAR_4->data[VAR_12] = VAR_5[VAR_12];
    }
    VAR_4->allocated_samples = VAR_8 * !VAR_10;
    VAR_4->nb_samples = VAR_8;
    VAR_4->sample_fmt = VAR_9;
    VAR_4->channels = VAR_7;
    VAR_4->allocated_channels = VAR_7;
    VAR_4->read_only = VAR_10;
    VAR_4->allow_realloc = 0;
    VAR_4->name = VAR_11 ? VAR_11 : "{no name}";

    FUNC_3(VAR_4);
    VAR_4->samples_align = VAR_6 / VAR_4->stride;

    return 0;
}
