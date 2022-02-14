
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ necp_policy_id; } ;
struct TYPE_4__ {TYPE_1__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
typedef scalar_t__ necp_kernel_policy_id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_0(struct mbuf *VAR_3, necp_kernel_policy_id VAR_4)
{
 if (VAR_3 == ((void*)0) || !(VAR_3->m_flags & VAR_1)) {
  return (VAR_0);
 }


 if (VAR_4 != VAR_2) {
  VAR_3->m_pkthdr.necp_mtag.necp_policy_id = VAR_4;
 } else {
  VAR_3->m_pkthdr.necp_mtag.necp_policy_id = VAR_2;
 }

 return (0);
}
