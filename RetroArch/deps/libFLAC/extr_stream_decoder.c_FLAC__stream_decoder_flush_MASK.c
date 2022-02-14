
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* protected_; TYPE_1__* private_; } ;
struct TYPE_6__ {scalar_t__ state; int ogg_decoder_aspect; } ;
struct TYPE_5__ {int do_md5_checking; int input; scalar_t__ is_ogg; scalar_t__ samples_decoded; int internal_reset_hack; } ;
typedef int FLAC__bool ;
typedef TYPE_3__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

FLAC__bool FUNC_3(FLAC__StreamDecoder *VAR_3)
{
 FUNC_0(0 != VAR_3);
 FUNC_0(0 != VAR_3->private_);
 FUNC_0(0 != VAR_3->protected_);

 if(!VAR_3->private_->internal_reset_hack && VAR_3->protected_->state == VAR_2)
  return 0;

 VAR_3->private_->samples_decoded = 0;
 VAR_3->private_->do_md5_checking = 0;






 if(!FUNC_1(VAR_3->private_->input)) {
  VAR_3->protected_->state = VAR_0;
  return 0;
 }
 VAR_3->protected_->state = VAR_1;

 return 1;
}
