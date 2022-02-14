
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cyberpro_info {int dev_name; TYPE_3__* info; int disable_extregs; int enable_extregs; int fb_size; int fb; int regs; int dev; } ;
struct TYPE_4__ {int id; int smem_len; } ;
struct TYPE_5__ {TYPE_1__ fix; int screen_base; } ;
struct TYPE_6__ {TYPE_2__ fb; int regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct cyberpro_info *VAR_3, int VAR_4)
{
 if (VAR_2 != ((void*)0)) {
  VAR_3->dev = VAR_2->dev;
  VAR_3->regs = VAR_2->regs;
  VAR_3->fb = VAR_2->fb.screen_base;
  VAR_3->fb_size = VAR_2->fb.fix.smem_len;
  VAR_3->enable_extregs = VAR_1;
  VAR_3->disable_extregs = VAR_0;
  VAR_3->info = VAR_2;

  FUNC_0(VAR_3->dev_name, VAR_2->fb.fix.id,
   sizeof(VAR_3->dev_name));
 }

 return VAR_2 != ((void*)0);
}
