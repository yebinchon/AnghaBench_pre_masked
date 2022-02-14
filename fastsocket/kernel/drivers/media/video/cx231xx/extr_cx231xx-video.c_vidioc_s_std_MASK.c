
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef struct v4l2_mbus_framefmt* v4l2_std_id ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_4__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int height; int width; struct v4l2_mbus_framefmt* norm; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (struct cx231xx*) ;
 int VAR_1 ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (char*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct v4l2_mbus_framefmt*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,struct v4l2_mbus_framefmt*) ;
 int VAR_4 ;
 int FUNC_6 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, void *VAR_6, v4l2_std_id *VAR_7)
{
 struct cx231xx_fh *VAR_8 = VAR_6;
 struct cx231xx *VAR_9 = VAR_8->dev;
 struct v4l2_mbus_framefmt VAR_10;
 struct v4l2_format VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_3("vidioc_s_std : 0x%x\n", (unsigned int)*VAR_7);

 VAR_9->norm = *VAR_7;


 VAR_11.fmt.pix.width = VAR_9->width;
 VAR_11.fmt.pix.height = VAR_9->height;
 FUNC_6(VAR_5, VAR_6, &VAR_11);

 FUNC_0(VAR_9, VAR_1, VAR_3, VAR_9->norm);




 FUNC_4(&VAR_10, &VAR_11.fmt.pix, VAR_0);
 FUNC_0(VAR_9, VAR_4, VAR_2, &VAR_10);
 FUNC_5(&VAR_11.fmt.pix, &VAR_10);


 VAR_9->width = VAR_11.fmt.pix.width;
 VAR_9->height = VAR_11.fmt.pix.height;


 FUNC_2(VAR_9);

 return 0;
}
