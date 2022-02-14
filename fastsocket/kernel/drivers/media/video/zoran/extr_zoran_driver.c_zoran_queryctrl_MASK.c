
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_fh {struct zoran* zr; } ;
struct zoran {int dummy; } ;
struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct zoran*,int ,int ,struct v4l2_queryctrl*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
     struct v4l2_queryctrl *VAR_7)
{
 struct zoran_fh *VAR_8 = VAR_6;
 struct zoran *VAR_9 = VAR_8->zr;


 if (VAR_7->id < VAR_1 ||
     VAR_7->id > VAR_2)
  return -VAR_0;

 FUNC_0(VAR_9, VAR_3, VAR_4, VAR_7);

 return 0;
}
