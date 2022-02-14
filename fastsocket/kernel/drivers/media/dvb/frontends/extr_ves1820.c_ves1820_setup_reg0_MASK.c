
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ves1820_state {int reg0; TYPE_1__* config; } ;
typedef scalar_t__ fe_spectral_inversion_t ;
struct TYPE_2__ {int invert; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ves1820_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ves1820_state *VAR_2, u8 VAR_3, fe_spectral_inversion_t VAR_4)
{
 VAR_3 |= VAR_2->reg0 & 0x62;

 if (VAR_1 == VAR_4) {
  if (!VAR_2->config->invert) VAR_3 |= 0x20;
  else VAR_3 &= ~0x20;
 } else if (VAR_0 == VAR_4) {
  if (!VAR_2->config->invert) VAR_3 &= ~0x20;
  else VAR_3 |= 0x20;
 }

 FUNC_0(VAR_2, 0x00, VAR_3 & 0xfe);
 FUNC_0(VAR_2, 0x00, VAR_3 | 0x01);

 VAR_2->reg0 = VAR_3;

 return 0;
}
