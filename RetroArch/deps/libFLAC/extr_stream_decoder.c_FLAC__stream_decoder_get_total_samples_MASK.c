
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ protected_; TYPE_4__* private_; } ;
struct TYPE_7__ {int total_samples; } ;
struct TYPE_8__ {TYPE_1__ stream_info; } ;
struct TYPE_9__ {TYPE_2__ data; } ;
struct TYPE_10__ {TYPE_3__ stream_info; scalar_t__ has_stream_info; } ;
typedef int FLAC__uint64 ;
typedef TYPE_5__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;

FLAC__uint64 FUNC_1(const FLAC__StreamDecoder *VAR_0)
{
 FUNC_0(0 != VAR_0);
 FUNC_0(0 != VAR_0->protected_);
 return VAR_0->private_->has_stream_info? VAR_0->private_->stream_info.data.stream_info.total_samples : 0;
}
