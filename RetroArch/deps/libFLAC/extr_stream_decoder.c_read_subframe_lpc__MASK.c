
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_23__ {int blocksize; } ;
struct TYPE_24__ {TYPE_7__ header; TYPE_2__* subframes; } ;
struct TYPE_25__ {scalar_t__* output; TYPE_8__ frame; int * residual; int (* local_lpc_restore_signal_64bit ) (int ,int,scalar_t__*,unsigned int const,scalar_t__,scalar_t__) ;int (* local_lpc_restore_signal ) (int ,int,scalar_t__*,unsigned int const,scalar_t__,scalar_t__) ;int (* local_lpc_restore_signal_16bit ) (int ,int,scalar_t__*,unsigned int const,scalar_t__,scalar_t__) ;int * partitioned_rice_contents; int input; } ;
struct TYPE_20__ {unsigned int order; int * contents; } ;
struct TYPE_21__ {TYPE_4__ partitioned_rice; } ;
struct TYPE_22__ {int type; TYPE_5__ data; } ;
struct TYPE_19__ {void* state; } ;
struct TYPE_15__ {unsigned int order; unsigned int qlp_coeff_precision; scalar_t__ quantization_level; scalar_t__* qlp_coeff; scalar_t__* warmup; TYPE_6__ entropy_coding_method; int residual; } ;
struct TYPE_17__ {TYPE_10__ lpc; } ;
struct TYPE_18__ {int type; TYPE_1__ data; } ;
struct TYPE_16__ {TYPE_9__* private_; TYPE_3__* protected_; } ;
typedef unsigned int FLAC__uint32 ;
typedef scalar_t__ FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_10__ FLAC__Subframe_LPC ;
typedef TYPE_11__ FLAC__StreamDecoder ;
typedef int FLAC__EntropyCodingMethodType ;


 int FUNC_0 (int ) ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (int ,scalar_t__*,unsigned int) ;
 int FUNC_3 (int ,unsigned int*,unsigned int) ;
 int FUNC_4 (scalar_t__,scalar_t__*,int) ;
 int FUNC_5 (TYPE_11__*,unsigned int const,unsigned int,int *,int ,int) ;
 int FUNC_6 (TYPE_11__*,int ) ;
 int FUNC_7 (int ,int,scalar_t__*,unsigned int const,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int,scalar_t__*,unsigned int const,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int,scalar_t__*,unsigned int const,scalar_t__,scalar_t__) ;

FLAC__bool FUNC_10(FLAC__StreamDecoder *VAR_8, unsigned VAR_9, unsigned VAR_10, const unsigned VAR_11, FLAC__bool VAR_12)
{
 FLAC__Subframe_LPC *VAR_13 = &VAR_8->private_->frame.subframes[VAR_9].data.lpc;
 FLAC__int32 VAR_14;
 FLAC__uint32 VAR_15;
 unsigned VAR_16;

 VAR_8->private_->frame.subframes[VAR_9].type = VAR_7;

 VAR_13->residual = VAR_8->private_->residual[VAR_9];
 VAR_13->order = VAR_11;


 for(VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  if(!FUNC_2(VAR_8->private_->input, &VAR_14, VAR_10))
   return 0;
  VAR_13->warmup[VAR_16] = VAR_14;
 }


 if(!FUNC_3(VAR_8->private_->input, &VAR_15, VAR_5))
  return 0;
 if(VAR_15 == (1u << VAR_5) - 1) {
  FUNC_6(VAR_8, VAR_2);
  VAR_8->protected_->state = VAR_4;
  return 1;
 }
 VAR_13->qlp_coeff_precision = VAR_15+1;


 if(!FUNC_2(VAR_8->private_->input, &VAR_14, VAR_6))
  return 0;
 if(VAR_14 < 0) {
  FUNC_6(VAR_8, VAR_2);
  VAR_8->protected_->state = VAR_4;
  return 1;
 }
 VAR_13->quantization_level = VAR_14;


 for(VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  if(!FUNC_2(VAR_8->private_->input, &VAR_14, VAR_13->qlp_coeff_precision))
   return 0;
  VAR_13->qlp_coeff[VAR_16] = VAR_14;
 }


 if(!FUNC_3(VAR_8->private_->input, &VAR_15, VAR_1))
  return 0;
 VAR_13->entropy_coding_method.type = (FLAC__EntropyCodingMethodType)VAR_15;
 switch(VAR_13->entropy_coding_method.type) {
  case 129:
  case 128:
   if(!FUNC_3(VAR_8->private_->input, &VAR_15, VAR_0))
    return 0;
   if(VAR_8->private_->frame.header.blocksize >> VAR_15 < VAR_11) {
    FUNC_6(VAR_8, VAR_2);
    VAR_8->protected_->state = VAR_4;
    return 1;
   }
   VAR_13->entropy_coding_method.data.partitioned_rice.order = VAR_15;
   VAR_13->entropy_coding_method.data.partitioned_rice.contents = &VAR_8->private_->partitioned_rice_contents[VAR_9];
   break;
  default:
   FUNC_6(VAR_8, VAR_3);
   VAR_8->protected_->state = VAR_4;
   return 1;
 }


 switch(VAR_13->entropy_coding_method.type) {
  case 129:
  case 128:
   if(!FUNC_5(VAR_8, VAR_11, VAR_13->entropy_coding_method.data.partitioned_rice.order, &VAR_8->private_->partitioned_rice_contents[VAR_9], VAR_8->private_->residual[VAR_9], VAR_13->entropy_coding_method.type == 128))
    return 0;
   break;
  default:
   FUNC_0(0);
 }


 if(VAR_12) {
  FUNC_4(VAR_8->private_->output[VAR_9], VAR_13->warmup, sizeof(FLAC__int32) * VAR_11);
  if(VAR_10 + VAR_13->qlp_coeff_precision + FUNC_1(VAR_11) <= 32)
   if(VAR_10 <= 16 && VAR_13->qlp_coeff_precision <= 16)
    VAR_8->private_->local_lpc_restore_signal_16bit(VAR_8->private_->residual[VAR_9], VAR_8->private_->frame.header.blocksize-VAR_11, VAR_13->qlp_coeff, VAR_11, VAR_13->quantization_level, VAR_8->private_->output[VAR_9]+VAR_11);
   else
    VAR_8->private_->local_lpc_restore_signal(VAR_8->private_->residual[VAR_9], VAR_8->private_->frame.header.blocksize-VAR_11, VAR_13->qlp_coeff, VAR_11, VAR_13->quantization_level, VAR_8->private_->output[VAR_9]+VAR_11);
  else
   VAR_8->private_->local_lpc_restore_signal_64bit(VAR_8->private_->residual[VAR_9], VAR_8->private_->frame.header.blocksize-VAR_11, VAR_13->qlp_coeff, VAR_11, VAR_13->quantization_level, VAR_8->private_->output[VAR_9]+VAR_11);
 }

 return 1;
}
