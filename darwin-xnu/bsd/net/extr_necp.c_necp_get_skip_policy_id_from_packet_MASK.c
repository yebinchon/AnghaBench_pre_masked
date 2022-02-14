
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int necp_skip_policy_id; } ;
struct TYPE_4__ {TYPE_1__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
typedef int necp_kernel_policy_id ;


 int VAR_0 ;
 int VAR_1 ;

necp_kernel_policy_id
FUNC_0(struct mbuf *VAR_2)
{
 if (VAR_2 == ((void*)0) || !(VAR_2->m_flags & VAR_0)) {
  return (VAR_1);
 }

 return (VAR_2->m_pkthdr.necp_mtag.necp_skip_policy_id);
}
