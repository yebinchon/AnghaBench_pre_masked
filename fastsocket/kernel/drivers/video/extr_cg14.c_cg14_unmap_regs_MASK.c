
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {int * resource; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_base; } ;
struct cg14_regs {int dummy; } ;
struct cg14_par {scalar_t__ cursor; scalar_t__ clut; scalar_t__ regs; } ;
struct cg14_cursor {int dummy; } ;
struct cg14_clut {int dummy; } ;


 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct of_device *VAR_0, struct fb_info *VAR_1,
       struct cg14_par *VAR_2)
{
 if (VAR_2->regs)
  FUNC_0(&VAR_0->resource[0],
      VAR_2->regs, sizeof(struct cg14_regs));
 if (VAR_2->clut)
  FUNC_0(&VAR_0->resource[0],
      VAR_2->clut, sizeof(struct cg14_clut));
 if (VAR_2->cursor)
  FUNC_0(&VAR_0->resource[0],
      VAR_2->cursor, sizeof(struct cg14_cursor));
 if (VAR_1->screen_base)
  FUNC_0(&VAR_0->resource[1],
      VAR_1->screen_base, VAR_1->fix.smem_len);
}
