
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uip_tcp_pcb {int dummy; } ;
typedef size_t s32_t ;
struct TYPE_2__ {int sendevt; size_t socket; int err; scalar_t__ flags; scalar_t__ recvevt; scalar_t__ lastoffset; int * lastdata; struct uip_tcp_pcb* pcb; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static s32_t FUNC_0(struct uip_tcp_pcb *VAR_3)
{
 s32_t VAR_4;

 for(VAR_4=0;VAR_4<VAR_1;VAR_4++) {
  if(VAR_2[VAR_4].pcb==((void*)0)) {
   VAR_2[VAR_4].pcb = VAR_3;
   VAR_2[VAR_4].lastdata = ((void*)0);
   VAR_2[VAR_4].lastoffset = 0;
   VAR_2[VAR_4].recvevt = 0;
   VAR_2[VAR_4].sendevt = 1;
   VAR_2[VAR_4].flags = 0;
   VAR_2[VAR_4].socket = VAR_4;
   VAR_2[VAR_4].err = VAR_0;
   return VAR_4;
  }
 }
 return -1;
}
