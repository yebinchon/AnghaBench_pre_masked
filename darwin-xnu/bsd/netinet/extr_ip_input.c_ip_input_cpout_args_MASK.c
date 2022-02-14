
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_in_args {int fwai_divert_rule; int fwai_pf_rule; int fwai_ipfw_rule; int fwai_next_hop; } ;
struct ip_fw_args {int fwa_divert_rule; int fwa_pf_rule; int fwa_ipfw_rule; int fwa_next_hop; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ip_fw_args*,int) ;

__attribute__((used)) static void
FUNC_1(struct ip_fw_in_args *VAR_2, struct ip_fw_args *VAR_3,
    boolean_t *VAR_4)
{
 if (*VAR_4 == VAR_0) {
  FUNC_0(VAR_3, sizeof(struct ip_fw_args));
  *VAR_4 = VAR_1;
 }
 VAR_3->fwa_next_hop = VAR_2->fwai_next_hop;
 VAR_3->fwa_ipfw_rule = VAR_2->fwai_ipfw_rule;
 VAR_3->fwa_pf_rule = VAR_2->fwai_pf_rule;
 VAR_3->fwa_divert_rule = VAR_2->fwai_divert_rule;
}
