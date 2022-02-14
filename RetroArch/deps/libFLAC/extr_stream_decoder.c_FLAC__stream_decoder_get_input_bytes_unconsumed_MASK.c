
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {int input; } ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

unsigned FUNC_3(const FLAC__StreamDecoder *VAR_0)
{
 FUNC_0(0 != VAR_0);
 FUNC_0(FUNC_2(VAR_0->private_->input));
 FUNC_0(!(FUNC_1(VAR_0->private_->input) & 7));
 return FUNC_1(VAR_0->private_->input) / 8;
}
