
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device {int * resource; } ;
struct leo_par {scalar_t__ cursor; scalar_t__ lx_krn; scalar_t__ ld_ss1; scalar_t__ ld_ss0; scalar_t__ lc_ss0_usr; } ;
struct leo_cursor {int dummy; } ;
struct fb_info {scalar_t__ screen_base; } ;


 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct of_device *VAR_0, struct fb_info *VAR_1,
      struct leo_par *VAR_2)
{
 if (VAR_2->lc_ss0_usr)
  FUNC_0(&VAR_0->resource[0], VAR_2->lc_ss0_usr, 0x1000);
 if (VAR_2->ld_ss0)
  FUNC_0(&VAR_0->resource[0], VAR_2->ld_ss0, 0x1000);
 if (VAR_2->ld_ss1)
  FUNC_0(&VAR_0->resource[0], VAR_2->ld_ss1, 0x1000);
 if (VAR_2->lx_krn)
  FUNC_0(&VAR_0->resource[0], VAR_2->lx_krn, 0x1000);
 if (VAR_2->cursor)
  FUNC_0(&VAR_0->resource[0],
      VAR_2->cursor, sizeof(struct leo_cursor));
 if (VAR_1->screen_base)
  FUNC_0(&VAR_0->resource[0], VAR_1->screen_base, 0x800000);
}
