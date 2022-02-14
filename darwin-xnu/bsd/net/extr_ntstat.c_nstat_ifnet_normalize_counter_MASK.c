
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_4__ {int sack_episodes; int rst_drop; int rxmit_drop; } ;
struct TYPE_3__ {int sack_episodes; int rst_drop; int rxmit_drop; } ;
struct if_tcp_ecn_stat {int ecn_client_success; int ecn_server_success; int ecn_off_conn; int ecn_client_setup; int ecn_server_setup; int ecn_total_conn; TYPE_2__ ecn_off; TYPE_1__ ecn_on; } ;



__attribute__((used)) static void
FUNC_0(struct if_tcp_ecn_stat *VAR_0)
{
 u_int64_t VAR_1, VAR_2;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = VAR_0->ecn_client_success +
     VAR_0->ecn_server_success;
 VAR_2 = VAR_0->ecn_off_conn +
     (VAR_0->ecn_client_setup - VAR_0->ecn_client_success) +
     (VAR_0->ecn_server_setup - VAR_0->ecn_server_success);





 if (VAR_1 > 0) {
  VAR_0->ecn_on.sack_episodes =
      (VAR_0->ecn_on.sack_episodes << 10) / VAR_1;
  VAR_0->ecn_on.rst_drop =
      (VAR_0->ecn_on.rst_drop << 10) * 100 / VAR_1;
  VAR_0->ecn_on.rxmit_drop =
      (VAR_0->ecn_on.rxmit_drop << 10) * 100 / VAR_1;
 } else {

  VAR_0->ecn_on.sack_episodes = 0;
  VAR_0->ecn_on.rst_drop = 0;
  VAR_0->ecn_on.rxmit_drop = 0;
 }

 if (VAR_2 > 0) {
  VAR_0->ecn_off.sack_episodes =
      (VAR_0->ecn_off.sack_episodes << 10) / VAR_2;
  VAR_0->ecn_off.rst_drop =
      (VAR_0->ecn_off.rst_drop << 10) * 100 / VAR_2;
  VAR_0->ecn_off.rxmit_drop =
      (VAR_0->ecn_off.rxmit_drop << 10) * 100 / VAR_2;
 } else {
  VAR_0->ecn_off.sack_episodes = 0;
  VAR_0->ecn_off.rst_drop = 0;
  VAR_0->ecn_off.rxmit_drop = 0;
 }
 VAR_0->ecn_total_conn = VAR_2 + VAR_1;
}
