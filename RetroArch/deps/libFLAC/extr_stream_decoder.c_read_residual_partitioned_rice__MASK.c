
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {unsigned int* parameters; unsigned int* raw_bits; } ;
struct TYPE_14__ {TYPE_4__* private_; TYPE_3__* protected_; } ;
struct TYPE_10__ {unsigned int blocksize; } ;
struct TYPE_11__ {TYPE_1__ header; } ;
struct TYPE_13__ {int input; TYPE_2__ frame; } ;
struct TYPE_12__ {int state; } ;
typedef unsigned int const FLAC__uint32 ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_5__ FLAC__StreamDecoder ;
typedef TYPE_6__ FLAC__EntropyCodingMethod_PartitionedRiceContents ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int const VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int*,unsigned int const) ;
 int FUNC_2 (int ,unsigned int const*,unsigned int const) ;
 int FUNC_3 (int ,int*,unsigned int,unsigned int const) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (unsigned int,unsigned int) ;

FLAC__bool FUNC_6(FLAC__StreamDecoder *VAR_6, unsigned VAR_7, unsigned VAR_8, FLAC__EntropyCodingMethod_PartitionedRiceContents *VAR_9, FLAC__int32 *VAR_10, FLAC__bool VAR_11)
{
 FLAC__uint32 VAR_12;
 int VAR_13;
 unsigned VAR_14, VAR_15, VAR_16;
 const unsigned VAR_17 = 1u << VAR_8;
 const unsigned VAR_18 = VAR_8 > 0? VAR_6->private_->frame.header.blocksize >> VAR_8 : VAR_6->private_->frame.header.blocksize - VAR_7;
 const unsigned VAR_19 = VAR_11? VAR_1 : VAR_3;
 const unsigned VAR_20 = VAR_11? VAR_0 : VAR_2;


 FUNC_0(VAR_8 > 0? VAR_18 >= VAR_7 : VAR_6->private_->frame.header.blocksize >= VAR_7);

 if(!FUNC_4(VAR_9, FUNC_5(6u, VAR_8))) {
  VAR_6->protected_->state = VAR_5;
  return 0;
 }

 VAR_15 = 0;
 for(VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
  if(!FUNC_2(VAR_6->private_->input, &VAR_12, VAR_19))
   return 0;
  VAR_9->parameters[VAR_14] = VAR_12;
  if(VAR_12 < VAR_20) {
   VAR_9->raw_bits[VAR_14] = 0;
   VAR_16 = (VAR_8 == 0 || VAR_14 > 0)? VAR_18 : VAR_18 - VAR_7;
   if(!FUNC_3(VAR_6->private_->input, VAR_10 + VAR_15, VAR_16, VAR_12))
    return 0;
   VAR_15 += VAR_16;
  }
  else {
   if(!FUNC_2(VAR_6->private_->input, &VAR_12, VAR_4))
    return 0;
   VAR_9->raw_bits[VAR_14] = VAR_12;
   for(VAR_16 = (VAR_8 == 0 || VAR_14 > 0)? 0 : VAR_7; VAR_16 < VAR_18; VAR_16++, VAR_15++) {
    if(!FUNC_1(VAR_6->private_->input, &VAR_13, VAR_12))
     return 0;
    VAR_10[VAR_15] = VAR_13;
   }
  }
 }

 return 1;
}
