
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_querymenu {int dummy; } ;
struct gspca_dev {TYPE_1__* sd_desc; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* querymenu ) (struct gspca_dev*,struct v4l2_querymenu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,struct v4l2_querymenu*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
       struct v4l2_querymenu *VAR_3)
{
 struct gspca_dev *VAR_4 = VAR_2;

 if (!VAR_4->sd_desc->querymenu)
  return -VAR_0;
 return VAR_4->sd_desc->querymenu(VAR_4, VAR_3);
}
