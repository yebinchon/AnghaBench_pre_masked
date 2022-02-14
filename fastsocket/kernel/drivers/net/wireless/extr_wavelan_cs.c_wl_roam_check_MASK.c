
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned short nwid; struct TYPE_7__* next; } ;
typedef TYPE_2__ wavepoint_history ;
struct TYPE_6__ {TYPE_2__* head; } ;
struct TYPE_8__ {TYPE_1__ wavepoint_table; } ;
typedef TYPE_3__ net_local ;



__attribute__((used)) static wavepoint_history *FUNC_0(unsigned short VAR_0, net_local *VAR_1)
{
  wavepoint_history *VAR_2=VAR_1->wavepoint_table.head;

  while(VAR_2!=((void*)0)){
    if(VAR_2->nwid==VAR_0)
      return VAR_2;
    VAR_2=VAR_2->next;
  }
  return ((void*)0);
}
