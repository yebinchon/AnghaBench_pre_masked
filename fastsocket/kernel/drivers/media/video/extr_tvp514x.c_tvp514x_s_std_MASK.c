
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {int num_stds; int current_std; TYPE_3__* std_list; TYPE_1__* tvp514x_regs; } ;
struct TYPE_5__ {int id; int name; } ;
struct TYPE_6__ {TYPE_2__ standard; int video_std; } ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,size_t,int ) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, v4l2_std_id VAR_5)
{
 struct tvp514x_decoder *VAR_6 = FUNC_0(VAR_4);
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_stds; VAR_8++)
  if (VAR_5 & VAR_6->std_list[VAR_8].standard.id)
   break;

 if ((VAR_8 == VAR_6->num_stds) || (VAR_8 == VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_1,
    VAR_6->std_list[VAR_8].video_std);
 if (VAR_7)
  return VAR_7;

 VAR_6->current_std = VAR_8;
 VAR_6->tvp514x_regs[VAR_1].val =
  VAR_6->std_list[VAR_8].video_std;

 FUNC_2(1, VAR_3, VAR_4, "Standard set to: %s",
   VAR_6->std_list[VAR_8].standard.name);
 return 0;
}
