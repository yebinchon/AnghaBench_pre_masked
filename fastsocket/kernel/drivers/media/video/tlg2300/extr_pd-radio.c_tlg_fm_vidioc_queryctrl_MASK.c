
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; int flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_queryctrl*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8,
  struct v4l2_queryctrl *VAR_9)
{
 if (!(VAR_9->id & VAR_2))
  return -VAR_0;

 VAR_9->id &= ~VAR_2;
 if (VAR_9->id != VAR_1) {

  VAR_9->id = VAR_1;
  FUNC_0(VAR_9, VAR_6,
     VAR_5, 1,
     VAR_4);
  VAR_9->flags = VAR_3;
  return 0;
 }
 return -VAR_0;
}
