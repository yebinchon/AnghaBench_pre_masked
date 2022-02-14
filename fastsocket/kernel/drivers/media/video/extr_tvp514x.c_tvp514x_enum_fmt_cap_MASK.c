
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_fmtdesc {int index; scalar_t__ type; } ;
struct tvp514x_decoder {int num_fmts; TYPE_1__* fmt_list; } ;
struct TYPE_2__ {int description; int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_fmtdesc*,TYPE_1__*,int) ;
 struct tvp514x_decoder* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct v4l2_subdev *VAR_3, struct v4l2_fmtdesc *VAR_4)
{
 struct tvp514x_decoder *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_6 = VAR_4->index;
 if ((VAR_6 >= VAR_5->num_fmts) || (VAR_6 < 0))

  return -VAR_0;

 if (VAR_4->type != VAR_1)

  return -VAR_0;

 FUNC_0(VAR_4, &VAR_5->fmt_list[VAR_6],
  sizeof(struct v4l2_fmtdesc));

 FUNC_2(1, VAR_2, VAR_3, "Current FMT: index - %d (%s)",
   VAR_5->fmt_list[VAR_6].index,
   VAR_5->fmt_list[VAR_6].description);
 return 0;
}
