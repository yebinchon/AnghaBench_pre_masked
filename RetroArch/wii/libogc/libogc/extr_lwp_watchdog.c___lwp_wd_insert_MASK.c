
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int prev; } ;
struct TYPE_10__ {scalar_t__ fire; scalar_t__ state; TYPE_9__ node; int start; } ;
typedef TYPE_1__ wd_cntrl ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int lwp_queue ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,TYPE_9__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (char*,TYPE_1__*,int ,scalar_t__) ;

void FUNC_10(lwp_queue *VAR_3,wd_cntrl *VAR_4)
{
 u32 VAR_5;
 u64 VAR_6;
 u32 VAR_7;
 wd_cntrl *VAR_8;



 VAR_7 = FUNC_3();
 VAR_4->state = VAR_0;

 VAR_1++;
restart:
 FUNC_0(VAR_5);
 VAR_6 = VAR_4->fire;
 for(VAR_8=FUNC_6(VAR_3);;VAR_8=FUNC_7(VAR_8)) {
  if(VAR_6==0 || !FUNC_7(VAR_8)) break;
  if(VAR_6<VAR_8->fire) break;

  FUNC_1(VAR_5);
  if(VAR_4->state!=VAR_0) goto exit_insert;
  if(VAR_2>VAR_7) {
   VAR_2 = VAR_7;
   FUNC_2(VAR_5);
   goto restart;
  }
 }
 FUNC_5(VAR_4);
 VAR_4->fire = VAR_6;
 FUNC_4(VAR_8->node.prev,&VAR_4->node);
 if(FUNC_6(VAR_3)==VAR_4) FUNC_8(VAR_4);

exit_insert:
 VAR_2 = VAR_7;
 VAR_1--;
 FUNC_2(VAR_5);
 return;
}
