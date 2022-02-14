
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* private_; TYPE_1__* protected_; } ;
struct TYPE_7__ {int * file; } ;
struct TYPE_6__ {scalar_t__ state; int initstate; } ;
typedef int FLAC__bool ;
typedef scalar_t__ FLAC__StreamDecoderWriteCallback ;
typedef int FLAC__StreamDecoderMetadataCallback ;
typedef int FLAC__StreamDecoderInitStatus ;
typedef scalar_t__ FLAC__StreamDecoderErrorCallback ;
typedef TYPE_3__ FLAC__StreamDecoder ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int ,int ,scalar_t__,int ,scalar_t__,void*,int ) ;
 int * VAR_8 ;

__attribute__((used)) static FLAC__StreamDecoderInitStatus FUNC_3(
 FLAC__StreamDecoder *VAR_9,
 FILE *VAR_10,
 FLAC__StreamDecoderWriteCallback VAR_11,
 FLAC__StreamDecoderMetadataCallback VAR_12,
 FLAC__StreamDecoderErrorCallback VAR_13,
 void *VAR_14,
 FLAC__bool VAR_15
)
{
 FUNC_0(0 != VAR_9);
 FUNC_0(0 != VAR_10);

 if(VAR_9->protected_->state != VAR_2)
  return VAR_9->protected_->initstate = VAR_0;

 if(0 == VAR_11 || 0 == VAR_13)
  return VAR_9->protected_->initstate = VAR_1;






 if(VAR_10 == VAR_8)
  VAR_10 = FUNC_1();

 VAR_9->private_->file = VAR_10;

 return FUNC_2(
  VAR_9,
  VAR_5,
  VAR_9->private_->file == VAR_8? 0: VAR_6,
  VAR_9->private_->file == VAR_8? 0: VAR_7,
  VAR_9->private_->file == VAR_8? 0: VAR_4,
  VAR_3,
  VAR_11,
  VAR_12,
  VAR_13,
  VAR_14,
  VAR_15
 );
}
