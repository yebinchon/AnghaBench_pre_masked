
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* protected_; TYPE_1__* private_; } ;
struct TYPE_7__ {int state; } ;
struct TYPE_6__ {int input; } ;
typedef scalar_t__ FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;

FLAC__bool FUNC_4(FLAC__StreamDecoder *VAR_2)
{
 if(!FUNC_1(VAR_2->private_->input)) {
  FLAC__uint32 VAR_3 = 0;
  if(!FUNC_2(VAR_2->private_->input, &VAR_3, FUNC_0(VAR_2->private_->input)))
   return 0;
  if(VAR_3 != 0) {
   FUNC_3(VAR_2, VAR_0);
   VAR_2->protected_->state = VAR_1;
  }
 }
 return 1;
}
