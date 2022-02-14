
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef unsigned int u32 ;
struct s1d13xxxfb_par {int dummy; } ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_7__ {scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; } ;
struct TYPE_6__ {int visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_5__ var; TYPE_1__ fix; struct s1d13xxxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct s1d13xxxfb_par*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(u_int VAR_5, u_int VAR_6, u_int VAR_7, u_int VAR_8,
   u_int VAR_9, struct fb_info *VAR_10)
{
 struct s1d13xxxfb_par *VAR_11 = VAR_10->par;
 unsigned int VAR_12;

 if (VAR_5 >= VAR_4)
  return -VAR_0;

 FUNC_1("s1d13xxxfb_setcolreg: %d: rgb=%d,%d,%d, tr=%d\n",
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_10->var.grayscale)
  VAR_6 = VAR_7 = VAR_8 = (19595*VAR_6 + 38470*VAR_7 + 7471*VAR_8) >> 16;

 switch (VAR_10->fix.visual) {
  case 128:
   if (VAR_5 >= 16)
    return -VAR_0;



   VAR_12 = (VAR_6 >> 11) << VAR_10->var.red.offset;
   VAR_12 |= (VAR_7 >> 10) << VAR_10->var.green.offset;
   VAR_12 |= (VAR_8 >> 11) << VAR_10->var.blue.offset;

   FUNC_1("s1d13xxxfb_setcolreg: pseudo %d, val %08x\n",
        VAR_5, VAR_12);




   ((u32 *)VAR_10->pseudo_palette)[VAR_5] = VAR_12;


   break;
  case 129:
   FUNC_2(VAR_11, VAR_2, VAR_5);
   FUNC_2(VAR_11, VAR_3, VAR_6);
   FUNC_2(VAR_11, VAR_3, VAR_7);
   FUNC_2(VAR_11, VAR_3, VAR_8);

   break;
  default:
   return -VAR_1;
 }

 FUNC_1("s1d13xxxfb_setcolreg: done\n");

 return 0;
}
