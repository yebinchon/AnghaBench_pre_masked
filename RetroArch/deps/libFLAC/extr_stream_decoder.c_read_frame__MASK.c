
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {scalar_t__ sample_number; } ;
struct TYPE_16__ {int blocksize; unsigned int channels; unsigned int bits_per_sample; int channel_assignment; scalar_t__ number_type; TYPE_1__ number; int sample_rate; } ;
struct TYPE_19__ {TYPE_3__ header; } ;
struct TYPE_18__ {TYPE_2__* protected_; TYPE_4__* private_; } ;
struct TYPE_17__ {int** output; TYPE_7__ frame; scalar_t__ samples_decoded; scalar_t__ next_fixed_block_size; scalar_t__ fixed_block_size; int input; int * header_warmup; } ;
struct TYPE_15__ {scalar_t__ state; unsigned int channels; int channel_assignment; unsigned int bits_per_sample; int blocksize; int sample_rate; } ;
typedef unsigned int FLAC__uint32 ;
typedef int FLAC__uint16 ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_5__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;




 unsigned int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_5__*,int,unsigned int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,unsigned int,unsigned int,int) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_5__*,TYPE_7__*,int const* const*) ;

FLAC__bool FUNC_12(FLAC__StreamDecoder *VAR_6, FLAC__bool *VAR_7, FLAC__bool VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10;
 FLAC__int32 VAR_11, VAR_12;
 unsigned VAR_13;
 FLAC__uint32 VAR_14;

 *VAR_7 = 0;


 VAR_13 = 0;
 VAR_13 = FUNC_1(VAR_6->private_->header_warmup[0], VAR_13);
 VAR_13 = FUNC_1(VAR_6->private_->header_warmup[1], VAR_13);
 FUNC_4(VAR_6->private_->input, (FLAC__uint16)VAR_13);

 if(!FUNC_7(VAR_6))
  return 0;
 if(VAR_6->protected_->state == VAR_4)
  return 1;
 if(!FUNC_5(VAR_6, VAR_6->private_->frame.header.blocksize, VAR_6->private_->frame.header.channels))
  return 0;
 for(VAR_9 = 0; VAR_9 < VAR_6->private_->frame.header.channels; VAR_9++) {



  unsigned VAR_15 = VAR_6->private_->frame.header.bits_per_sample;
  switch(VAR_6->private_->frame.header.channel_assignment) {
   case 131:

    break;
   case 130:
    FUNC_0(VAR_6->private_->frame.header.channels == 2);
    if(VAR_9 == 1)
     VAR_15++;
    break;
   case 128:
    FUNC_0(VAR_6->private_->frame.header.channels == 2);
    if(VAR_9 == 0)
     VAR_15++;
    break;
   case 129:
    FUNC_0(VAR_6->private_->frame.header.channels == 2);
    if(VAR_9 == 1)
     VAR_15++;
    break;
   default:
    FUNC_0(0);
  }



  if(!FUNC_8(VAR_6, VAR_9, VAR_15, VAR_8))
   return 0;
  if(VAR_6->protected_->state == VAR_4)
   return 1;
 }
 if(!FUNC_9(VAR_6))
  return 0;
 if(VAR_6->protected_->state == VAR_4)
  return 1;




 VAR_13 = FUNC_2(VAR_6->private_->input);
 if(!FUNC_3(VAR_6->private_->input, &VAR_14, VAR_0))
  return 0;
 if(VAR_13 == VAR_14) {
  if(VAR_8) {

   switch(VAR_6->private_->frame.header.channel_assignment) {
    case 131:

     break;
    case 130:
     FUNC_0(VAR_6->private_->frame.header.channels == 2);
     for(VAR_10 = 0; VAR_10 < VAR_6->private_->frame.header.blocksize; VAR_10++)
      VAR_6->private_->output[1][VAR_10] = VAR_6->private_->output[0][VAR_10] - VAR_6->private_->output[1][VAR_10];
     break;
    case 128:
     FUNC_0(VAR_6->private_->frame.header.channels == 2);
     for(VAR_10 = 0; VAR_10 < VAR_6->private_->frame.header.blocksize; VAR_10++)
      VAR_6->private_->output[0][VAR_10] += VAR_6->private_->output[1][VAR_10];
     break;
    case 129:
     FUNC_0(VAR_6->private_->frame.header.channels == 2);
     for(VAR_10 = 0; VAR_10 < VAR_6->private_->frame.header.blocksize; VAR_10++) {

      VAR_11 = VAR_6->private_->output[0][VAR_10];
      VAR_12 = VAR_6->private_->output[1][VAR_10];
      VAR_11 = ((uint32_t) VAR_11) << 1;
      VAR_11 |= (VAR_12 & 1);
      VAR_6->private_->output[0][VAR_10] = (VAR_11 + VAR_12) >> 1;
      VAR_6->private_->output[1][VAR_10] = (VAR_11 - VAR_12) >> 1;






     }
     break;
    default:
     FUNC_0(0);
     break;
   }
  }
 }
 else {

  FUNC_10(VAR_6, VAR_3);
  if(VAR_8) {
   for(VAR_9 = 0; VAR_9 < VAR_6->private_->frame.header.channels; VAR_9++) {
    FUNC_6(VAR_6->private_->output[VAR_9], 0, sizeof(FLAC__int32) * VAR_6->private_->frame.header.blocksize);
   }
  }
 }

 *VAR_7 = 1;


 if(VAR_6->private_->next_fixed_block_size)
  VAR_6->private_->fixed_block_size = VAR_6->private_->next_fixed_block_size;


 VAR_6->protected_->channels = VAR_6->private_->frame.header.channels;
 VAR_6->protected_->channel_assignment = VAR_6->private_->frame.header.channel_assignment;
 VAR_6->protected_->bits_per_sample = VAR_6->private_->frame.header.bits_per_sample;
 VAR_6->protected_->sample_rate = VAR_6->private_->frame.header.sample_rate;
 VAR_6->protected_->blocksize = VAR_6->private_->frame.header.blocksize;

 FUNC_0(VAR_6->private_->frame.header.number_type == VAR_1);
 VAR_6->private_->samples_decoded = VAR_6->private_->frame.header.number.sample_number + VAR_6->private_->frame.header.blocksize;


 if(VAR_8) {
  if(FUNC_11(VAR_6, &VAR_6->private_->frame, (const FLAC__int32 * const *)VAR_6->private_->output) != VAR_5) {
   VAR_6->protected_->state = VAR_2;
   return 0;
  }
 }

 VAR_6->protected_->state = VAR_4;
 return 1;
}
