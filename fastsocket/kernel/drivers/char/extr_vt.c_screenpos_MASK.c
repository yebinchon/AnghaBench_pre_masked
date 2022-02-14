
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {TYPE_1__* vc_sw; scalar_t__ vc_visible_origin; scalar_t__ vc_origin; } ;
struct TYPE_2__ {unsigned short* (* con_screen_pos ) (struct vc_data*,int) ;} ;


 unsigned short* FUNC_0 (struct vc_data*,int) ;

__attribute__((used)) static inline unsigned short *FUNC_1(struct vc_data *VAR_0, int VAR_1, int VAR_2)
{
 unsigned short *VAR_3;

 if (!VAR_2)
  VAR_3 = (unsigned short *)(VAR_0->vc_origin + VAR_1);
 else if (!VAR_0->vc_sw->con_screen_pos)
  VAR_3 = (unsigned short *)(VAR_0->vc_visible_origin + VAR_1);
 else
  VAR_3 = VAR_0->vc_sw->con_screen_pos(VAR_0, VAR_1);
 return VAR_3;
}
