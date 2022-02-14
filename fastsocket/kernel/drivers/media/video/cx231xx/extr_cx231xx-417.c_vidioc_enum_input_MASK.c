
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {int index; int type; int name; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_input {scalar_t__ type; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {size_t model; } ;
struct TYPE_4__ {size_t type; } ;
struct TYPE_3__ {struct cx231xx_input* input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int,char*,int) ;
 int * VAR_6 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
    struct v4l2_input *VAR_9)
{
 struct cx231xx_fh *VAR_10 = VAR_7->private_data;
 struct cx231xx *VAR_11 = VAR_10->dev;
 struct cx231xx_input *VAR_12;
 int VAR_13;
 FUNC_1(3, "enter vidioc_enum_input()i->index=%d\n", VAR_9->index);

 if (VAR_9->index >= 4)
  return -VAR_2;


 VAR_12 = &VAR_5[VAR_11->model].input[VAR_9->index];

 if (VAR_12->type == 0)
  return -VAR_2;




 VAR_13 = VAR_9->index;
 FUNC_2(VAR_9->name, VAR_6[FUNC_0(VAR_13)->type]);

 if (VAR_12->type == VAR_1 ||
     VAR_12->type == VAR_0)
  VAR_9->type = VAR_4;
 else
  VAR_9->type = VAR_3;


 return 0;
}
