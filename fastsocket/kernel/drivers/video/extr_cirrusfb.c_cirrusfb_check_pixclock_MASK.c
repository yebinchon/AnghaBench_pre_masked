
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int bits_per_pixel; int pixclock; } ;
struct TYPE_3__ {scalar_t__ smem_len; } ;
struct fb_info {TYPE_1__ fix; int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {size_t btype; int multiplexing; int doubleVCLK; } ;
struct TYPE_4__ {long* maxclock; } ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,char*,long) ;
 int FUNC_2 (int ,char*,long) ;

__attribute__((used)) static int FUNC_3(const struct fb_var_screeninfo *VAR_3,
       struct fb_info *VAR_4)
{
 long VAR_5;
 long VAR_6;
 struct cirrusfb_info *VAR_7 = VAR_4->par;
 unsigned VAR_8 = VAR_3->bits_per_pixel >> 3;


 VAR_5 = FUNC_0(VAR_3->pixclock);

 FUNC_1(VAR_4->device, "desired pixclock: %ld kHz\n", VAR_5);

 VAR_6 = VAR_2[VAR_7->btype].maxclock[VAR_8];
 VAR_7->multiplexing = 0;



 if (VAR_5 > VAR_6) {
  FUNC_2(VAR_4->device,
   "Frequency greater than maxclock (%ld kHz)\n",
   VAR_6);
  return -VAR_0;
 }




 if (VAR_3->bits_per_pixel == 8) {
  switch (VAR_7->btype) {
  case 131:
  case 128:
  case 129:
   if (VAR_5 > 85500)
    VAR_7->multiplexing = 1;
   break;
  case 130:
   if (VAR_5 > 135100)
    VAR_7->multiplexing = 1;
   break;

  default:
   break;
  }
 }



 VAR_7->doubleVCLK = 0;
 if (VAR_7->btype == 128 && VAR_4->fix.smem_len <= VAR_1 &&
     VAR_3->bits_per_pixel == 16) {
  VAR_7->doubleVCLK = 1;
 }

 return 0;
}
