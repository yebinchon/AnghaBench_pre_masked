
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int colour; int hue; int brightness; int contrast; int whiteness; int depth; int channels; int name; int type; scalar_t__ channel; scalar_t__ tuners; scalar_t__ flags; int minheight; int minwidth; int maxheight; int maxwidth; scalar_t__ audios; int palette; } ;
struct uvd {TYPE_1__ vchan; TYPE_1__ vcap; int canvas; TYPE_1__ vpic; TYPE_1__ vpic_old; } ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct uvd *VAR_10)
{
 if (VAR_10 == ((void*)0))
  return;

 FUNC_0(VAR_4, 0, 255);
 FUNC_0(VAR_6, 0, 255);
 FUNC_0(VAR_5, 0, 255);
 FUNC_0(VAR_7, 0, 255);
 FUNC_0(VAR_3, 0, 255);

 FUNC_3(&VAR_10->vpic, 0, sizeof(VAR_10->vpic));
 FUNC_3(&VAR_10->vpic_old, 0x55, sizeof(VAR_10->vpic_old));

 VAR_10->vpic.colour = VAR_5 << 8;
 VAR_10->vpic.hue = VAR_7 << 8;
 VAR_10->vpic.brightness = VAR_4 << 8;
 VAR_10->vpic.contrast = VAR_6 << 8;
 VAR_10->vpic.whiteness = 105 << 8;
 VAR_10->vpic.depth = 24;
 VAR_10->vpic.palette = VAR_0;

 FUNC_3(&VAR_10->vcap, 0, sizeof(VAR_10->vcap));
 FUNC_4(VAR_10->vcap.name, "IBM USB Camera");
 VAR_10->vcap.type = VAR_2;
 VAR_10->vcap.channels = 1;
 VAR_10->vcap.audios = 0;
 VAR_10->vcap.maxwidth = FUNC_1(VAR_10->canvas);
 VAR_10->vcap.maxheight = FUNC_2(VAR_10->canvas);
 VAR_10->vcap.minwidth = VAR_9;
 VAR_10->vcap.minheight = VAR_8;

 FUNC_3(&VAR_10->vchan, 0, sizeof(VAR_10->vchan));
 VAR_10->vchan.flags = 0;
 VAR_10->vchan.tuners = 0;
 VAR_10->vchan.channel = 0;
 VAR_10->vchan.type = VAR_1;
 FUNC_4(VAR_10->vchan.name, "Camera");
}
