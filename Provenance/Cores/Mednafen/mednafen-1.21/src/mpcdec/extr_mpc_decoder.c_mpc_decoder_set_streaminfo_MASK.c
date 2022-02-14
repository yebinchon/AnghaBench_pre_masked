
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stream_version; int samples; scalar_t__ is_true_gapless; scalar_t__ beg_silence; int channels; int max_band; int ms; } ;
typedef TYPE_1__ mpc_streaminfo ;
struct TYPE_6__ {int stream_version; int samples; scalar_t__ samples_to_skip; int channels; int max_band; int ms; } ;
typedef TYPE_2__ mpc_decoder ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(mpc_decoder *VAR_2, mpc_streaminfo *VAR_3)
{
 VAR_2->stream_version = VAR_3->stream_version;
 VAR_2->ms = VAR_3->ms;
 VAR_2->max_band = VAR_3->max_band;
 VAR_2->channels = VAR_3->channels;
 VAR_2->samples_to_skip = VAR_0 + VAR_3->beg_silence;

 if (VAR_3->stream_version == 7 && VAR_3->is_true_gapless)
  VAR_2->samples = ((VAR_3->samples + VAR_1 - 1) / VAR_1) * VAR_1;
 else
  VAR_2->samples = VAR_3->samples;
}
