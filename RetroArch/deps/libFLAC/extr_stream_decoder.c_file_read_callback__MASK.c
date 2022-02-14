
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {int file; } ;
typedef int FLAC__byte ;
typedef int FLAC__StreamDecoderReadStatus ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int *,int,size_t,int ) ;

FLAC__StreamDecoderReadStatus FUNC_2(const FLAC__StreamDecoder *VAR_3, FLAC__byte VAR_4[], size_t *VAR_5, void *VAR_6)
{
 (void)VAR_6;

 if(*VAR_5 > 0) {
  *VAR_5 = FUNC_1(VAR_4, sizeof(FLAC__byte), *VAR_5, VAR_3->private_->file);
  if(FUNC_0(VAR_3->private_->file))
   return VAR_0;
  else if(*VAR_5 == 0)
   return VAR_2;
  else
   return VAR_1;
 }
 else
  return VAR_0;
}
