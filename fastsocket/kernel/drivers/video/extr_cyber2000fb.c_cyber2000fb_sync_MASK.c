
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_3__ {int accel_flags; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct cfb_info {TYPE_2__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct cfb_info*) ;
 int FUNC_1 (int ,int ,struct cfb_info*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_3)
{
 struct cfb_info *VAR_4 = (struct cfb_info *)VAR_3;
 int VAR_5 = 100000;

 if (!(VAR_4->fb.var.accel_flags & VAR_2))
  return 0;

 while (FUNC_0(VAR_1, VAR_4) & VAR_0) {
  if (!VAR_5--) {
   FUNC_2("accel_wait timed out\n");
   FUNC_1(0, VAR_1, VAR_4);
   break;
  }
  FUNC_3(1);
 }
 return 0;
}
