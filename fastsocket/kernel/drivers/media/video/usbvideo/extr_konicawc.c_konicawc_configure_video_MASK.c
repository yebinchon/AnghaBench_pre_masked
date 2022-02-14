
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int colour; int hue; int brightness; int contrast; int whiteness; int depth; int channels; int name; int type; scalar_t__ channel; scalar_t__ tuners; scalar_t__ flags; int maxheight; int maxwidth; int minheight; int minwidth; scalar_t__ audios; int palette; } ;
struct uvd {TYPE_1__ vchan; TYPE_1__ vcap; TYPE_1__ vpic; TYPE_1__ vpic_old; scalar_t__ user_data; } ;
struct konicawc {int brightness; int contrast; int saturation; int sharpness; int white_bal; } ;
struct TYPE_4__ {int height; int width; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct uvd*,int,int ,int,int *,int) ;
 scalar_t__ FUNC_3 (struct uvd*,int,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,char*) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_6(struct uvd *VAR_16)
{
 struct konicawc *VAR_17 = (struct konicawc *)VAR_16->user_data;
 u8 VAR_18[2];

 FUNC_4(&VAR_16->vpic, 0, sizeof(VAR_16->vpic));
 FUNC_4(&VAR_16->vpic_old, 0x55, sizeof(VAR_16->vpic_old));

 FUNC_1(VAR_10, 0, VAR_0);
 FUNC_1(VAR_12, 0, VAR_1);
 FUNC_1(VAR_13, 0, VAR_2);
 FUNC_1(VAR_14, 0, VAR_3);
 FUNC_1(VAR_15, 0, VAR_4);

 VAR_17->brightness = VAR_10 / 11;
 VAR_17->contrast = VAR_12 / 11;
 VAR_17->saturation = VAR_13 / 11;
 VAR_17->sharpness = VAR_14 / 11;
 VAR_17->white_bal = VAR_15 / 11;

 VAR_16->vpic.colour = 108;
 VAR_16->vpic.hue = 108;
 VAR_16->vpic.brightness = VAR_10;
 VAR_16->vpic.contrast = VAR_12;
 VAR_16->vpic.whiteness = VAR_15;
 VAR_16->vpic.depth = 6;
 VAR_16->vpic.palette = VAR_7;

 FUNC_4(&VAR_16->vcap, 0, sizeof(VAR_16->vcap));
 FUNC_5(VAR_16->vcap.name, "Konica Webcam");
 VAR_16->vcap.type = VAR_9;
 VAR_16->vcap.channels = 1;
 VAR_16->vcap.audios = 0;
 VAR_16->vcap.minwidth = VAR_11[VAR_5].width;
 VAR_16->vcap.minheight = VAR_11[VAR_5].height;
 VAR_16->vcap.maxwidth = VAR_11[VAR_6].width;
 VAR_16->vcap.maxheight = VAR_11[VAR_6].height;

 FUNC_4(&VAR_16->vchan, 0, sizeof(VAR_16->vchan));
 VAR_16->vchan.flags = 0 ;
 VAR_16->vchan.tuners = 0;
 VAR_16->vchan.channel = 0;
 VAR_16->vchan.type = VAR_8;
 FUNC_5(VAR_16->vchan.name, "Camera");


 FUNC_0(1, "device init");
 if(!FUNC_2(VAR_16, 0x3, 0, 0x10, VAR_18, 2))
  FUNC_0(2, "3,10 -> %2.2x %2.2x", VAR_18[0], VAR_18[1]);
 if(!FUNC_2(VAR_16, 0x3, 0, 0x10, VAR_18, 2))
  FUNC_0(2, "3,10 -> %2.2x %2.2x", VAR_18[0], VAR_18[1]);
 if(FUNC_3(VAR_16, 0x2, 0, 0xd))
  FUNC_0(2, "2,0,d failed");
 FUNC_0(1, "setting initial values");
}
