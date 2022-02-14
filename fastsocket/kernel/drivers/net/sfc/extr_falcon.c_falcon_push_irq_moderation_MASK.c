
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_channel {int channel; scalar_t__ irq_moderation; struct efx_nic* efx; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct efx_nic*,int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct efx_channel *VAR_6)
{
 efx_dword_t VAR_7;
 struct efx_nic *VAR_8 = VAR_6->efx;


 if (VAR_6->irq_moderation) {
  FUNC_1(VAR_7,
         VAR_2,
         VAR_1,
         VAR_3,
         VAR_6->irq_moderation - 1);
 } else {
  FUNC_1(VAR_7,
         VAR_2,
         VAR_0,
         VAR_3, 0);
 }
 FUNC_0(VAR_4 != VAR_5);
 FUNC_2(VAR_8, &VAR_7, VAR_5,
          VAR_6->channel);
}
