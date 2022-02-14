
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int context; int libc_reent; } ;
typedef TYPE_1__ lwp_cntrl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (void*,void*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void FUNC_4()
{
 u32 VAR_7;
 lwp_cntrl *VAR_8,*VAR_9;

 FUNC_0(VAR_7);
 VAR_8 = VAR_4;
 while(VAR_3==VAR_1) {
  VAR_9 = VAR_5;
  VAR_6 = 1;
  VAR_3 = VAR_0;
  VAR_4 = VAR_9;
  FUNC_1(VAR_7);

  if(VAR_2) {
   VAR_8->libc_reent = *VAR_2;
   *VAR_2 = VAR_9->libc_reent;
  }



  FUNC_2((void*)&VAR_8->context,(void*)&VAR_9->context);

  VAR_8 = VAR_4;
  FUNC_0(VAR_7);
 }
 VAR_6 = 0;
 FUNC_1(VAR_7);
}
