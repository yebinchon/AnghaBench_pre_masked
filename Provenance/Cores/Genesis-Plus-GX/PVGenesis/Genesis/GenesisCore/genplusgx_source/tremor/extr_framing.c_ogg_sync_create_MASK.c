
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bufferpool; } ;
typedef TYPE_1__ ogg_sync_state ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 () ;

ogg_sync_state *FUNC_3(void){
  ogg_sync_state *VAR_0=FUNC_0(1,sizeof(*VAR_0));
  FUNC_1(VAR_0,0,sizeof(*VAR_0));
  VAR_0->bufferpool=FUNC_2();
  return VAR_0;
}
