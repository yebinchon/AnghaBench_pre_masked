
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tqueue; int super_tx_queue; int frame_cnt; } ;
typedef TYPE_1__ isdn_net_local ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __inline__ void FUNC_5(isdn_net_local *VAR_0)
{
 FUNC_0(&VAR_0->frame_cnt);

 if (!(FUNC_1(VAR_0))) {
  if (!FUNC_4(&VAR_0->super_tx_queue)) {
   FUNC_3(&VAR_0->tqueue);
  } else {
   FUNC_2(VAR_0);
  }
       }
}
