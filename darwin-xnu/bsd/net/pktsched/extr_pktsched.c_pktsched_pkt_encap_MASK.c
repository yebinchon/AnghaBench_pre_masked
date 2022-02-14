
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct TYPE_3__ {int pktsched_ptype; void* pktsched_pkt; int pktsched_plen; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef int classq_pkt_type_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;

void
FUNC_2(pktsched_pkt_t *VAR_0, classq_pkt_type_t VAR_1, void *VAR_2)
{
 VAR_0->pktsched_ptype = VAR_1;
 VAR_0->pktsched_pkt = VAR_2;

 switch (VAR_1) {
 case 128:
  VAR_0->pktsched_plen =
      (uint32_t)FUNC_1((struct mbuf *)VAR_0->pktsched_pkt);
  break;


 default:
  FUNC_0(0);

 }
}
