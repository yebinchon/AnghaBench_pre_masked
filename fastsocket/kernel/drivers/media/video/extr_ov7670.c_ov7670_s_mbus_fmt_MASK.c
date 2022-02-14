
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct ov7670_win_size {unsigned char com7_bit; TYPE_1__* regs; int vstop; int vstart; int hstop; int hstart; } ;
struct ov7670_info {unsigned char clkrc; struct ov7670_format_struct* fmt; } ;
struct ov7670_format_struct {TYPE_1__* regs; } ;
struct TYPE_2__ {unsigned char value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int ,int ) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*,struct ov7670_format_struct**,struct ov7670_win_size**) ;
 int FUNC_2 (struct v4l2_subdev*,int ,unsigned char) ;
 int FUNC_3 (struct v4l2_subdev*,TYPE_1__*) ;
 struct ov7670_info* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
     struct v4l2_mbus_framefmt *VAR_3)
{
 struct ov7670_format_struct *VAR_4;
 struct ov7670_win_size *VAR_5;
 struct ov7670_info *VAR_6 = FUNC_4(VAR_2);
 unsigned char VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_4, &VAR_5);

 if (VAR_8)
  return VAR_8;






 VAR_7 = VAR_4->regs[0].value;
 VAR_7 |= VAR_5->com7_bit;
 FUNC_2(VAR_2, VAR_1, VAR_7);



 FUNC_3(VAR_2, VAR_4->regs + 1);
 FUNC_0(VAR_2, VAR_5->hstart, VAR_5->hstop, VAR_5->vstart,
   VAR_5->vstop);
 VAR_8 = 0;
 if (VAR_5->regs)
  VAR_8 = FUNC_3(VAR_2, VAR_5->regs);
 VAR_6->fmt = VAR_4;
 if (VAR_8 == 0)
  VAR_8 = FUNC_2(VAR_2, VAR_0, VAR_6->clkrc);
 return 0;
}
