
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfb_info {struct fsl_diu_data* parent; } ;
struct fsl_diu_data {int fb_enabled; } ;
struct fb_info {struct mfb_info* par; } ;
struct diu {int diu_mode; } ;
struct TYPE_2__ {int mode; struct diu* diu_reg; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1)
{
 struct diu *VAR_2 = VAR_0.diu_reg;
 struct mfb_info *VAR_3 = VAR_1->par;
 struct fsl_diu_data *VAR_4 = VAR_3->parent;

 if (!VAR_4->fb_enabled) {
  FUNC_0(&VAR_2->diu_mode, VAR_0.mode);
  VAR_4->fb_enabled++;
 }
}
