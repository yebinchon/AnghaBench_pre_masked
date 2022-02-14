
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sse41; scalar_t__ sse2; scalar_t__ mmx; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_1__ ia32; scalar_t__ use_asm; } ;
struct TYPE_12__ {TYPE_3__* private_; TYPE_2__* protected_; } ;
struct TYPE_11__ {int has_stream_info; int cached; int is_seeking; int internal_reset_hack; int do_md5_checking; scalar_t__ samples_decoded; scalar_t__ next_fixed_block_size; scalar_t__ fixed_block_size; void* client_data; scalar_t__ error_callback; int metadata_callback; scalar_t__ write_callback; scalar_t__ eof_callback; scalar_t__ length_callback; scalar_t__ tell_callback; scalar_t__ seek_callback; scalar_t__ read_callback; int input; TYPE_7__ cpuinfo; int local_lpc_restore_signal_64bit; void* local_lpc_restore_signal_16bit; void* local_lpc_restore_signal; scalar_t__ is_ogg; } ;
struct TYPE_10__ {scalar_t__ state; int md5_checking; int initstate; int ogg_decoder_aspect; } ;
typedef scalar_t__ FLAC__bool ;
typedef scalar_t__ FLAC__StreamDecoderWriteCallback ;
typedef scalar_t__ FLAC__StreamDecoderTellCallback ;
typedef scalar_t__ FLAC__StreamDecoderSeekCallback ;
typedef scalar_t__ FLAC__StreamDecoderReadCallback ;
typedef int FLAC__StreamDecoderMetadataCallback ;
typedef scalar_t__ FLAC__StreamDecoderLengthCallback ;
typedef int FLAC__StreamDecoderInitStatus ;
typedef scalar_t__ FLAC__StreamDecoderErrorCallback ;
typedef scalar_t__ FLAC__StreamDecoderEofCallback ;
typedef TYPE_4__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_7__*) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_18 ;

__attribute__((used)) static FLAC__StreamDecoderInitStatus FUNC_5(
 FLAC__StreamDecoder *VAR_19,
 FLAC__StreamDecoderReadCallback VAR_20,
 FLAC__StreamDecoderSeekCallback VAR_21,
 FLAC__StreamDecoderTellCallback VAR_22,
 FLAC__StreamDecoderLengthCallback VAR_23,
 FLAC__StreamDecoderEofCallback VAR_24,
 FLAC__StreamDecoderWriteCallback VAR_25,
 FLAC__StreamDecoderMetadataCallback VAR_26,
 FLAC__StreamDecoderErrorCallback VAR_27,
 void *VAR_28,
 FLAC__bool VAR_29
)
{
 FUNC_0(0 != VAR_19);

 if(VAR_19->protected_->state != VAR_10)
  return VAR_3;

 if(VAR_2 == 0 && VAR_29)
  return VAR_8;

 if(
  0 == VAR_20 ||
  0 == VAR_25 ||
  0 == VAR_27 ||
  (VAR_21 && (0 == VAR_22 || 0 == VAR_23 || 0 == VAR_24))
 )
  return VAR_5;
 FUNC_2(&VAR_19->private_->cpuinfo);

 VAR_19->private_->local_lpc_restore_signal = VAR_11;
 VAR_19->private_->local_lpc_restore_signal_64bit = VAR_15;
 VAR_19->private_->local_lpc_restore_signal_16bit = VAR_11;


 if(VAR_19->private_->cpuinfo.use_asm) {
 }




 if(!FUNC_1(VAR_19->private_->input, VAR_18, VAR_19)) {
  VAR_19->protected_->state = VAR_9;
  return VAR_6;
 }

 VAR_19->private_->read_callback = VAR_20;
 VAR_19->private_->seek_callback = VAR_21;
 VAR_19->private_->tell_callback = VAR_22;
 VAR_19->private_->length_callback = VAR_23;
 VAR_19->private_->eof_callback = VAR_24;
 VAR_19->private_->write_callback = VAR_25;
 VAR_19->private_->metadata_callback = VAR_26;
 VAR_19->private_->error_callback = VAR_27;
 VAR_19->private_->client_data = VAR_28;
 VAR_19->private_->fixed_block_size = VAR_19->private_->next_fixed_block_size = 0;
 VAR_19->private_->samples_decoded = 0;
 VAR_19->private_->has_stream_info = 0;
 VAR_19->private_->cached = 0;

 VAR_19->private_->do_md5_checking = VAR_19->protected_->md5_checking;
 VAR_19->private_->is_seeking = 0;

 VAR_19->private_->internal_reset_hack = 1;
 if(!FUNC_4(VAR_19)) {

  return VAR_6;
 }

 return VAR_7;
}
