
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {int ifi_oerrors; int ifi_obytes; int ifi_opackets; } ;
struct ifnet {scalar_t__ if_data_threshold; int if_lastchange; TYPE_1__ if_data; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct ifnet*) ;

errno_t
FUNC_3(struct ifnet *VAR_1, u_int32_t VAR_2,
    u_int32_t VAR_3, u_int32_t VAR_4)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 if (VAR_2 != 0)
  FUNC_1(&VAR_1->if_data.ifi_opackets, VAR_2);
 if (VAR_3 != 0)
  FUNC_1(&VAR_1->if_data.ifi_obytes, VAR_3);
 if (VAR_4 != 0)
  FUNC_1(&VAR_1->if_data.ifi_oerrors, VAR_4);

 FUNC_0(&VAR_1->if_lastchange);

 if (VAR_1->if_data_threshold != 0)
  FUNC_2(VAR_1);

 return (0);
}
