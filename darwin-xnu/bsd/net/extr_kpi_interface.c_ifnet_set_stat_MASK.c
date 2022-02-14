
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet_stats_param {int no_protocol; int dropped; int collisions; int errors_out; int multicasts_out; int bytes_out; int packets_out; int errors_in; int multicasts_in; int bytes_in; int packets_in; } ;
struct TYPE_2__ {int ifi_noproto; int ifi_iqdrops; int ifi_collisions; int ifi_oerrors; int ifi_omcasts; int ifi_obytes; int ifi_opackets; int ifi_ierrors; int ifi_imcasts; int ifi_ibytes; int ifi_ipackets; } ;
struct ifnet {scalar_t__ if_data_threshold; int if_lastchange; TYPE_1__ if_data; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ifnet*) ;

errno_t
FUNC_3(struct ifnet *VAR_1, const struct ifnet_stats_param *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_1(&VAR_1->if_data.ifi_ipackets, VAR_2->packets_in);
 FUNC_1(&VAR_1->if_data.ifi_ibytes, VAR_2->bytes_in);
 FUNC_1(&VAR_1->if_data.ifi_imcasts, VAR_2->multicasts_in);
 FUNC_1(&VAR_1->if_data.ifi_ierrors, VAR_2->errors_in);

 FUNC_1(&VAR_1->if_data.ifi_opackets, VAR_2->packets_out);
 FUNC_1(&VAR_1->if_data.ifi_obytes, VAR_2->bytes_out);
 FUNC_1(&VAR_1->if_data.ifi_omcasts, VAR_2->multicasts_out);
 FUNC_1(&VAR_1->if_data.ifi_oerrors, VAR_2->errors_out);

 FUNC_1(&VAR_1->if_data.ifi_collisions, VAR_2->collisions);
 FUNC_1(&VAR_1->if_data.ifi_iqdrops, VAR_2->dropped);
 FUNC_1(&VAR_1->if_data.ifi_noproto, VAR_2->no_protocol);


 FUNC_0(&VAR_1->if_lastchange);

 if (VAR_1->if_data_threshold != 0)
  FUNC_2(VAR_1);

 return (0);
}
