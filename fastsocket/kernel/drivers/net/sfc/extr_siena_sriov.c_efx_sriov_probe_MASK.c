
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {unsigned int vf_count; int ** extra_channel_type; int vi_scale; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*,int,int *,unsigned int*) ;
 unsigned int VAR_2 ;

void FUNC_1(struct efx_nic *VAR_3)
{
 unsigned VAR_4;

 if (!VAR_2)
  return;

 if (FUNC_0(VAR_3, 0, &VAR_3->vi_scale, &VAR_4))
  return;
 if (VAR_4 > 0 && VAR_4 > VAR_2)
  VAR_4 = VAR_2;


 VAR_3->vf_count = VAR_4;

 VAR_3->extra_channel_type[VAR_0] = &VAR_1;
}
