
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int ** extra_channel_type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;

void FUNC_1(struct efx_nic *VAR_2)
{



 if (FUNC_0(VAR_2) == 0)
  VAR_2->extra_channel_type[VAR_0] =
   &VAR_1;
}
