
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int sync_state; } ;
typedef TYPE_1__ lwp_thrqueue ;
typedef int lwp_cntrl ;




 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,TYPE_1__*,int *,int,int) ;

lwp_cntrl* FUNC_3(lwp_thrqueue *VAR_1)
{
 lwp_cntrl *VAR_2 = ((void*)0);




 switch(VAR_1->mode) {
  case 129:
   VAR_2 = FUNC_0(VAR_1);
   break;
  case 128:
   VAR_2 = FUNC_1(VAR_1);
   break;
  default:
   VAR_2 = ((void*)0);
   break;
 }



 return VAR_2;
}
