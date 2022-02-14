
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ext_controls {int count; int value; int id; struct v4l2_ext_controls* controls; } ;
struct v4l2_ext_control {int count; int value; int id; struct v4l2_ext_control* controls; } ;
struct pvr2_ctrl {TYPE_2__* hdw; TYPE_1__* info; } ;
typedef int cs ;
typedef int c1 ;
struct TYPE_4__ {int enc_ctl_state; } ;
struct TYPE_3__ {int v4l_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (struct v4l2_ext_controls*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_ctrl *VAR_1,int *VAR_2)
{
 int VAR_3;
 struct v4l2_ext_controls VAR_4;
 struct v4l2_ext_control VAR_5;
 FUNC_1(&VAR_4,0,sizeof(VAR_4));
 FUNC_1(&VAR_5,0,sizeof(VAR_5));
 VAR_4.controls = &VAR_5;
 VAR_4.count = 1;
 VAR_5 = VAR_1->info->v4l_id;
 VAR_3 = FUNC_0(&VAR_1->hdw->enc_ctl_state, 0, &VAR_4,
    VAR_0);
 if (VAR_3) return VAR_3;
 *VAR_2 = VAR_5;
 return 0;
}
