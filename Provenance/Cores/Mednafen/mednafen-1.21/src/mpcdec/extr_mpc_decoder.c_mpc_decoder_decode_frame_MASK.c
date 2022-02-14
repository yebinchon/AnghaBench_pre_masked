
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int mpc_uint32_t ;
typedef int mpc_int64_t ;
struct TYPE_14__ {int samples; int bits; scalar_t__ buffer; int is_key_frame; } ;
typedef TYPE_1__ mpc_frame_info ;
struct TYPE_15__ {int samples; int decoded_samples; int stream_version; int samples_to_skip; int channels; } ;
typedef TYPE_2__ mpc_decoder ;
struct TYPE_16__ {int buff; scalar_t__ count; } ;
typedef TYPE_3__ mpc_bits_reader ;
typedef int MPC_SAMPLE_FORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int) ;

void FUNC_6(mpc_decoder * VAR_2,
         mpc_bits_reader * VAR_3,
         mpc_frame_info * VAR_4)
{
 mpc_bits_reader VAR_5 = *VAR_3;
 mpc_int64_t VAR_6;

 VAR_6 = VAR_2->samples - VAR_2->decoded_samples + VAR_0;

 if (VAR_6 <= 0 && VAR_2->samples != 0) {
  VAR_4->samples = 0;
  VAR_4->bits = -1;
  return;
 }

 if (VAR_2->stream_version == 8)
  FUNC_3(VAR_2, VAR_3, VAR_4->is_key_frame);
 else
  FUNC_2(VAR_2, VAR_3);

 if (VAR_2->samples_to_skip < VAR_1 + VAR_0) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2, VAR_4->buffer, VAR_2->channels);
 }

 VAR_2->decoded_samples += VAR_1;


 if (VAR_2->decoded_samples - VAR_2->samples < VAR_1 && VAR_2->stream_version == 7) {
  int VAR_7 = FUNC_1(VAR_3, 11);
  if (VAR_2->decoded_samples == VAR_2->samples) {
   if (VAR_7 == 0) VAR_7 = VAR_1;
   VAR_2->samples += VAR_7 - VAR_1;
   VAR_6 += VAR_7 - VAR_1;
  }
 }

 VAR_4->samples = VAR_6 > VAR_1 ? VAR_1 : VAR_6 < 0 ? 0 : (mpc_uint32_t) VAR_6;
 VAR_4->bits = (mpc_uint32_t) (((VAR_3->buff - VAR_5.buff) << 3) + VAR_5.count - VAR_3->count);

 if (VAR_2->samples_to_skip) {
  if (VAR_4->samples <= VAR_2->samples_to_skip) {
   VAR_2->samples_to_skip -= VAR_4->samples;
   VAR_4->samples = 0;
  } else {
   VAR_4->samples -= VAR_2->samples_to_skip;
   FUNC_0(VAR_4->buffer, VAR_4->buffer + VAR_2->samples_to_skip * VAR_2->channels,
     VAR_4->samples * VAR_2->channels * sizeof (MPC_SAMPLE_FORMAT));
   VAR_2->samples_to_skip = 0;
  }
 }
}
