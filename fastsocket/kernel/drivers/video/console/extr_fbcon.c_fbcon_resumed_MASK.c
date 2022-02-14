
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct fbcon_ops {size_t currcon; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int FUNC_0 (struct vc_data*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1)
{
 struct vc_data *VAR_2;
 struct fbcon_ops *VAR_3 = VAR_1->fbcon_par;

 if (!VAR_3 || VAR_3->currcon < 0)
  return;
 VAR_2 = VAR_0[VAR_3->currcon].d;

 FUNC_0(VAR_2);
}
