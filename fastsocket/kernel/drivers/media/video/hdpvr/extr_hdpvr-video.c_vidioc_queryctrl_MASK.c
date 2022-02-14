
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_queryctrl {int id; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {int flags; int options; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct v4l2_queryctrl*,int) ;
 int FUNC_2 (struct v4l2_queryctrl*,int ,int) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
       struct v4l2_queryctrl *VAR_6)
{
 struct hdpvr_fh *VAR_7 = VAR_4->private_data;
 struct hdpvr_device *VAR_8 = VAR_7->dev;
 int VAR_9, VAR_10;
 u32 VAR_11 = VAR_6->id;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 VAR_10 = !!(VAR_11 & VAR_2);
 VAR_6->id = VAR_11 & ~VAR_2;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
  if (VAR_10) {
   if (VAR_6->id < VAR_3[VAR_9])
    VAR_6->id = VAR_3[VAR_9];
   else
    continue;
  }

  if (VAR_6->id == VAR_3[VAR_9])
   return FUNC_1(&VAR_8->options, VAR_6,
           VAR_8->flags & VAR_1);

  if (VAR_6->id < VAR_3[VAR_9])
   break;
 }

 return -VAR_0;
}
