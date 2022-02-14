
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_in_args {int fwai_divert_rule; int fwai_pf_rule; int fwai_ipfw_rule; int fwai_next_hop; } ;
struct ip_fw_args {int fwa_divert_rule; int fwa_pf_rule; int fwa_ipfw_rule; int fwa_next_hop; } ;



__attribute__((used)) static void
FUNC_0(struct ip_fw_args *VAR_0, struct ip_fw_in_args *VAR_1)
{
 VAR_1->fwai_next_hop = VAR_0->fwa_next_hop;
 VAR_1->fwai_ipfw_rule = VAR_0->fwa_ipfw_rule;
 VAR_1->fwai_pf_rule = VAR_0->fwa_pf_rule;
 VAR_1->fwai_divert_rule = VAR_0->fwa_divert_rule;
}
