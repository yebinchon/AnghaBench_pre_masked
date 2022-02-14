
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {int nb_samples; int channels; int allocated_samples; scalar_t__* data; scalar_t__ allow_realloc; int read_only; } ;
struct TYPE_13__ {scalar_t__ compensation_distance; int filter_length; scalar_t__ phase_shift; int final_padding_samples; int initial_padding_filled; int padding_size; int final_padding_filled; int initial_padding_samples; TYPE_2__* buffer; TYPE_11__* avr; } ;
struct TYPE_12__ {int internal_sample_fmt; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AudioData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_11__*,int ,char*,...) ;
 int FUNC_4 (TYPE_2__*,int,TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (TYPE_1__*,void*,void const*,int*,int,int ,int,int) ;

int FUNC_10(ResampleContext *VAR_5, AudioData *VAR_6, AudioData *VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
    int VAR_13 = FUNC_0(VAR_2);
    int VAR_14 = (VAR_5->compensation_distance == 0 &&
                             VAR_5->filter_length == 1 &&
                             VAR_5->phase_shift == 0);

    VAR_9 = VAR_7 ? VAR_7->nb_samples : 0;
    VAR_10 = VAR_5->buffer->nb_samples;


    if (VAR_7) {
        VAR_13 = FUNC_4(VAR_5->buffer, VAR_10, VAR_7, 0, VAR_9);
        if (VAR_13 < 0)
            return VAR_13;
    } else if (VAR_10 <= VAR_5->final_padding_samples) {

        return 0;
    }

    if (!VAR_5->initial_padding_filled) {
        int VAR_15 = FUNC_2(VAR_5->avr->internal_sample_fmt);
        int VAR_16;

        if (VAR_7 && VAR_5->buffer->nb_samples < 2 * VAR_5->padding_size)
            return 0;

        for (VAR_16 = 0; VAR_16 < VAR_5->padding_size; VAR_16++)
            for (VAR_8 = 0; VAR_8 < VAR_5->buffer->channels; VAR_8++) {
                if (VAR_5->buffer->nb_samples > 2 * VAR_5->padding_size - VAR_16) {
                    FUNC_7(VAR_5->buffer->data[VAR_8] + VAR_15 * VAR_16,
                           VAR_5->buffer->data[VAR_8] + VAR_15 * (2 * VAR_5->padding_size - VAR_16), VAR_15);
                } else {
                    FUNC_8(VAR_5->buffer->data[VAR_8] + VAR_15 * VAR_16, 0, VAR_15);
                }
            }
        VAR_5->initial_padding_filled = 1;
    }

    if (!VAR_7 && !VAR_5->final_padding_filled) {
        int VAR_17 = FUNC_2(VAR_5->avr->internal_sample_fmt);
        int VAR_18;

        VAR_13 = FUNC_6(VAR_5->buffer,
                                    FUNC_1(VAR_9, VAR_10) +
                                    VAR_5->padding_size);
        if (VAR_13 < 0) {
            FUNC_3(VAR_5->avr, VAR_0, "Error reallocating resampling buffer\n");
            return FUNC_0(VAR_3);
        }

        for (VAR_18 = 0; VAR_18 < VAR_5->padding_size; VAR_18++)
            for (VAR_8 = 0; VAR_8 < VAR_5->buffer->channels; VAR_8++) {
                if (VAR_10 > VAR_18) {
                    FUNC_7(VAR_5->buffer->data[VAR_8] + VAR_17 * (VAR_10 + VAR_18),
                           VAR_5->buffer->data[VAR_8] + VAR_17 * (VAR_10 - VAR_18 - 1),
                           VAR_17);
                } else {
                    FUNC_8(VAR_5->buffer->data[VAR_8] + VAR_17 * (VAR_10 + VAR_18),
                           0, VAR_17);
                }
            }
        VAR_5->buffer->nb_samples += VAR_5->padding_size;
        VAR_5->final_padding_samples = VAR_5->padding_size;
        VAR_5->final_padding_filled = 1;
    }




    if (!VAR_6->read_only && VAR_6->allow_realloc) {
        VAR_12 = FUNC_9(VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_5->buffer->nb_samples,
                               VAR_4, 0, VAR_14);
        VAR_13 = FUNC_6(VAR_6, VAR_12);
        if (VAR_13 < 0) {
            FUNC_3(VAR_5->avr, VAR_0, "error reallocating output\n");
            return VAR_13;
        }
    }


    for (VAR_8 = 0; VAR_8 < VAR_5->buffer->channels; VAR_8++) {
        VAR_12 = FUNC_9(VAR_5, (void *)VAR_6->data[VAR_8],
                               (const void *)VAR_5->buffer->data[VAR_8], &VAR_11,
                               VAR_5->buffer->nb_samples, VAR_6->allocated_samples,
                               VAR_8 + 1 == VAR_5->buffer->channels, VAR_14);
    }
    if (VAR_12 < 0) {
        FUNC_3(VAR_5->avr, VAR_0, "error during resampling\n");
        return VAR_12;
    }


    FUNC_5(VAR_5->buffer, VAR_11);
    VAR_5->initial_padding_samples = FUNC_1(VAR_5->initial_padding_samples - VAR_11, 0);

    FUNC_3(VAR_5->avr, VAR_1, "resampled %d in + %d leftover to %d out + %d leftover\n",
            VAR_9, VAR_10, VAR_12, VAR_5->buffer->nb_samples);

    VAR_6->nb_samples = VAR_12;
    return 0;
}
