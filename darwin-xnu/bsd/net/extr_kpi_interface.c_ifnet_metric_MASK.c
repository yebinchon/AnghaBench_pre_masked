
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_2__* ifnet_t ;
struct TYPE_4__ {int ifi_metric; } ;
struct TYPE_5__ {TYPE_1__ if_data; } ;



u_int32_t
FUNC_0(ifnet_t VAR_0)
{
 return ((VAR_0 == ((void*)0)) ? 0 : VAR_0->if_data.ifi_metric);
}
