
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifnet_stat_increment_param {scalar_t__ packets_in; scalar_t__ bytes_in; scalar_t__ errors_in; scalar_t__ packets_out; scalar_t__ bytes_out; scalar_t__ errors_out; scalar_t__ collisions; scalar_t__ dropped; } ;
struct TYPE_4__ {int ifi_iqdrops; int ifi_collisions; int ifi_oerrors; int ifi_obytes; int ifi_opackets; int ifi_ierrors; int ifi_ibytes; int ifi_ipackets; } ;
struct ifnet {scalar_t__ if_data_threshold; TYPE_1__ if_data; } ;
struct TYPE_6__ {scalar_t__ packets; scalar_t__ bytes; } ;
struct TYPE_5__ {int ifi_poll_bytes; int ifi_poll_packets; } ;
struct dlil_threading_info {TYPE_3__ tstats; TYPE_2__ pstats; int input_lck; struct ifnet_stat_increment_param stats; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0, struct dlil_threading_info *VAR_1)
{
 struct ifnet_stat_increment_param *VAR_2 = &VAR_1->stats;





 if (VAR_2->packets_in != 0) {
  FUNC_0(&VAR_0->if_data.ifi_ipackets, VAR_2->packets_in);
  VAR_2->packets_in = 0;
 }
 if (VAR_2->bytes_in != 0) {
  FUNC_0(&VAR_0->if_data.ifi_ibytes, VAR_2->bytes_in);
  VAR_2->bytes_in = 0;
 }
 if (VAR_2->errors_in != 0) {
  FUNC_0(&VAR_0->if_data.ifi_ierrors, VAR_2->errors_in);
  VAR_2->errors_in = 0;
 }

 if (VAR_2->packets_out != 0) {
  FUNC_0(&VAR_0->if_data.ifi_opackets, VAR_2->packets_out);
  VAR_2->packets_out = 0;
 }
 if (VAR_2->bytes_out != 0) {
  FUNC_0(&VAR_0->if_data.ifi_obytes, VAR_2->bytes_out);
  VAR_2->bytes_out = 0;
 }
 if (VAR_2->errors_out != 0) {
  FUNC_0(&VAR_0->if_data.ifi_oerrors, VAR_2->errors_out);
  VAR_2->errors_out = 0;
 }

 if (VAR_2->collisions != 0) {
  FUNC_0(&VAR_0->if_data.ifi_collisions, VAR_2->collisions);
  VAR_2->collisions = 0;
 }
 if (VAR_2->dropped != 0) {
  FUNC_0(&VAR_0->if_data.ifi_iqdrops, VAR_2->dropped);
  VAR_2->dropped = 0;
 }

 if (VAR_0->if_data_threshold != 0) {
  FUNC_2(&VAR_1->input_lck);
  FUNC_1(VAR_0);
 }





 if (VAR_1->tstats.packets != 0) {
  VAR_1->pstats.ifi_poll_packets += VAR_1->tstats.packets;
  VAR_1->tstats.packets = 0;
 }
 if (VAR_1->tstats.bytes != 0) {
  VAR_1->pstats.ifi_poll_bytes += VAR_1->tstats.bytes;
  VAR_1->tstats.bytes = 0;
 }
}
