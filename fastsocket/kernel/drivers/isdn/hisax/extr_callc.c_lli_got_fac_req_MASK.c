
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int state; } ;
struct TYPE_7__ {int phone; } ;
struct Channel {int dial_timer; TYPE_4__ fi; TYPE_1__ setup; } ;
struct TYPE_8__ {int* para; } ;
typedef TYPE_2__ capi_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,TYPE_2__*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_4(struct Channel *VAR_3, capi_msg *VAR_4) {
 if ((VAR_4->para[0] != 3) || (VAR_4->para[1] != 0))
  return;
 if (VAR_4->para[2]<3)
  return;
 if (VAR_4->para[4] != 0)
  return;
 switch(VAR_4->para[3]) {
  case 4:
   FUNC_3(VAR_3->setup.phone, &VAR_4->para[5], VAR_4->para[5] +1);
   FUNC_2(&VAR_3->fi, VAR_1, VAR_4);
   break;
  case 5:
   FUNC_3(VAR_3->setup.phone, &VAR_4->para[5], VAR_4->para[5] +1);
   if (VAR_3->fi.state == VAR_2) {
    FUNC_2(&VAR_3->fi, VAR_0, VAR_4);
   } else {
    FUNC_1(&VAR_3->dial_timer, 72);
    FUNC_0(&VAR_3->dial_timer, 80, VAR_0, VAR_4, 73);
   }
   break;
 }
}
