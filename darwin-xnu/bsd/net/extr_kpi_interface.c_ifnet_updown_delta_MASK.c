
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef TYPE_3__* ifnet_t ;
typedef int errno_t ;
struct TYPE_5__ {scalar_t__ tv_sec; } ;
struct TYPE_6__ {TYPE_1__ ifi_lastupdown; } ;
struct TYPE_7__ {TYPE_2__ if_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

errno_t
FUNC_1(ifnet_t VAR_1, struct timeval *VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  return (VAR_0);
 }


 VAR_2->tv_sec = FUNC_0();
 if (VAR_2->tv_sec > VAR_1->if_data.ifi_lastupdown.tv_sec) {
  VAR_2->tv_sec -= VAR_1->if_data.ifi_lastupdown.tv_sec;
 }
 VAR_2->tv_usec = 0;

 return (0);
}
