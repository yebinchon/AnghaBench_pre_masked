
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fire; int start; int usr_data; int (* routine ) (int ) ;} ;
typedef TYPE_1__ wd_cntrl ;
typedef int u64 ;
typedef int u32 ;
typedef int s64 ;
typedef int lwp_queue ;






 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,TYPE_1__*,int,int,int,int,int,int,int,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(lwp_queue *VAR_0)
{
 wd_cntrl *VAR_1;
 u64 VAR_2;
 s64 VAR_3;

 if(FUNC_0(VAR_0)) return;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = FUNC_5();
 VAR_3 = FUNC_4(VAR_2,VAR_1->fire);



 if(VAR_3<=0) {
  do {
   switch(FUNC_2(VAR_0,VAR_1)) {
    case 131:
     VAR_1->routine(VAR_1->usr_data);
     break;
    case 130:
     break;
    case 129:
     break;
    case 128:
     break;
   }
   VAR_1 = FUNC_1(VAR_0);
  } while(!FUNC_0(VAR_0) && VAR_1->fire==0);
 } else {
  FUNC_3(VAR_1);
 }
}
