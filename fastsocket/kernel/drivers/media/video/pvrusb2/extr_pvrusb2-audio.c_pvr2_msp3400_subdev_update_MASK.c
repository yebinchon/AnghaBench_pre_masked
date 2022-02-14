
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {TYPE_3__* ops; } ;
struct routing_scheme {size_t cnt; int * def; } ;
struct pvr2_hdw {size_t input_val; TYPE_1__* hdw_desc; scalar_t__ force_dirty; scalar_t__ input_dirty; } ;
struct TYPE_6__ {TYPE_2__* audio; } ;
struct TYPE_5__ {int (* s_routing ) (struct v4l2_subdev*,int ,int ,int ) ;} ;
struct TYPE_4__ {unsigned int signal_routing_scheme; } ;


 unsigned int FUNC_0 (struct routing_scheme**) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 struct routing_scheme** VAR_3 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int ) ;

void FUNC_4(struct pvr2_hdw *VAR_4, struct v4l2_subdev *VAR_5)
{
 if (VAR_4->input_dirty || VAR_4->force_dirty) {
  const struct routing_scheme *VAR_6;
  unsigned int VAR_7 = VAR_4->hdw_desc->signal_routing_scheme;
  u32 VAR_8;

  FUNC_2(VAR_1, "subdev msp3400 v4l2 set_stereo");
  VAR_6 = (VAR_7 < FUNC_0(VAR_3)) ?
   VAR_3[VAR_7] : ((void*)0);

  if ((VAR_6 != ((void*)0)) &&
      (VAR_4->input_val >= 0) &&
      (VAR_4->input_val < VAR_6->cnt)) {
   VAR_8 = VAR_6->def[VAR_4->input_val];
  } else {
   FUNC_2(VAR_2,
       "*** WARNING *** subdev msp3400 set_input:"
       " Invalid routing scheme (%u)"
       " and/or input (%d)",
       VAR_7, VAR_4->input_val);
   return;
  }
  VAR_5->ops->audio->s_routing(VAR_5, VAR_8,
   FUNC_1(VAR_0), 0);
 }
}
