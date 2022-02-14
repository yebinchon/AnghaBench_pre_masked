
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct flac_stat_s {scalar_t__ st_size; } ;
struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {scalar_t__ file; } ;
typedef scalar_t__ FLAC__uint64 ;
typedef int FLAC__StreamDecoderLengthStatus ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,struct flac_stat_s*) ;
 scalar_t__ VAR_3 ;

FLAC__StreamDecoderLengthStatus FUNC_2(const FLAC__StreamDecoder *VAR_4, FLAC__uint64 *VAR_5, void *VAR_6)
{
 struct flac_stat_s VAR_7;
 (void)VAR_6;

 if(VAR_4->private_->file == VAR_3)
  return VAR_2;
 else if(FUNC_1(FUNC_0(VAR_4->private_->file), &VAR_7) != 0)
  return VAR_0;
 else {
  *VAR_5 = (FLAC__uint64)VAR_7.st_size;
  return VAR_1;
 }
}
