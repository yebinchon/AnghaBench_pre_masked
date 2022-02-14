
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; int channels; int name; int type; scalar_t__ channel; scalar_t__ tuners; scalar_t__ flags; int maxheight; int maxwidth; int minheight; int minwidth; scalar_t__ audios; int palette; int whiteness; int contrast; int brightness; int hue; int colour; } ;
struct uvd {TYPE_1__ vchan; TYPE_1__ vcap; TYPE_1__ vpic; TYPE_1__ vpic_old; } ;
struct TYPE_4__ {int height; int width; } ;


 int FUNC_0 (int,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (struct uvd*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(struct uvd *VAR_11)
{
 int VAR_12;
 FUNC_1(&VAR_11->vpic, 0, sizeof(VAR_11->vpic));
 FUNC_1(&VAR_11->vpic_old, 0x55, sizeof(VAR_11->vpic_old));

 VAR_11->vpic.colour = VAR_7;
 VAR_11->vpic.hue = VAR_9;
 VAR_11->vpic.brightness = VAR_5;
 VAR_11->vpic.contrast = VAR_8;
 VAR_11->vpic.whiteness = VAR_10;
 VAR_11->vpic.depth = 24;
 VAR_11->vpic.palette = VAR_2;

 FUNC_1(&VAR_11->vcap, 0, sizeof(VAR_11->vcap));
 FUNC_3(VAR_11->vcap.name, "QCM USB Camera");
 VAR_11->vcap.type = VAR_4;
 VAR_11->vcap.channels = 1;
 VAR_11->vcap.audios = 0;

 VAR_11->vcap.minwidth = VAR_6[VAR_0].width;
 VAR_11->vcap.minheight = VAR_6[VAR_0].height;
 VAR_11->vcap.maxwidth = VAR_6[VAR_1].width;
 VAR_11->vcap.maxheight = VAR_6[VAR_1].height;

 FUNC_1(&VAR_11->vchan, 0, sizeof(VAR_11->vchan));
 VAR_11->vchan.flags = 0 ;
 VAR_11->vchan.tuners = 0;
 VAR_11->vchan.channel = 0;
 VAR_11->vchan.type = VAR_3;
 FUNC_3(VAR_11->vchan.name, "Camera");

 FUNC_0(VAR_12, FUNC_2(VAR_11));
 return 0;
}
