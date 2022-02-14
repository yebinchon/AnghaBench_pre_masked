
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet_stat_increment_param {scalar_t__ packets_in; scalar_t__ bytes_in; scalar_t__ errors_in; scalar_t__ packets_out; scalar_t__ bytes_out; scalar_t__ errors_out; scalar_t__ collisions; scalar_t__ dropped; } ;
struct TYPE_2__ {int ifi_iqdrops; int ifi_collisions; int ifi_oerrors; int ifi_obytes; int ifi_opackets; int ifi_ierrors; int ifi_ibytes; int ifi_ipackets; } ;
struct ifnet {scalar_t__ if_data_threshold; int if_lastchange; TYPE_1__ if_data; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct ifnet*) ;

errno_t
FUNC_3(struct ifnet *VAR_1,
    const struct ifnet_stat_increment_param *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 if (VAR_2->packets_in != 0)
  FUNC_1(&VAR_1->if_data.ifi_ipackets, VAR_2->packets_in);
 if (VAR_2->bytes_in != 0)
  FUNC_1(&VAR_1->if_data.ifi_ibytes, VAR_2->bytes_in);
 if (VAR_2->errors_in != 0)
  FUNC_1(&VAR_1->if_data.ifi_ierrors, VAR_2->errors_in);

 if (VAR_2->packets_out != 0)
  FUNC_1(&VAR_1->if_data.ifi_opackets, VAR_2->packets_out);
 if (VAR_2->bytes_out != 0)
  FUNC_1(&VAR_1->if_data.ifi_obytes, VAR_2->bytes_out);
 if (VAR_2->errors_out != 0)
  FUNC_1(&VAR_1->if_data.ifi_oerrors, VAR_2->errors_out);

 if (VAR_2->collisions != 0)
  FUNC_1(&VAR_1->if_data.ifi_collisions, VAR_2->collisions);
 if (VAR_2->dropped != 0)
  FUNC_1(&VAR_1->if_data.ifi_iqdrops, VAR_2->dropped);


 FUNC_0(&VAR_1->if_lastchange);

 if (VAR_1->if_data_threshold != 0)
  FUNC_2(VAR_1);

 return (0);
}
