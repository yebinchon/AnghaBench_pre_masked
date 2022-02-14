
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i810fb_par {int ddc_num; TYPE_1__* chan; } ;
struct fb_info {int device; struct i810fb_par* par; } ;
struct TYPE_2__ {int adapter; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int const*,int ,int ) ;

int FUNC_4(struct fb_info *VAR_2, u8 **VAR_3, int VAR_4)
{
 struct i810fb_par *VAR_5 = VAR_2->par;
        u8 *VAR_6 = ((void*)0);

 FUNC_0("i810-i2c: Probe DDC%i Bus\n", VAR_4+1);
 if (VAR_4 < VAR_5->ddc_num) {
  VAR_6 = FUNC_1(&VAR_5->chan[VAR_4].adapter);
 } else {
  const u8 *VAR_7 = FUNC_2(VAR_2->device);

  if (VAR_7 != ((void*)0)) {
   FUNC_0("i810-i2c: Getting EDID from BIOS\n");
   VAR_6 = FUNC_3(VAR_7, VAR_0, VAR_1);
  }
 }

 *VAR_3 = VAR_6;

        return (VAR_6) ? 0 : 1;
}
