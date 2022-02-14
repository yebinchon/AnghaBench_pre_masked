
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct fbcon_ops {size_t currcon; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_2)
{
 struct vc_data *VAR_3 = ((void*)0);
 struct fbcon_ops *VAR_4 = VAR_2->fbcon_par;

 if (!VAR_4 || VAR_4->currcon < 0)
  return;
 VAR_3 = VAR_1[VAR_4->currcon].d;


 FUNC_0(VAR_3, VAR_0);
}
