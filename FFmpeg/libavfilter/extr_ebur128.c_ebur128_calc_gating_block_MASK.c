
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t channels; TYPE_1__* d; } ;
struct TYPE_4__ {scalar_t__* channel_map; size_t audio_data_index; double* audio_data; size_t audio_data_frames; int * block_energy_histogram; } ;
typedef TYPE_2__ FFEBUR128State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (double) ;
 double* VAR_8 ;

__attribute__((used)) static void FUNC_1(FFEBUR128State * VAR_9,
                                      size_t VAR_10,
                                      double *VAR_11)
{
    size_t VAR_12, VAR_13;
    double VAR_14 = 0.0;
    double VAR_15;
    for (VAR_13 = 0; VAR_13 < VAR_9->channels; ++VAR_13) {
        if (VAR_9->d->channel_map[VAR_13] == VAR_7)
            continue;
        VAR_15 = 0.0;
        if (VAR_9->d->audio_data_index < VAR_10 * VAR_9->channels) {
            for (VAR_12 = 0; VAR_12 < VAR_9->d->audio_data_index / VAR_9->channels; ++VAR_12) {
                VAR_15 += VAR_9->d->audio_data[VAR_12 * VAR_9->channels + VAR_13] *
                    VAR_9->d->audio_data[VAR_12 * VAR_9->channels + VAR_13];
            }
            for (VAR_12 = VAR_9->d->audio_data_frames -
                 (VAR_10 -
                  VAR_9->d->audio_data_index / VAR_9->channels);
                 VAR_12 < VAR_9->d->audio_data_frames; ++VAR_12) {
                VAR_15 += VAR_9->d->audio_data[VAR_12 * VAR_9->channels + VAR_13] *
                    VAR_9->d->audio_data[VAR_12 * VAR_9->channels + VAR_13];
            }
        } else {
            for (VAR_12 =
                 VAR_9->d->audio_data_index / VAR_9->channels - VAR_10;
                 VAR_12 < VAR_9->d->audio_data_index / VAR_9->channels; ++VAR_12) {
                VAR_15 +=
                    VAR_9->d->audio_data[VAR_12 * VAR_9->channels +
                                      VAR_13] * VAR_9->d->audio_data[VAR_12 *
                                                             VAR_9->channels +
                                                             VAR_13];
            }
        }
        if (VAR_9->d->channel_map[VAR_13] == VAR_6 ||
            VAR_9->d->channel_map[VAR_13] == VAR_3 ||
            VAR_9->d->channel_map[VAR_13] == VAR_4 ||
            VAR_9->d->channel_map[VAR_13] == VAR_1 ||
            VAR_9->d->channel_map[VAR_13] == VAR_5 ||
            VAR_9->d->channel_map[VAR_13] == VAR_2) {
            VAR_15 *= 1.41;
        } else if (VAR_9->d->channel_map[VAR_13] == VAR_0) {
            VAR_15 *= 2.0;
        }
        VAR_14 += VAR_15;
    }
    VAR_14 /= (double) VAR_10;
    if (VAR_11) {
        *VAR_11 = VAR_14;
    } else if (VAR_14 >= VAR_8[0]) {
        ++VAR_9->d->block_energy_histogram[FUNC_0(VAR_14)];
    }
}
