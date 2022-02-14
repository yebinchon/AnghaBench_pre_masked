
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_input {int index; int std; int type; int name; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_input {scalar_t__ type; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {size_t board; } ;
struct TYPE_5__ {struct cx23885_input* input; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_7, void *VAR_8,
    struct v4l2_input *VAR_9)
{
 struct cx23885_fh *VAR_10 = VAR_7->private_data;
 struct cx23885_dev *VAR_11 = VAR_10->dev;
 struct cx23885_input *VAR_12;
 int VAR_13;

 if (VAR_9->index >= 4)
  return -VAR_2;

 VAR_12 = &VAR_5[VAR_11->board].input[VAR_9->index];

 if (VAR_12->type == 0)
  return -VAR_2;



 FUNC_1(VAR_9->name, "unset");

 if (VAR_12->type == VAR_1 ||
     VAR_12->type == VAR_0)
  VAR_9->type = VAR_4;
 else
  VAR_9->type = VAR_3;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++)
  VAR_9->std |= VAR_6[VAR_13].id;
 return 0;
}
