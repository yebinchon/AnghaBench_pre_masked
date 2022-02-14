
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev_g_coeff; } ;
struct wm8350 {TYPE_1__ power; } ;



__attribute__((used)) static inline int FUNC_0(struct wm8350 *VAR_0, int VAR_1)
{
 if (!VAR_0->power.rev_g_coeff)
  return (((VAR_1 - 30) / 15) & 0xf) << 8;
 else
  return (((VAR_1 - 30) / 30) & 0xf) << 8;
}
