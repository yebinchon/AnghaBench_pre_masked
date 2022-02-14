
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_15__ {int mode; int state; } ;
typedef TYPE_2__ lwp_thrqueue ;
struct TYPE_14__ {int id; } ;
struct TYPE_16__ {int timer; TYPE_1__ object; } ;
typedef TYPE_3__ lwp_cntrl ;




 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (char*,TYPE_2__*,TYPE_3__*,int) ;

void FUNC_6(lwp_thrqueue *VAR_2,u64 VAR_3)
{
 lwp_cntrl *VAR_4;

 VAR_4 = VAR_1;
 FUNC_0(VAR_4,VAR_2->state);

 if(VAR_3) {
  FUNC_3(&VAR_4->timer,VAR_0,VAR_4->object.id,VAR_4);
  FUNC_4(&VAR_4->timer,VAR_3);
 }




 switch(VAR_2->mode) {
  case 129:
   FUNC_1(VAR_2,VAR_4,VAR_3);
   break;
  case 128:
   FUNC_2(VAR_2,VAR_4,VAR_3);
   break;
 }
}
