
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* private_; } ;
struct TYPE_5__ {int unparseable_frame_count; int client_data; int (* error_callback ) (TYPE_2__ const*,scalar_t__,int ) ;int is_seeking; } ;
typedef scalar_t__ FLAC__StreamDecoderErrorStatus ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,scalar_t__,int ) ;

void FUNC_1(const FLAC__StreamDecoder *VAR_1, FLAC__StreamDecoderErrorStatus VAR_2)
{
 if(!VAR_1->private_->is_seeking)
  VAR_1->private_->error_callback(VAR_1, VAR_2, VAR_1->private_->client_data);
 else if(VAR_2 == VAR_0)
  VAR_1->private_->unparseable_frame_count++;
}
