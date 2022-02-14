
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_par_control {int dummy; } ;
struct TYPE_2__ {int * regs; int * clock_params; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_1(struct fb_par_control *VAR_6, struct fb_par_control *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = 1;
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
  VAR_9 &= !FUNC_0(VAR_1.clock_params[VAR_8]);
 if (!VAR_9)
  return 0;
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  VAR_9 &= !FUNC_0(VAR_1.regs[VAR_8]);
 if (!VAR_9)
  return 0;
 return (!FUNC_0(VAR_0) && !FUNC_0(VAR_4) && !FUNC_0(VAR_5)
  && !FUNC_0(VAR_2) && !FUNC_0(VAR_3));
}
