
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {scalar_t__ necp_skip_policy_id; int necp_app_id; scalar_t__ necp_route_rule_id; scalar_t__ necp_last_interface_index; scalar_t__ necp_policy_id; } ;
struct TYPE_8__ {TYPE_3__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_4__ m_pkthdr; } ;
struct TYPE_5__ {scalar_t__ result; scalar_t__ route_rule_id; } ;
struct TYPE_6__ {int app_id; TYPE_1__ results; scalar_t__ policy_id; } ;
struct inpcb {TYPE_2__ inp_policyresult; } ;
typedef scalar_t__ necp_kernel_policy_id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_0(struct mbuf *VAR_5, struct inpcb *VAR_6, necp_kernel_policy_id VAR_7, u_int32_t VAR_8,
        necp_kernel_policy_id VAR_9)
{
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || !(VAR_5->m_flags & VAR_1)) {
  return (VAR_0);
 }


 if (VAR_7 != VAR_2) {
  VAR_5->m_pkthdr.necp_mtag.necp_policy_id = VAR_7;
 } else if (VAR_6->inp_policyresult.results.result == VAR_4 ||
  VAR_6->inp_policyresult.results.result == VAR_3) {
  VAR_5->m_pkthdr.necp_mtag.necp_policy_id = VAR_6->inp_policyresult.policy_id;
 } else {
  VAR_5->m_pkthdr.necp_mtag.necp_policy_id = VAR_2;
 }
 VAR_5->m_pkthdr.necp_mtag.necp_last_interface_index = 0;
 if (VAR_8 != 0) {
  VAR_5->m_pkthdr.necp_mtag.necp_route_rule_id = VAR_8;
 } else {
  VAR_5->m_pkthdr.necp_mtag.necp_route_rule_id = VAR_6->inp_policyresult.results.route_rule_id;
 }
 VAR_5->m_pkthdr.necp_mtag.necp_app_id = VAR_6->inp_policyresult.app_id;

 if (VAR_9 != VAR_2) {
  VAR_5->m_pkthdr.necp_mtag.necp_skip_policy_id = VAR_9;
 }

 return (0);
}
