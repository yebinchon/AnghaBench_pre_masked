
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int necp_last_interface_index; } ;
struct TYPE_6__ {TYPE_1__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
typedef TYPE_3__* ifnet_t ;
struct TYPE_7__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct mbuf *VAR_2, ifnet_t VAR_3)
{
 if (VAR_2 == ((void*)0) || !(VAR_2->m_flags & VAR_1)) {
  return (VAR_0);
 }


 if (VAR_3 != ((void*)0)) {
  VAR_2->m_pkthdr.necp_mtag.necp_last_interface_index = VAR_3->if_index;
 }

 return (0);
}
