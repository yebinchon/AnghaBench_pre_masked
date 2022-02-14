
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_flags; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool
FUNC_0(struct mbuf *VAR_3)
{
 if (VAR_3 == ((void*)0) || !(VAR_3->m_flags & VAR_1)) {
  return (VAR_0);
 }

 return (VAR_3->m_pkthdr.pkt_flags & VAR_2);
}
