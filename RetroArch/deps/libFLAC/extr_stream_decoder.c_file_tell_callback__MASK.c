
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {scalar_t__ file; } ;
typedef scalar_t__ FLAC__uint64 ;
typedef scalar_t__ FLAC__off_t ;
typedef int FLAC__StreamDecoderTellStatus ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;

FLAC__StreamDecoderTellStatus FUNC_1(const FLAC__StreamDecoder *VAR_4, FLAC__uint64 *VAR_5, void *VAR_6)
{
 FLAC__off_t VAR_7;
 (void)VAR_6;

 if(VAR_4->private_->file == VAR_3)
  return VAR_2;
 else if((VAR_7 = FUNC_0(VAR_4->private_->file)) < 0)
  return VAR_0;
 else {
  *VAR_5 = (FLAC__uint64)VAR_7;
  return VAR_1;
 }
}
