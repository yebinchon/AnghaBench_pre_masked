
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int m_flags; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {int * pb_next; struct ifnet* pb_ifp; struct mbuf* pb_mbuf; int pb_type; } ;
typedef TYPE_1__ pbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(pbuf_t *VAR_2, struct mbuf *VAR_3, struct ifnet *VAR_4)
{

 FUNC_0((VAR_3->m_flags & VAR_0) != 0);

 VAR_2->pb_type = VAR_1;
 VAR_2->pb_mbuf = VAR_3;
 VAR_2->pb_ifp = VAR_4;
 VAR_2->pb_next = ((void*)0);
 FUNC_1(VAR_2);
}
