
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_int_device {int dummy; } ;
struct v4l2_fmtdesc {int index; int type; int pixelformat; int description; int flags; } ;
struct TYPE_2__ {int pixelformat; int description; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct v4l2_int_device *VAR_3,
       struct v4l2_fmtdesc *VAR_4)
{
 int VAR_5 = VAR_4->index;

 switch (VAR_4->type) {
 case 128:
  if (VAR_5 >= VAR_1)
   return -VAR_0;
  break;

 default:
  return -VAR_0;
 }

 VAR_4->flags = VAR_2[VAR_5].flags;
 FUNC_0(VAR_4->description, VAR_2[VAR_5].description,
  sizeof(VAR_4->description));
 VAR_4->pixelformat = VAR_2[VAR_5].pixelformat;

 return 0;
}
