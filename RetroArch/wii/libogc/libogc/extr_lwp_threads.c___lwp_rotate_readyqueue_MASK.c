
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_12__ {scalar_t__ first; } ;
typedef TYPE_1__ lwp_queue ;
typedef int lwp_node ;
struct TYPE_13__ {TYPE_1__* ready; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_8 (char*,size_t,TYPE_2__*,TYPE_2__*) ;

void FUNC_9(u32 VAR_5)
{
 u32 VAR_6;
 lwp_cntrl *VAR_7;
 lwp_queue *VAR_8;
 lwp_node *VAR_9;

 VAR_8 = &VAR_2[VAR_5];
 VAR_7 = VAR_3;

 if(VAR_8==VAR_7->ready) {
  FUNC_7();
  return;
 }

 FUNC_0(VAR_6);
 if(!FUNC_5(VAR_8) && !FUNC_6(VAR_8)) {
  VAR_9 = FUNC_4(VAR_8);
  FUNC_3(VAR_8,VAR_9);
 }
 FUNC_1(VAR_6);

 if(VAR_4->ready==VAR_8)
  VAR_4 = (lwp_cntrl*)VAR_8->first;

 if(VAR_7!=VAR_4)
  VAR_1 = VAR_0;




 FUNC_2(VAR_6);
}
