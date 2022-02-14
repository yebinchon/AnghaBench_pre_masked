
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int name; int status; int type; } ;
struct TYPE_3__ {int input_flags; } ;
struct gspca_dev {TYPE_2__* sd_desc; TYPE_1__ cam; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_input *VAR_4)
{
 struct gspca_dev *VAR_5 = VAR_3;

 if (VAR_4->index != 0)
  return -VAR_0;
 VAR_4->type = VAR_1;
 VAR_4->status = VAR_5->cam.input_flags;
 FUNC_0(VAR_4->name, VAR_5->sd_desc->name,
  sizeof VAR_4->name);
 return 0;
}
