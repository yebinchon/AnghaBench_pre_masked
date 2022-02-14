
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* protected_; } ;
struct TYPE_6__ {int state; } ;
typedef int FLAC__bool ;
typedef TYPE_2__ FLAC__StreamDecoder ;


 int FUNC_0 (int) ;






 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int*,int) ;

FLAC__bool FUNC_3(FLAC__StreamDecoder *VAR_0)
{
 FLAC__bool VAR_1;
 FUNC_0(0 != VAR_0);
 FUNC_0(0 != VAR_0->protected_);

 while(1) {
  switch(VAR_0->protected_->state) {
   case 128:
   case 130:
    return 0;
   case 129:
    if(!FUNC_1(VAR_0))
     return 1;
    break;
   case 131:
    if(!FUNC_2(VAR_0, &VAR_1, 0))
     return 0;
    if(VAR_1)
     return 1;
    break;
   case 132:
   case 133:
    return 1;
   default:
    FUNC_0(0);
    return 0;
  }
 }
}
