
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* private_; } ;
struct TYPE_4__ {int input; } ;
typedef int FLAC__uint32 ;
typedef int FLAC__bool ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,unsigned int) ;

FLAC__bool FUNC_2(FLAC__StreamDecoder *VAR_0)
{
 FLAC__uint32 VAR_1;
 unsigned VAR_2, VAR_3;


 if(!FUNC_0(VAR_0->private_->input, &VAR_1, 24))
  return 0;

 VAR_3 = 0;
 for(VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if(!FUNC_0(VAR_0->private_->input, &VAR_1, 8))
   return 0;
  VAR_3 <<= 7;
  VAR_3 |= (VAR_1 & 0x7f);
 }

 if(!FUNC_1(VAR_0->private_->input, VAR_3))
  return 0;
 return 1;
}
