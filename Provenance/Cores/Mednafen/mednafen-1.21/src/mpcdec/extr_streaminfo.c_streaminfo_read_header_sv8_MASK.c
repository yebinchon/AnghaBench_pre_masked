
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mpc_uint32_t ;
struct TYPE_8__ {int stream_version; double samples; double beg_silence; int is_true_gapless; double sample_freq; int max_band; int channels; int ms; int block_pwr; double average_bitrate; double tag_offset; double header_position; scalar_t__ bitrate; } ;
typedef TYPE_1__ mpc_streaminfo ;
typedef int mpc_status ;
typedef scalar_t__ mpc_size_t ;
struct TYPE_9__ {int count; scalar_t__ buff; } ;
typedef TYPE_2__ mpc_bits_reader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,double*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (scalar_t__,int) ;
 double* VAR_1 ;

mpc_status
FUNC_4(mpc_streaminfo* VAR_2, const mpc_bits_reader * VAR_3,
         mpc_size_t VAR_4)
{
 mpc_uint32_t VAR_5;
 mpc_bits_reader VAR_6 = *VAR_3;

 VAR_5 = (FUNC_2(&VAR_6, 16) << 16) | FUNC_2(&VAR_6, 16);
 if (VAR_5 != FUNC_3(VAR_6.buff + 1 - (VAR_6.count >> 3), (int)VAR_4 - 4))
  return VAR_0;

 VAR_2->stream_version = FUNC_2(&VAR_6, 8);
 if (VAR_2->stream_version != 8)
  return VAR_0;

 FUNC_1(&VAR_6, &VAR_2->samples);
 FUNC_1(&VAR_6, &VAR_2->beg_silence);

 VAR_2->is_true_gapless = 1;
 VAR_2->sample_freq = VAR_1[FUNC_2(&VAR_6, 3)];
 VAR_2->max_band = FUNC_2(&VAR_6, 5) + 1;
 VAR_2->channels = FUNC_2(&VAR_6, 4) + 1;
 VAR_2->ms = FUNC_2(&VAR_6, 1);
 VAR_2->block_pwr = FUNC_2(&VAR_6, 3) * 2;

 VAR_2->bitrate = 0;

 if ((VAR_2->samples - VAR_2->beg_silence) != 0)
  VAR_2->average_bitrate = (VAR_2->tag_offset - VAR_2->header_position) * 8.0
    * VAR_2->sample_freq / (VAR_2->samples - VAR_2->beg_silence);

 return FUNC_0(VAR_2);
}
