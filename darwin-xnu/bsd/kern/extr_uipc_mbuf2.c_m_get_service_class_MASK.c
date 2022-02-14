
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_svc; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
typedef int mbuf_svc_class_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

mbuf_svc_class_t
FUNC_2(struct mbuf *VAR_2)
{
 mbuf_svc_class_t VAR_3;

 FUNC_1(VAR_2->m_flags & VAR_1);

 if (FUNC_0(VAR_2->m_pkthdr.pkt_svc))
  VAR_3 = VAR_2->m_pkthdr.pkt_svc;
 else
  VAR_3 = VAR_0;

 return (VAR_3);
}
