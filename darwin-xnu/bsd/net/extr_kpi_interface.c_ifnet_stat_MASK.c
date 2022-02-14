
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet_stats_param {int no_protocol; int dropped; int collisions; int errors_out; int multicasts_out; int bytes_out; int packets_out; int errors_in; int multicasts_in; int bytes_in; int packets_in; } ;
struct TYPE_2__ {int ifi_noproto; int ifi_iqdrops; int ifi_collisions; int ifi_oerrors; int ifi_omcasts; int ifi_obytes; int ifi_opackets; int ifi_ierrors; int ifi_imcasts; int ifi_ibytes; int ifi_ipackets; } ;
struct ifnet {scalar_t__ if_data_threshold; TYPE_1__ if_data; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ifnet*) ;

errno_t
FUNC_2(struct ifnet *VAR_1, struct ifnet_stats_param *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_2->packets_in, &VAR_1->if_data.ifi_ipackets);
 FUNC_0(VAR_2->bytes_in, &VAR_1->if_data.ifi_ibytes);
 FUNC_0(VAR_2->multicasts_in, &VAR_1->if_data.ifi_imcasts);
 FUNC_0(VAR_2->errors_in, &VAR_1->if_data.ifi_ierrors);

 FUNC_0(VAR_2->packets_out, &VAR_1->if_data.ifi_opackets);
 FUNC_0(VAR_2->bytes_out, &VAR_1->if_data.ifi_obytes);
 FUNC_0(VAR_2->multicasts_out, &VAR_1->if_data.ifi_omcasts);
 FUNC_0(VAR_2->errors_out, &VAR_1->if_data.ifi_oerrors);

 FUNC_0(VAR_2->collisions, &VAR_1->if_data.ifi_collisions);
 FUNC_0(VAR_2->dropped, &VAR_1->if_data.ifi_iqdrops);
 FUNC_0(VAR_2->no_protocol, &VAR_1->if_data.ifi_noproto);

 if (VAR_1->if_data_threshold != 0)
  FUNC_1(VAR_1);

 return (0);
}
