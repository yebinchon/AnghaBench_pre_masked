
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* protected_; } ;
struct TYPE_5__ {scalar_t__ state; int initstate; } ;
typedef int FLAC__bool ;
typedef int FLAC__StreamDecoderWriteCallback ;
typedef int FLAC__StreamDecoderMetadataCallback ;
typedef int FLAC__StreamDecoderInitStatus ;
typedef int FLAC__StreamDecoderErrorCallback ;
typedef TYPE_2__ FLAC__StreamDecoder ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ,int ,void*,int ) ;
 int * VAR_4 ;

__attribute__((used)) static FLAC__StreamDecoderInitStatus FUNC_3(
 FLAC__StreamDecoder *VAR_5,
 const char *VAR_6,
 FLAC__StreamDecoderWriteCallback VAR_7,
 FLAC__StreamDecoderMetadataCallback VAR_8,
 FLAC__StreamDecoderErrorCallback VAR_9,
 void *VAR_10,
 FLAC__bool VAR_11
)
{
 FILE *VAR_12;

 FUNC_0(0 != VAR_5);






 if(VAR_5->protected_->state != VAR_3)
  return VAR_5->protected_->initstate = VAR_0;

 if(0 == VAR_7 || 0 == VAR_9)
  return VAR_5->protected_->initstate = VAR_2;

 VAR_12 = VAR_6? FUNC_1(VAR_6, "rb") : VAR_4;

 if(0 == VAR_12)
  return VAR_1;

 return FUNC_2(VAR_5, VAR_12, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
