
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 struct routing_scheme** VAR_2 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ,int ) ;

void FUNC_3(struct pvr2_hdw *VAR_3, struct v4l2_subdev *VAR_4)
{
 if (VAR_3->input_dirty || VAR_3->force_dirty) {
  const struct routing_scheme *VAR_5;
  unsigned int VAR_6 = VAR_3->hdw_desc->signal_routing_scheme;
  u32 VAR_7;
  FUNC_1(VAR_0, "subdev v4l2 set_input(%d)",
      VAR_3->input_val);
  VAR_5 = (VAR_6 < FUNC_0(VAR_2)) ?
   VAR_2[VAR_6] : ((void*)0);
  if ((VAR_5 == ((void*)0)) ||
      (VAR_3->input_val < 0) ||
      (VAR_3->input_val >= VAR_5->cnt)) {
   FUNC_1(VAR_1,
       "*** WARNING *** subdev v4l2 set_input:"
       " Invalid routing scheme (%u)"
       " and/or input (%d)",
       VAR_6, VAR_3->input_val);
   return;
  }
  VAR_7 = VAR_5->def[VAR_3->input_val];
  VAR_4->ops->audio->s_routing(VAR_4, VAR_7, 0, 0);
 }
}
