
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {unsigned int mclk; int cclk; int hw_designer; scalar_t__ base; TYPE_2__* mmc; } ;
struct TYPE_3__ {scalar_t__ bus_width; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mmci_host *VAR_6, unsigned int VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_7) {
  if (VAR_7 >= VAR_6->mclk) {
   VAR_8 = VAR_0;
   VAR_6->cclk = VAR_6->mclk;
  } else {
   VAR_8 = VAR_6->mclk / (2 * VAR_7) - 1;
   if (VAR_8 >= 256)
    VAR_8 = 255;
   VAR_6->cclk = VAR_6->mclk / (2 * (VAR_8 + 1));
  }
  if (VAR_6->hw_designer == 0x80)
   VAR_8 |= VAR_2;
  VAR_8 |= VAR_1;


 }

 if (VAR_6->mmc->ios.bus_width == VAR_5)
  VAR_8 |= VAR_3;

 FUNC_0(VAR_8, VAR_6->base + VAR_4);
}
