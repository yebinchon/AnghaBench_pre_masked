
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {scalar_t__ th_mptcp_loss; scalar_t__ th_ecn_synrst; scalar_t__ th_ecn_loss; scalar_t__ th_tfo_req_rst; scalar_t__ th_tfo_data_rst; scalar_t__ th_tfo_req_loss; scalar_t__ th_tfo_data_loss; } ;
struct tcp_cache_key_src {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tcp_heuristic* FUNC_0 (struct tcp_cache_key_src*,int ,struct tcp_heuristics_head**) ;
 int FUNC_1 (struct tcp_heuristics_head*) ;

__attribute__((used)) static void FUNC_2(struct tcp_cache_key_src *VAR_6, u_int8_t VAR_7)
{
 struct tcp_heuristics_head *VAR_8;
 struct tcp_heuristic *VAR_9;






 VAR_9 = FUNC_0(VAR_6, 0, &VAR_8);
 if (VAR_9 == ((void*)0))
  return;

 if (VAR_7 & VAR_2) {
  VAR_9->th_tfo_data_loss = 0;
 }

 if (VAR_7 & VAR_4) {
  VAR_9->th_tfo_req_loss = 0;
 }

 if (VAR_7 & VAR_3) {
  VAR_9->th_tfo_data_rst = 0;
 }

 if (VAR_7 & VAR_5) {
  VAR_9->th_tfo_req_rst = 0;
 }

 if (VAR_7 & VAR_0) {
  VAR_9->th_ecn_loss = 0;
  VAR_9->th_ecn_synrst = 0;
 }

 if (VAR_7 & VAR_1)
  VAR_9->th_mptcp_loss = 0;

 FUNC_1(VAR_8);
}
