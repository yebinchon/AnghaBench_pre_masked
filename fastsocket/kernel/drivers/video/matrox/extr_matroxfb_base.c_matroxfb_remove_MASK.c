
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int base; int vbase; } ;
struct TYPE_5__ {int len_maximum; int base; int vbase; int len; } ;
struct TYPE_4__ {int vram; scalar_t__ vram_valid; } ;
struct matrox_fb_info {int dead; TYPE_3__ mmio; TYPE_2__ video; TYPE_1__ mtrr; int fbcon; scalar_t__ usecount; } ;


 int FUNC_0 (struct matrox_fb_info*) ;
 int FUNC_1 (struct matrox_fb_info*) ;
 int FUNC_2 (struct matrox_fb_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct matrox_fb_info *VAR_0, int VAR_1)
{
 VAR_0->dead = 1;
 if (VAR_0->usecount) {

  return;
 }
 FUNC_2(VAR_0);
 FUNC_6(&VAR_0->fbcon);
 FUNC_1(VAR_0);




 FUNC_3(VAR_0->mmio.vbase);
 FUNC_3(VAR_0->video.vbase);
 FUNC_5(VAR_0->video.base, VAR_0->video.len_maximum);
 FUNC_5(VAR_0->mmio.base, 16384);
 FUNC_0(VAR_0);
}
