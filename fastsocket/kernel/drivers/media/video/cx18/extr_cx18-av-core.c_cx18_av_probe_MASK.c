
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int grp_id; int name; } ;
struct cx18_av_state {int rev; int audclk_freq; struct v4l2_subdev sd; scalar_t__ slicer_line_delay; scalar_t__ slicer_line_offset; int audmode; int aud_input; int vid_input; int id; } ;
struct TYPE_2__ {char* name; } ;
struct cx18 {TYPE_1__ v4l2_dev; struct cx18_av_state av_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cx18*) ;
 int VAR_8 ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (int ,int,char*,char*,int) ;
 int FUNC_3 (TYPE_1__*,struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,struct cx18*) ;
 int FUNC_5 (struct v4l2_subdev*,int *) ;

int FUNC_6(struct cx18 *VAR_9)
{
 struct cx18_av_state *VAR_10 = &VAR_9->av_state;
 struct v4l2_subdev *VAR_11;
 int VAR_12;

 VAR_10->rev = FUNC_1(VAR_9, VAR_3) & 0xffff;
 VAR_10->id = ((VAR_10->rev >> 4) == VAR_4)
      ? VAR_5 : VAR_6;

 VAR_10->vid_input = VAR_1;
 VAR_10->aud_input = VAR_0;
 VAR_10->audclk_freq = 48000;
 VAR_10->audmode = VAR_7;
 VAR_10->slicer_line_delay = 0;
 VAR_10->slicer_line_offset = (10 + VAR_10->slicer_line_delay - 2);

 VAR_11 = &VAR_10->sd;
 FUNC_5(VAR_11, &VAR_8);
 FUNC_4(VAR_11, VAR_9);
 FUNC_2(VAR_11->name, sizeof(VAR_11->name),
   "%s %03x", VAR_9->v4l2_dev.name, (VAR_10->rev >> 4));
 VAR_11->grp_id = VAR_2;
 VAR_12 = FUNC_3(&VAR_9->v4l2_dev, VAR_11);
 if (!VAR_12)
  FUNC_0(VAR_9);
 return VAR_12;
}
