
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t dac_channel_t ;
struct TYPE_4__ {TYPE_1__* pad_dac; } ;
struct TYPE_3__ {int dac_xpd_force; int xpd_dac; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(dac_channel_t VAR_2, bool VAR_3)
{
    VAR_1.pad_dac[VAR_2-VAR_0].dac_xpd_force = VAR_3;
    VAR_1.pad_dac[VAR_2-VAR_0].xpd_dac = VAR_3;
}
