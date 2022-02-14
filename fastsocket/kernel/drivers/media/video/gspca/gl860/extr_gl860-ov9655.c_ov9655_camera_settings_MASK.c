
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_6__ {scalar_t__ brightness; scalar_t__ hue; } ;
struct TYPE_5__ {scalar_t__ brightness; } ;
struct TYPE_4__ {scalar_t__ brightness; scalar_t__ hue; } ;
struct sd {int swapRB; TYPE_3__ vold; TYPE_2__ vmax; TYPE_1__ vcur; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct gspca_dev*,int,int,int,int,int,char*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 u8 VAR_2[] = "\x04\x00\x10\x7c\xa1\x00\x00\x70";

 s32 VAR_3 = VAR_1->vcur.brightness;
 s32 VAR_4 = VAR_1->vcur.hue;

 if (VAR_3 != VAR_1->vold.brightness) {
  VAR_1->vold.brightness = VAR_3;
  if (VAR_3 < 0 || VAR_3 > VAR_1->vmax.brightness)
   VAR_3 = 0;

  VAR_2[3] = VAR_3;
  FUNC_0(VAR_0, 0x40, 3, 0x6000, 0x0200, 8, VAR_2);
 }

 if (VAR_4 != VAR_1->vold.hue) {
  VAR_1->vold.hue = VAR_4;
  VAR_1->swapRB = (VAR_4 != 0);
 }

 return 0;
}
