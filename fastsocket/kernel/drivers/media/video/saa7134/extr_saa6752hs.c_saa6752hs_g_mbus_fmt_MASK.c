
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; int code; int height; int width; } ;
struct saa6752hs_state {size_t video_format; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct saa6752hs_state* FUNC_0 (struct v4l2_subdev*) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6, struct v4l2_mbus_framefmt *VAR_7)
{
 struct saa6752hs_state *VAR_8 = FUNC_0(VAR_6);

 if (VAR_8->video_format == VAR_1)
  VAR_8->video_format = VAR_0;
 VAR_7->width = VAR_5[VAR_8->video_format].fmt.pix.width;
 VAR_7->height = VAR_5[VAR_8->video_format].fmt.pix.height;
 VAR_7->code = VAR_4;
 VAR_7->field = VAR_3;
 VAR_7->colorspace = VAR_2;
 return 0;
}
