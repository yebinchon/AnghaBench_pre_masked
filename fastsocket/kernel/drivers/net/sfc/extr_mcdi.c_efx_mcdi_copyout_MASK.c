
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {int state; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct efx_nic*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct efx_nic*,unsigned int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct efx_mcdi_iface* FUNC_4 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 struct efx_mcdi_iface *VAR_6 = FUNC_4(VAR_3);
 unsigned int VAR_7 = VAR_0 + FUNC_1(VAR_3);
 int VAR_8;

 FUNC_0(FUNC_3(&VAR_6->state) == VAR_1);
 FUNC_0(VAR_5 & 3 || VAR_5 >= VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += 4)
  *((__le32 *)(VAR_4 + VAR_8)) = FUNC_2(VAR_3, VAR_7 + 4 + VAR_8);
}
