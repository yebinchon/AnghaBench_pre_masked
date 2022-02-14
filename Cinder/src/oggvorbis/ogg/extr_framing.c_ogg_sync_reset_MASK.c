
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bodybytes; scalar_t__ headerbytes; scalar_t__ unsynced; scalar_t__ returned; scalar_t__ fill; } ;
typedef TYPE_1__ ogg_sync_state ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1(ogg_sync_state *VAR_0){
  if(FUNC_0(VAR_0))return -1;

  VAR_0->fill=0;
  VAR_0->returned=0;
  VAR_0->unsynced=0;
  VAR_0->headerbytes=0;
  VAR_0->bodybytes=0;
  return(0);
}
