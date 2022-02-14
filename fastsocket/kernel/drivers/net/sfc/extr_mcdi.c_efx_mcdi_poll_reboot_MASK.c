
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct efx_nic {int mac_stats; } ;
typedef int efx_dword_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (struct efx_nic*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int *,unsigned int) ;
 int FUNC_5 (struct efx_nic*,int *,unsigned int) ;
 int FUNC_6 (int *,int ,int) ;

int FUNC_7(struct efx_nic *VAR_6)
{
 unsigned int VAR_7 = VAR_4 + FUNC_2(VAR_6);
 efx_dword_t VAR_8;
 uint32_t VAR_9;

 if (FUNC_3(VAR_6) < VAR_1)
  return 0;

 FUNC_4(VAR_6, &VAR_8, VAR_7);
 VAR_9 = FUNC_0(VAR_8, VAR_0);

 if (VAR_9 == 0)
  return 0;




 FUNC_6(&VAR_6->mac_stats, 0, sizeof(VAR_6->mac_stats));

 FUNC_1(VAR_8);
 FUNC_5(VAR_6, &VAR_8, VAR_7);

 if (VAR_9 == VAR_5)
  return -VAR_2;
 else
  return -VAR_3;
}
