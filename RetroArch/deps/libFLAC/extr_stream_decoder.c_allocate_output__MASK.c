
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* private_; TYPE_1__* protected_; } ;
struct TYPE_6__ {unsigned int output_capacity; unsigned int output_channels; scalar_t__* residual_unaligned; int ** residual; int ** output; } ;
struct TYPE_5__ {void* state; } ;
typedef int FLAC__int32 ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (unsigned int,int **,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int,unsigned int,int) ;

FLAC__bool FUNC_4(FLAC__StreamDecoder *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;
 FLAC__int32 *VAR_6;

 if(VAR_3 <= VAR_2->private_->output_capacity && VAR_4 <= VAR_2->private_->output_channels)
  return 1;



 for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if(0 != VAR_2->private_->output[VAR_5]) {
   FUNC_1(VAR_2->private_->output[VAR_5]-4);
   VAR_2->private_->output[VAR_5] = 0;
  }
  if(0 != VAR_2->private_->residual_unaligned[VAR_5]) {
   FUNC_1(VAR_2->private_->residual_unaligned[VAR_5]);
   VAR_2->private_->residual_unaligned[VAR_5] = VAR_2->private_->residual[VAR_5] = 0;
  }
 }

 for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {






  VAR_6 = (FLAC__int32*)FUNC_3(sizeof(FLAC__int32), VAR_3, 4 );
  if(VAR_6 == 0) {
   VAR_2->protected_->state = VAR_1;
   return 0;
  }
  FUNC_2(VAR_6, 0, sizeof(FLAC__int32)*4);
  VAR_2->private_->output[VAR_5] = VAR_6 + 4;

  if(!FUNC_0(VAR_3, &VAR_2->private_->residual_unaligned[VAR_5], &VAR_2->private_->residual[VAR_5])) {
   VAR_2->protected_->state = VAR_1;
   return 0;
  }
 }

 VAR_2->private_->output_capacity = VAR_3;
 VAR_2->private_->output_channels = VAR_4;

 return 1;
}
