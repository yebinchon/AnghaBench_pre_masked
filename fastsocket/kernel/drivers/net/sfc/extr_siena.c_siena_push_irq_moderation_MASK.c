
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_channel {int channel; int efx; scalar_t__ irq_moderation; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct efx_channel *VAR_5)
{
 efx_dword_t VAR_6;

 if (VAR_5->irq_moderation)
  FUNC_0(VAR_6,
         VAR_2,
         VAR_1,
         VAR_3,
         VAR_5->irq_moderation - 1);
 else
  FUNC_0(VAR_6,
         VAR_2,
         VAR_0,
         VAR_3, 0);
 FUNC_1(VAR_5->efx, &VAR_6, VAR_4,
          VAR_5->channel);
}
