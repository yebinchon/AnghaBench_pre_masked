
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int num_substreams; int * major_channel_params; int cur_channel_params; int ** major_decoding_params; int * cur_decoding_params; TYPE_1__* restart_header; TYPE_1__* cur_restart_header; int major_frame_size; int number_of_samples; int major_number_of_frames; int number_of_frames; scalar_t__ starting_frame_index; int major_inout_buffer; int sample_buffer; } ;
struct TYPE_7__ {unsigned int min_channel; unsigned int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MLPEncodeContext ;


 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(MLPEncodeContext *VAR_0)
{
    unsigned int VAR_1;

    VAR_0->sample_buffer = VAR_0->major_inout_buffer;

    VAR_0->starting_frame_index = 0;
    VAR_0->number_of_frames = VAR_0->major_number_of_frames;
    VAR_0->number_of_samples = VAR_0->major_frame_size;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_substreams; VAR_1++) {
        RestartHeader *VAR_2 = VAR_0->cur_restart_header;
        unsigned int VAR_3;

        VAR_0->cur_restart_header = &VAR_0->restart_header[VAR_1];

        VAR_0->cur_decoding_params = &VAR_0->major_decoding_params[1][VAR_1];
        VAR_0->cur_channel_params = VAR_0->major_channel_params[1];

        FUNC_1(VAR_0);
        FUNC_2 (VAR_0);

        for (VAR_3 = VAR_2->min_channel; VAR_3 <= VAR_2->max_channel; VAR_3++)
            FUNC_0(VAR_0, VAR_3);
    }
}
