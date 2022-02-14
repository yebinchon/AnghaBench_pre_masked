
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {int file; } ;
typedef int FLAC__bool ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 scalar_t__ FUNC_0 (int ) ;

FLAC__bool FUNC_1(const FLAC__StreamDecoder *VAR_0, void *VAR_1)
{
 (void)VAR_1;

 return FUNC_0(VAR_0->private_->file)? 1 : 0;
}
