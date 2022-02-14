
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pclk_m; int pclk_n; scalar_t__ pclk_p; } ;
struct imstt_par {TYPE_1__ init; } ;
typedef int __u32 ;



__attribute__((used)) static void
FUNC_0(struct imstt_par *VAR_0, __u32 VAR_1)
{
 __u32 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_2 = VAR_3 = 0;
 VAR_5 = VAR_6 = 0;
 for (;;) {
  switch (VAR_5) {
   case 0:
    VAR_2++;
    break;
   case 1:
    VAR_3++;
    break;
  }
  VAR_4 = 20 * (VAR_2 + 1) / (VAR_3 + 1);
  if (VAR_4 == VAR_1)
   break;
  if (VAR_4 > VAR_1) {
   VAR_6 = 1;
   VAR_5 = 1;
  } else if (VAR_6 && VAR_4 < VAR_1) {
   VAR_5 = 0;
  }
 }

 VAR_0->init.pclk_m = VAR_2;
 VAR_0->init.pclk_n = VAR_3;
 VAR_0->init.pclk_p = 0;
}
