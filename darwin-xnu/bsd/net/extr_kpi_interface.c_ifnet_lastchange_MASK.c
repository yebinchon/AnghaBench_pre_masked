
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_4__ {struct timeval ifi_lastchange; } ;
struct TYPE_5__ {TYPE_1__ if_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

errno_t
FUNC_1(ifnet_t VAR_1, struct timeval *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 *VAR_2 = VAR_1->if_data.ifi_lastchange;

 VAR_2->tv_sec += FUNC_0();

 return (0);
}
