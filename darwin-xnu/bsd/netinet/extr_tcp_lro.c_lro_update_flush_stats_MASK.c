
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lro_npkts; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct mbuf *VAR_4)
{
 VAR_1++;
 switch(VAR_4->m_pkthdr.lro_npkts) {
 case 0: FUNC_0(0);
 case 1: VAR_3++;
  break;
 case 2: VAR_0++;
  break;
 default: VAR_2++;
  break;
 }
 return;
}
