
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int s32 ;
typedef int lwp_cntrl ;
typedef int cond_t ;
struct TYPE_3__ {int lock; int wait_queue; } ;
typedef TYPE_1__ cond_st ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static s32 FUNC_3(cond_t VAR_1,u8 VAR_2)
{
 lwp_cntrl *VAR_3;
 cond_st *VAR_4 = FUNC_0(VAR_1);
 if(!VAR_4) return -1;

 do {
  VAR_3 = FUNC_2(&VAR_4->wait_queue);
  if(!VAR_3) VAR_4->lock = VAR_0;
 } while(VAR_2 && VAR_3);
 FUNC_1();
 return 0;
}
