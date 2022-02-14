
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ full_duplex; } ;
struct ioc3_private {int emcr; TYPE_1__ mii; struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct ioc3_private *VAR_3)
{
 struct ioc3 *VAR_4 = VAR_3->regs;

 if (VAR_3->mii.full_duplex) {
  FUNC_1(VAR_1);
  VAR_3->emcr |= VAR_0;
 } else {
  FUNC_1(VAR_2);
  VAR_3->emcr &= ~VAR_0;
 }
 FUNC_0(VAR_3->emcr);
}
