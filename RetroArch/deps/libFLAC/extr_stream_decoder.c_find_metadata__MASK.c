
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* protected_; TYPE_1__* private_; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int cached; void** header_warmup; void* lookahead; int input; } ;
typedef int FLAC__uint32 ;
typedef void* FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int) ;
 int* VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

FLAC__bool FUNC_5(FLAC__StreamDecoder *VAR_5)
{
 FLAC__uint32 VAR_6;
 unsigned VAR_7, VAR_8;
 FLAC__bool VAR_9 = 1;

 FUNC_0(FUNC_1(VAR_5->private_->input));

 for(VAR_7 = VAR_8 = 0; VAR_7 < 4; ) {
  if(VAR_5->private_->cached) {
   VAR_6 = (FLAC__uint32)VAR_5->private_->lookahead;
   VAR_5->private_->cached = 0;
  }
  else {
   if(!FUNC_2(VAR_5->private_->input, &VAR_6, 8))
    return 0;
  }
  if(VAR_6 == VAR_3[VAR_7]) {
   VAR_9 = 1;
   VAR_7++;
   VAR_8 = 0;
   continue;
  }

  if(VAR_8 >= 3)
   return 0;

  if(VAR_6 == VAR_4[VAR_8]) {
   VAR_8++;
   VAR_7 = 0;
   if(VAR_8 == 3) {
    if(!FUNC_4(VAR_5))
     return 0;
   }
   continue;
  }
  VAR_8 = 0;
  if(VAR_6 == 0xff) {
   VAR_5->private_->header_warmup[0] = (FLAC__byte)VAR_6;
   if(!FUNC_2(VAR_5->private_->input, &VAR_6, 8))
    return 0;



   if(VAR_6 == 0xff) {
    VAR_5->private_->lookahead = (FLAC__byte)VAR_6;
    VAR_5->private_->cached = 1;
   }
   else if(VAR_6 >> 1 == 0x7c) {
    VAR_5->private_->header_warmup[1] = (FLAC__byte)VAR_6;
    VAR_5->protected_->state = VAR_1;
    return 1;
   }
  }
  VAR_7 = 0;
  if(VAR_9) {
   FUNC_3(VAR_5, VAR_0);
   VAR_9 = 0;
  }
 }

 VAR_5->protected_->state = VAR_2;
 return 1;
}
