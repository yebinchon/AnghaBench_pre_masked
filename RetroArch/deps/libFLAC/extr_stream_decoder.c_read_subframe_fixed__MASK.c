
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
struct TYPE_25__ {scalar_t__* output; TYPE_8__ frame; int * residual; int * partitioned_rice_contents; int input; } ;
struct TYPE_20__ {unsigned int order; int * contents; } ;
struct TYPE_21__ {TYPE_4__ partitioned_rice; } ;
struct TYPE_22__ {int type; TYPE_5__ data; } ;
struct TYPE_19__ {void* state; } ;
struct TYPE_15__ {unsigned int order; int * warmup; TYPE_6__ entropy_coding_method; int residual; } ;
struct TYPE_17__ {TYPE_10__ fixed; } ;
struct TYPE_18__ {int type; TYPE_1__ data; } ;
struct TYPE_16__ {TYPE_9__* private_; TYPE_3__* protected_; } ;
typedef unsigned int const FLAC__uint32 ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_10__ FLAC__Subframe_Fixed ;
typedef TYPE_11__ FLAC__StreamDecoder ;
typedef int FLAC__EntropyCodingMethodType ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (int ,unsigned int const*,int ) ;
 int FUNC_3 (int ,int,unsigned int const,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int FUNC_5 (TYPE_11__*,unsigned int const,unsigned int,int *,int ,int) ;
 int FUNC_6 (TYPE_11__*,int ) ;

FLAC__bool FUNC_7(FLAC__StreamDecoder *VAR_6, unsigned VAR_7, unsigned VAR_8, const unsigned VAR_9, FLAC__bool VAR_10)
{
 FLAC__Subframe_Fixed *VAR_11 = &VAR_6->private_->frame.subframes[VAR_7].data.fixed;
 FLAC__int32 VAR_12;
 FLAC__uint32 VAR_13;
 unsigned VAR_14;

 VAR_6->private_->frame.subframes[VAR_7].type = VAR_5;

 VAR_11->residual = VAR_6->private_->residual[VAR_7];
 VAR_11->order = VAR_9;


 for(VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if(!FUNC_1(VAR_6->private_->input, &VAR_12, VAR_8))
   return 0;
  VAR_11->warmup[VAR_14] = VAR_12;
 }


 if(!FUNC_2(VAR_6->private_->input, &VAR_13, VAR_1))
  return 0;
 VAR_11->entropy_coding_method.type = (FLAC__EntropyCodingMethodType)VAR_13;
 switch(VAR_11->entropy_coding_method.type) {
  case 129:
  case 128:
   if(!FUNC_2(VAR_6->private_->input, &VAR_13, VAR_0))
    return 0;
   if(VAR_6->private_->frame.header.blocksize >> VAR_13 < VAR_9) {
    FUNC_6(VAR_6, VAR_2);
    VAR_6->protected_->state = VAR_4;
    return 1;
   }
   VAR_11->entropy_coding_method.data.partitioned_rice.order = VAR_13;
   VAR_11->entropy_coding_method.data.partitioned_rice.contents = &VAR_6->private_->partitioned_rice_contents[VAR_7];
   break;
  default:
   FUNC_6(VAR_6, VAR_3);
   VAR_6->protected_->state = VAR_4;
   return 1;
 }


 switch(VAR_11->entropy_coding_method.type) {
  case 129:
  case 128:
   if(!FUNC_5(VAR_6, VAR_9, VAR_11->entropy_coding_method.data.partitioned_rice.order, &VAR_6->private_->partitioned_rice_contents[VAR_7], VAR_6->private_->residual[VAR_7], VAR_11->entropy_coding_method.type == 128))
    return 0;
   break;
  default:
   FUNC_0(0);
 }


 if(VAR_10) {
  FUNC_4(VAR_6->private_->output[VAR_7], VAR_11->warmup, sizeof(FLAC__int32) * VAR_9);
  FUNC_3(VAR_6->private_->residual[VAR_7], VAR_6->private_->frame.header.blocksize-VAR_9, VAR_9, VAR_6->private_->output[VAR_7]+VAR_9);
 }

 return 1;
}
