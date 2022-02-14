
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int smem_start; int smem_len; } ;
struct TYPE_6__ {TYPE_2__ fix; int screen_base; } ;
struct clcd_fb {TYPE_3__ fb; TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;

void FUNC_1(struct clcd_fb *VAR_0)
{
 FUNC_0(&VAR_0->dev->dev, VAR_0->fb.fix.smem_len,
         VAR_0->fb.screen_base, VAR_0->fb.fix.smem_start);
}
