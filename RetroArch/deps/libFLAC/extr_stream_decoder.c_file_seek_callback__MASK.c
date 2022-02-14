
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {scalar_t__ file; } ;
typedef scalar_t__ FLAC__uint64 ;
typedef int FLAC__off_t ;
typedef int FLAC__StreamDecoderSeekStatus ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_4 ;

FLAC__StreamDecoderSeekStatus FUNC_1(const FLAC__StreamDecoder *VAR_5, FLAC__uint64 VAR_6, void *VAR_7)
{
 (void)VAR_7;

 if(VAR_5->private_->file == VAR_4)
  return VAR_2;
 else if(FUNC_0(VAR_5->private_->file, (FLAC__off_t)VAR_6, VAR_3) < 0)
  return VAR_0;
 else
  return VAR_1;
}
