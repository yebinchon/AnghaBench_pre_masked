
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_4__ {int ifi_hdrlen; } ;
struct TYPE_5__ {TYPE_1__ if_data; } ;


 int VAR_0 ;

errno_t
FUNC_0(ifnet_t VAR_1, u_char VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 VAR_1->if_data.ifi_hdrlen = VAR_2;
 return (0);
}
