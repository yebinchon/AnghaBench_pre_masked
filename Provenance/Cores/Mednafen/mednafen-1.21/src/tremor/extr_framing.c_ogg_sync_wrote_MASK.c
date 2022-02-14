
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fill; scalar_t__ storage; } ;
typedef TYPE_1__ ogg_sync_state ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1(ogg_sync_state *VAR_0, long VAR_1){
  if(FUNC_0(VAR_0))return -1;
  if(VAR_0->fill+VAR_1>VAR_0->storage)return -1;
  VAR_0->fill+=VAR_1;
  return(0);
}
