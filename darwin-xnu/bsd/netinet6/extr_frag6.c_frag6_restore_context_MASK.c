
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pkt_hdr; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;



__attribute__((used)) static int
FUNC_0(struct mbuf *VAR_0)
{
 return ((int)VAR_0->m_pkthdr.pkt_hdr);
}
