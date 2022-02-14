
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int necp_last_interface_index; } ;
struct TYPE_4__ {TYPE_1__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;


 int VAR_0 ;

u_int32_t
FUNC_0(struct mbuf *VAR_1)
{
 if (VAR_1 == ((void*)0) || !(VAR_1->m_flags & VAR_0)) {
  return (0);
 }

 return (VAR_1->m_pkthdr.necp_mtag.necp_last_interface_index);
}
