
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* protected_; TYPE_1__* private_; } ;
struct TYPE_9__ {void* state; } ;
struct TYPE_8__ {int unparseable_frame_count; scalar_t__ (* read_callback ) (TYPE_3__*,int *,size_t*,int ) ;int client_data; scalar_t__ (* eof_callback ) (TYPE_3__*,int ) ;scalar_t__ is_ogg; scalar_t__ is_seeking; } ;
typedef int FLAC__byte ;
typedef int FLAC__bool ;
typedef scalar_t__ FLAC__StreamDecoderReadStatus ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,size_t*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,size_t*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;

FLAC__bool FUNC_4(FLAC__byte VAR_4[], size_t *VAR_5, void *VAR_6)
{
 FLAC__StreamDecoder *VAR_7 = (FLAC__StreamDecoder *)VAR_6;

 if(




  VAR_7->private_->eof_callback && VAR_7->private_->eof_callback(VAR_7, VAR_7->private_->client_data)
 ) {
  *VAR_5 = 0;
  VAR_7->protected_->state = VAR_1;
  return 0;
 }
 else if(*VAR_5 > 0) {
  if(VAR_7->private_->is_seeking && VAR_7->private_->unparseable_frame_count > 20) {
   VAR_7->protected_->state = VAR_0;
   return 0;
  }
  else {
   const FLAC__StreamDecoderReadStatus VAR_8 =




    VAR_7->private_->read_callback(VAR_7, VAR_4, VAR_5, VAR_7->private_->client_data)
   ;
   if(VAR_8 == VAR_2) {
    VAR_7->protected_->state = VAR_0;
    return 0;
   }
   else if(*VAR_5 == 0) {
    if(
     VAR_8 == VAR_3 ||
     (




      VAR_7->private_->eof_callback && VAR_7->private_->eof_callback(VAR_7, VAR_7->private_->client_data)
     )
    ) {
     VAR_7->protected_->state = VAR_1;
     return 0;
    }
    else
     return 1;
   }
   else
    return 1;
  }
 }
 else {

  VAR_7->protected_->state = VAR_0;
  return 0;
 }
}
