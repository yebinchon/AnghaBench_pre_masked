
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pktsched_ptype; int pktsched_pkt; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef int mbuf_t ;
typedef int mbuf_svc_class_t ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

mbuf_svc_class_t
FUNC_2(pktsched_pkt_t *VAR_1)
{
 mbuf_svc_class_t VAR_2 = VAR_0;

 switch (VAR_1->pktsched_ptype) {
 case 128:
  VAR_2 = FUNC_1((mbuf_t)VAR_1->pktsched_pkt);
  break;


 default:
  FUNC_0(0);

 }

 return (VAR_2);
}
