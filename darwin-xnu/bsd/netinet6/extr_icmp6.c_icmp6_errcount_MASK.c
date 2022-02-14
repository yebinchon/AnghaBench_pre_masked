
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icmp6errstat {int icp6errs_unknown; int icp6errs_redirect; int icp6errs_paramprob_option; int icp6errs_paramprob_nextheader; int icp6errs_paramprob_header; int icp6errs_time_exceed_reassembly; int icp6errs_time_exceed_transit; int icp6errs_packet_too_big; int icp6errs_dst_unreach_noport; int icp6errs_dst_unreach_addr; int icp6errs_dst_unreach_beyondscope; int icp6errs_dst_unreach_admin; int icp6errs_dst_unreach_noroute; } ;
__attribute__((used)) static void
FUNC_0(struct icmp6errstat *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 142:
  switch (VAR_2) {
  case 137:
   VAR_0->icp6errs_dst_unreach_noroute++;
   return;
  case 140:
   VAR_0->icp6errs_dst_unreach_admin++;
   return;
  case 139:
   VAR_0->icp6errs_dst_unreach_beyondscope++;
   return;
  case 141:
   VAR_0->icp6errs_dst_unreach_addr++;
   return;
  case 138:
   VAR_0->icp6errs_dst_unreach_noport++;
   return;
  }
  break;
 case 136:
  VAR_0->icp6errs_packet_too_big++;
  return;
 case 131:
  switch (VAR_2) {
  case 129:
   VAR_0->icp6errs_time_exceed_transit++;
   return;
  case 130:
   VAR_0->icp6errs_time_exceed_reassembly++;
   return;
  }
  break;
 case 132:
  switch (VAR_2) {
  case 135:
   VAR_0->icp6errs_paramprob_header++;
   return;
  case 134:
   VAR_0->icp6errs_paramprob_nextheader++;
   return;
  case 133:
   VAR_0->icp6errs_paramprob_option++;
   return;
  }
  break;
 case 128:
  VAR_0->icp6errs_redirect++;
  return;
 }
 VAR_0->icp6errs_unknown++;
}
