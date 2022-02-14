
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mbuf_t ;
struct TYPE_4__ {int pkt_flags; int pkt_svc; } ;
struct TYPE_5__ {int m_flags; TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(mbuf_t VAR_2)
{
 if (VAR_2 == ((void*)0) || !(VAR_2->m_flags & VAR_0) ||
     !FUNC_0(VAR_2->m_pkthdr.pkt_svc))
  return (0);

 return ((VAR_2->m_pkthdr.pkt_flags & VAR_1) ? 1 : 0);
}
