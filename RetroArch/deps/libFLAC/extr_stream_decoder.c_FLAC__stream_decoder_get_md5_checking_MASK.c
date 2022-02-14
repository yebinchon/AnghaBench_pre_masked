
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* protected_; } ;
struct TYPE_4__ {int md5_checking; } ;
typedef int FLAC__bool ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;

FLAC__bool FUNC_1(const FLAC__StreamDecoder *VAR_0)
{
 FUNC_0(0 != VAR_0);
 FUNC_0(0 != VAR_0->protected_);
 return VAR_0->protected_->md5_checking;
}
