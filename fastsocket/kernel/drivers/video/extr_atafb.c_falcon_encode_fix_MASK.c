
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_fix_screeninfo {unsigned long smem_start; int type_aux; int xpanstep; int ypanstep; int accel; int line_length; int visual; void* type; scalar_t__ ywrapstep; int smem_len; int id; } ;
struct TYPE_3__ {int f_shift; scalar_t__ mono; } ;
struct TYPE_4__ {TYPE_1__ falcon; } ;
struct atafb_par {int next_line; TYPE_2__ hw; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct fb_fix_screeninfo *VAR_7,
        struct atafb_par *VAR_8)
{
 FUNC_0(VAR_7->id, "Atari Builtin");
 VAR_7->smem_start = (unsigned long)VAR_5;
 VAR_7->smem_len = VAR_6;
 VAR_7->type = VAR_1;
 VAR_7->type_aux = 2;
 VAR_7->visual = VAR_3;
 VAR_7->xpanstep = 1;
 VAR_7->ypanstep = 1;
 VAR_7->ywrapstep = 0;
 if (VAR_8->hw.falcon.mono) {
  VAR_7->type = VAR_2;
  VAR_7->type_aux = 0;

  VAR_7->xpanstep = 32;
 } else if (VAR_8->hw.falcon.f_shift & 0x100) {
  VAR_7->type = VAR_2;
  VAR_7->type_aux = 0;

  VAR_7->visual = VAR_4;
  VAR_7->xpanstep = 2;
 }
 VAR_7->line_length = VAR_8->next_line;
 VAR_7->accel = VAR_0;
 return 0;
}
