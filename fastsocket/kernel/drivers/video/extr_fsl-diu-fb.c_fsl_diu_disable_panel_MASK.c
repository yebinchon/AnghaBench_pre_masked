
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mfb_info {int index; struct diu_ad* ad; int count; struct fsl_diu_data* parent; } ;
struct fsl_diu_data {TYPE_2__* dummy_ad; TYPE_1__** fsl_diu_info; } ;
struct fb_info {struct mfb_info* par; } ;
struct diu_ad {int next_ad; int paddr; } ;
struct diu {int * desc; } ;
struct TYPE_6__ {struct diu* diu_reg; } ;
struct TYPE_5__ {int paddr; } ;
struct TYPE_4__ {struct mfb_info* par; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_2)
{
 struct mfb_info *VAR_3, *VAR_4, *VAR_5 = VAR_2->par;
 struct diu *VAR_6 = VAR_1.diu_reg;
 struct diu_ad *VAR_7 = VAR_5->ad;
 struct fsl_diu_data *VAR_8 = VAR_5->parent;
 int VAR_9 = 0;

 switch (VAR_5->index) {
 case 0:
  if (VAR_6->desc[0] != VAR_8->dummy_ad->paddr)
   FUNC_0(&VAR_6->desc[0],
    VAR_8->dummy_ad->paddr);
  break;
 case 1:
  VAR_4 = VAR_8->fsl_diu_info[2]->par;
  if (VAR_4->count > 0)
   FUNC_0(&VAR_6->desc[1], VAR_4->ad->paddr);

  else
   FUNC_0(&VAR_6->desc[1],
    VAR_8->dummy_ad->paddr);

  break;
 case 3:
  VAR_4 = VAR_8->fsl_diu_info[4]->par;
  if (VAR_4->count > 0)
   FUNC_0(&VAR_6->desc[2], VAR_4->ad->paddr);

  else
   FUNC_0(&VAR_6->desc[2],
    VAR_8->dummy_ad->paddr);

  break;
 case 2:
  VAR_3 = VAR_8->fsl_diu_info[1]->par;
  if (VAR_6->desc[1] != VAR_7->paddr) {

   if (VAR_3->count > 0)

    VAR_3->ad->next_ad = 0;
  } else
   FUNC_0(&VAR_6->desc[1], VAR_8->dummy_ad->paddr);

  break;
 case 4:
  VAR_3 = VAR_8->fsl_diu_info[3]->par;
  if (VAR_6->desc[2] != VAR_7->paddr) {

   if (VAR_3->count > 0)

    VAR_3->ad->next_ad = 0;
  } else
   FUNC_0(&VAR_6->desc[2], VAR_8->dummy_ad->paddr);

  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 return VAR_9;
}
