
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* protected_; TYPE_1__* private_; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {scalar_t__ samples_decoded; int cached; void** header_warmup; void* lookahead; int input; } ;
typedef int FLAC__uint32 ;
typedef void* FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;

FLAC__bool FUNC_5(FLAC__StreamDecoder *VAR_3)
{
 FLAC__uint32 VAR_4;
 FLAC__bool VAR_5 = 1;



 if(FUNC_3(VAR_3) > 0) {
  if(VAR_3->private_->samples_decoded >= FUNC_3(VAR_3)) {
   VAR_3->protected_->state = VAR_0;
   return 1;
  }
 }


 if(!FUNC_1(VAR_3->private_->input)) {
  if(!FUNC_2(VAR_3->private_->input, &VAR_4, FUNC_0(VAR_3->private_->input)))
   return 0;
 }

 while(1) {
  if(VAR_3->private_->cached) {
   VAR_4 = (FLAC__uint32)VAR_3->private_->lookahead;
   VAR_3->private_->cached = 0;
  }
  else {
   if(!FUNC_2(VAR_3->private_->input, &VAR_4, 8))
    return 0;
  }
  if(VAR_4 == 0xff) {
   VAR_3->private_->header_warmup[0] = (FLAC__byte)VAR_4;
   if(!FUNC_2(VAR_3->private_->input, &VAR_4, 8))
    return 0;



   if(VAR_4 == 0xff) {
    VAR_3->private_->lookahead = (FLAC__byte)VAR_4;
    VAR_3->private_->cached = 1;
   }
   else if(VAR_4 >> 1 == 0x7c) {
    VAR_3->private_->header_warmup[1] = (FLAC__byte)VAR_4;
    VAR_3->protected_->state = VAR_2;
    return 1;
   }
  }
  if(VAR_5) {
   FUNC_4(VAR_3, VAR_1);
   VAR_5 = 0;
  }
 }

 return 1;
}
