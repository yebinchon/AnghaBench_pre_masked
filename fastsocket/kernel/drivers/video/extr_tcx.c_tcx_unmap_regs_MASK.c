
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcx_thc {int dummy; } ;
struct tcx_tec {int dummy; } ;
struct tcx_par {scalar_t__ cplane; scalar_t__ bt; scalar_t__ thc; scalar_t__ tec; } ;
struct of_device {int * resource; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_base; } ;
struct bt_regs {int dummy; } ;


 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct of_device *VAR_0, struct fb_info *VAR_1,
      struct tcx_par *VAR_2)
{
 if (VAR_2->tec)
  FUNC_0(&VAR_0->resource[7],
      VAR_2->tec, sizeof(struct tcx_tec));
 if (VAR_2->thc)
  FUNC_0(&VAR_0->resource[9],
      VAR_2->thc, sizeof(struct tcx_thc));
 if (VAR_2->bt)
  FUNC_0(&VAR_0->resource[8],
      VAR_2->bt, sizeof(struct bt_regs));
 if (VAR_2->cplane)
  FUNC_0(&VAR_0->resource[4],
      VAR_2->cplane, VAR_1->fix.smem_len * sizeof(u32));
 if (VAR_1->screen_base)
  FUNC_0(&VAR_0->resource[0],
      VAR_1->screen_base, VAR_1->fix.smem_len);
}
