
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* protected_; } ;
struct TYPE_4__ {scalar_t__ state; int md5_checking; } ;
typedef int FLAC__bool ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

FLAC__bool FUNC_1(FLAC__StreamDecoder *VAR_1, FLAC__bool VAR_2)
{
 FUNC_0(0 != VAR_1);
 FUNC_0(0 != VAR_1->protected_);
 if(VAR_1->protected_->state != VAR_0)
  return 0;
 VAR_1->protected_->md5_checking = VAR_2;
 return 1;
}
