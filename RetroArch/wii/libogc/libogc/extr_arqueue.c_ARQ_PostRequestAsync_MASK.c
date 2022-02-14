
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int * callback; scalar_t__ len; scalar_t__ aram_addr; scalar_t__ mram_addr; scalar_t__ dir; int state; int node; scalar_t__ prio; scalar_t__ owner; } ;
typedef TYPE_1__ ARQRequest ;
typedef int * ARQCallback ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;

void FUNC_6(ARQRequest *VAR_9,u32 VAR_10,u32 VAR_11,u32 VAR_12,u32 VAR_13,u32 VAR_14,u32 VAR_15,ARQCallback VAR_16)
{
 u32 VAR_17;
 ARQRequest *VAR_18;

 VAR_9->state = VAR_1;
 VAR_9->dir = VAR_11;
 VAR_9->owner = VAR_10;
 VAR_9->aram_addr = VAR_13;
 VAR_9->mram_addr = VAR_14;
 VAR_9->len = VAR_15;
 VAR_9->prio = VAR_12;
 VAR_9->callback = (VAR_16==((void*)0)) ? VAR_3 : VAR_16;

 FUNC_1(VAR_17);

 if(VAR_12==VAR_0) FUNC_4(&VAR_8,&VAR_9->node);
 else FUNC_4(&VAR_7,&VAR_9->node);

 if(!VAR_6 && !VAR_5) {
  VAR_18 = (ARQRequest*)FUNC_5(&VAR_7);
  if(VAR_18) {
   VAR_18->state = VAR_2;
   FUNC_0(VAR_18->dir,VAR_18->mram_addr,VAR_18->aram_addr,VAR_18->len);
   VAR_4 = VAR_18->callback;
   VAR_5 = VAR_18;
  }
  if(!VAR_5) FUNC_3();
 }
 FUNC_2(VAR_17);
}
