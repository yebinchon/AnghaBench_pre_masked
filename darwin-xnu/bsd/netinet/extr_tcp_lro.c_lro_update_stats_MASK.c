
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lro_npkts; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int tcps_lro_largepack; int tcps_lro_multpack; int tcps_lro_twopack; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mbuf *VAR_1)
{
 switch(VAR_1->m_pkthdr.lro_npkts) {
 case 0:
 case 1:
  break;

 case 2:
  VAR_0.tcps_lro_twopack++;
  break;

 case 3:
 case 4:
  VAR_0.tcps_lro_multpack++;
  break;

 default:
  VAR_0.tcps_lro_largepack++;
  break;
 }
 return;
}
