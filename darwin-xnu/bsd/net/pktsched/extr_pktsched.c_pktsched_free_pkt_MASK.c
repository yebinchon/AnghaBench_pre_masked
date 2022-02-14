
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pktsched_ptype; scalar_t__ pktsched_plen; int * pktsched_pkt; } ;
typedef TYPE_1__ pktsched_pkt_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(pktsched_pkt_t *VAR_0)
{
 switch (VAR_0->pktsched_ptype) {
 case 128:
  FUNC_1(VAR_0->pktsched_pkt);
  break;


 default:
  FUNC_0(0);

 }

 VAR_0->pktsched_pkt = ((void*)0);
 VAR_0->pktsched_plen = 0;
 VAR_0->pktsched_ptype = 0;
}
