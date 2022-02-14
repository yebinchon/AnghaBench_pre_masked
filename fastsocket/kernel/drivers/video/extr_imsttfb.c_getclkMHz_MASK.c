
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pclk_m; int pclk_n; int pclk_p; } ;
struct imstt_par {TYPE_1__ init; } ;
typedef int __u32 ;



__attribute__((used)) static __u32
FUNC_0(struct imstt_par *VAR_0)
{
 __u32 VAR_1, VAR_2, VAR_3;

 VAR_1 = VAR_0->init.pclk_m;
 VAR_2 = VAR_0->init.pclk_n;
 VAR_3 = VAR_0->init.pclk_p;

 return 20 * (VAR_1 + 1) / ((VAR_2 + 1) * (VAR_3 ? 2 * VAR_3 : 1));
}
