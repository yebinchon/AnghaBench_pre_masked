
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state; int node; } ;
typedef TYPE_1__ wd_cntrl ;
typedef int u32 ;
typedef int lwp_queue ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char*,TYPE_1__*) ;

u32 FUNC_9(lwp_queue *VAR_2,wd_cntrl *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 wd_cntrl *VAR_6;



 FUNC_0(VAR_4);
 VAR_5 = VAR_3->state;
 switch(VAR_5) {
  case 130:
   break;
  case 129:
   VAR_3->state = 130;
   break;
  case 131:
  case 128:
   VAR_3->state = 130;
   VAR_6 = FUNC_6(VAR_3);
   if(VAR_0) VAR_1 = FUNC_2();
   FUNC_3(&VAR_3->node);
   if(!FUNC_4(VAR_2) && FUNC_5(VAR_2)==VAR_6) FUNC_7(VAR_6);
   break;
 }
 FUNC_1(VAR_4);
 return VAR_5;
}
