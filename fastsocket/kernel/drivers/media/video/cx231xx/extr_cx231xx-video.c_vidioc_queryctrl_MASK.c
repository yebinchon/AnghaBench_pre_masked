
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {int id; scalar_t__ type; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;
struct TYPE_2__ {struct v4l2_queryctrl v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_queryctrl*) ;
 int FUNC_1 (struct cx231xx*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (struct v4l2_queryctrl*,int ,int) ;
 struct v4l2_queryctrl VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_9, void *VAR_10,
       struct v4l2_queryctrl *VAR_11)
{
 struct cx231xx_fh *VAR_12 = VAR_10;
 struct cx231xx *VAR_13 = VAR_12->dev;
 int VAR_14 = VAR_11->id;
 int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_11->id = FUNC_4(VAR_5, VAR_11->id);
 if (FUNC_3(VAR_11->id == 0))
  return -VAR_1;

 FUNC_2(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->id = VAR_14;

 if (VAR_11->id < VAR_2 || VAR_11->id >= VAR_3)
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  if (VAR_6[VAR_15].v.id == VAR_11->id)
   break;

 if (VAR_15 == VAR_0) {
  *VAR_11 = VAR_7;
  return 0;
 }
 *VAR_11 = VAR_6[VAR_15].v;

 FUNC_0(VAR_13, VAR_4, VAR_8, VAR_11);

 if (VAR_11->type)
  return 0;
 else
  return -VAR_1;
}
