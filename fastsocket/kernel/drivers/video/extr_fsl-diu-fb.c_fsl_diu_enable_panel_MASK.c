
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mfb_info {int index; scalar_t__ type; struct diu_ad* ad; int count; struct fsl_diu_data* parent; } ;
struct fsl_diu_data {TYPE_2__* dummy_ad; TYPE_1__** fsl_diu_info; } ;
struct fb_info {struct mfb_info* par; } ;
struct diu_ad {int paddr; void* next_ad; } ;
struct diu {int * desc; } ;
struct TYPE_6__ {struct diu* diu_reg; } ;
struct TYPE_5__ {int paddr; } ;
struct TYPE_4__ {struct mfb_info* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_3)
{
 struct mfb_info *VAR_4, *VAR_5, *VAR_6 = VAR_3->par;
 struct diu *VAR_7 = VAR_2.diu_reg;
 struct diu_ad *VAR_8 = VAR_6->ad;
 struct fsl_diu_data *VAR_9 = VAR_6->parent;
 int VAR_10 = 0;

 FUNC_2("enable_panel index %d\n", VAR_6->index);
 if (VAR_6->type != VAR_1) {
  switch (VAR_6->index) {
  case 0:
   if (VAR_7->desc[0] != VAR_8->paddr)
    FUNC_1(&VAR_7->desc[0], VAR_8->paddr);
   break;
  case 1:
   VAR_5 = VAR_9->fsl_diu_info[2]->par;
   if (VAR_7->desc[1] != VAR_8->paddr) {
    if (VAR_5->count > 0)
     VAR_8->next_ad =
      FUNC_0(VAR_5->ad->paddr);
    else
     VAR_8->next_ad = 0;
    FUNC_1(&VAR_7->desc[1], VAR_8->paddr);
   }
   break;
  case 3:
   VAR_5 = VAR_9->fsl_diu_info[4]->par;
   if (VAR_7->desc[2] != VAR_8->paddr) {
    if (VAR_5->count > 0)
     VAR_8->next_ad =
      FUNC_0(VAR_5->ad->paddr);
    else
     VAR_8->next_ad = 0;
    FUNC_1(&VAR_7->desc[2], VAR_8->paddr);
   }
   break;
  case 2:
   VAR_4 = VAR_9->fsl_diu_info[1]->par;
   VAR_8->next_ad = 0;
   if (VAR_7->desc[1] == VAR_9->dummy_ad->paddr)
    FUNC_1(&VAR_7->desc[1], VAR_8->paddr);
   else
    VAR_4->ad->next_ad = FUNC_0(VAR_8->paddr);
   break;
  case 4:
   VAR_4 = VAR_9->fsl_diu_info[3]->par;
   VAR_8->next_ad = 0;
   if (VAR_7->desc[2] == VAR_9->dummy_ad->paddr)
    FUNC_1(&VAR_7->desc[2], VAR_8->paddr);
   else
    VAR_4->ad->next_ad = FUNC_0(VAR_8->paddr);
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }
 } else
  VAR_10 = -VAR_0;
 return VAR_10;
}
