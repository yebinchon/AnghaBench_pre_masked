
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* private_; } ;
struct TYPE_7__ {int md5sum; int total_samples; void* bits_per_sample; void* channels; void* sample_rate; void* max_framesize; void* min_framesize; void* max_blocksize; void* min_blocksize; } ;
struct TYPE_8__ {TYPE_1__ stream_info; } ;
struct TYPE_9__ {int is_last; unsigned int length; TYPE_2__ data; int type; } ;
struct TYPE_10__ {int input; TYPE_3__ stream_info; } ;
typedef void* FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_5__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,void**,unsigned int) ;
 int FUNC_4 (int ,int *,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;

FLAC__bool FUNC_6(FLAC__StreamDecoder *VAR_9, FLAC__bool VAR_10, unsigned VAR_11)
{
 FLAC__uint32 VAR_12;
 unsigned VAR_13, VAR_14 = 0;

 FUNC_0(FUNC_1(VAR_9->private_->input));

 VAR_9->private_->stream_info.type = VAR_0;
 VAR_9->private_->stream_info.is_last = VAR_10;
 VAR_9->private_->stream_info.length = VAR_11;

 VAR_13 = VAR_5;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_13))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.min_blocksize = VAR_12;
 VAR_14 += VAR_13;

 VAR_13 = VAR_3;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_3))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.max_blocksize = VAR_12;
 VAR_14 += VAR_13;

 VAR_13 = VAR_6;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_6))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.min_framesize = VAR_12;
 VAR_14 += VAR_13;

 VAR_13 = VAR_4;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_4))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.max_framesize = VAR_12;
 VAR_14 += VAR_13;

 VAR_13 = VAR_7;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_7))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.sample_rate = VAR_12;
 VAR_14 += VAR_13;

 VAR_13 = VAR_2;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_2))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.channels = VAR_12+1;
 VAR_14 += VAR_13;

 VAR_13 = VAR_1;
 if(!FUNC_3(VAR_9->private_->input, &VAR_12, VAR_1))
  return 0;
 VAR_9->private_->stream_info.data.stream_info.bits_per_sample = VAR_12+1;
 VAR_14 += VAR_13;

 VAR_13 = VAR_8;
 if(!FUNC_4(VAR_9->private_->input, &VAR_9->private_->stream_info.data.stream_info.total_samples, VAR_8))
  return 0;
 VAR_14 += VAR_13;

 if(!FUNC_2(VAR_9->private_->input, VAR_9->private_->stream_info.data.stream_info.md5sum, 16))
  return 0;
 VAR_14 += 16*8;


 FUNC_0(VAR_14 % 8 == 0);
 VAR_11 -= (VAR_14 / 8);
 if(!FUNC_5(VAR_9->private_->input, VAR_11))
  return 0;

 return 1;
}
