
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w100fb_par {TYPE_1__* mach; } ;
struct w100_mode {unsigned int xres; unsigned int yres; } ;
struct TYPE_2__ {unsigned int num_modes; struct w100_mode* modelist; } ;



__attribute__((used)) static struct w100_mode *FUNC_0(struct w100fb_par *VAR_0, unsigned int *VAR_1, unsigned int *VAR_2, int VAR_3)
{
 struct w100_mode *VAR_4 = ((void*)0);
 struct w100_mode *VAR_5 = VAR_0->mach->modelist;
 unsigned int VAR_6 = 0xffffffff, VAR_7 = 0xffffffff;
 unsigned int VAR_8;

 for (VAR_8 = 0 ; VAR_8 < VAR_0->mach->num_modes ; VAR_8++) {
  if (VAR_5[VAR_8].xres >= *VAR_1 && VAR_5[VAR_8].yres >= *VAR_2 &&
    VAR_5[VAR_8].xres < VAR_6 && VAR_5[VAR_8].yres < VAR_7) {
   VAR_6 = VAR_5[VAR_8].xres;
   VAR_7 = VAR_5[VAR_8].yres;
   VAR_4 = &VAR_5[VAR_8];
  } else if(VAR_5[VAR_8].xres >= *VAR_2 && VAR_5[VAR_8].yres >= *VAR_1 &&
          VAR_5[VAR_8].xres < VAR_7 && VAR_5[VAR_8].yres < VAR_6) {
   VAR_6 = VAR_5[VAR_8].yres;
   VAR_7 = VAR_5[VAR_8].xres;
   VAR_4 = &VAR_5[VAR_8];
  }
 }

 if (VAR_4 && VAR_3) {
  *VAR_1 = VAR_6;
  *VAR_2 = VAR_7;
 }

 return VAR_4;
}
