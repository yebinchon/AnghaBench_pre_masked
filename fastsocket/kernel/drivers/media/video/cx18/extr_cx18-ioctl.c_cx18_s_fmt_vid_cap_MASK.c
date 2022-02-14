
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int width; int height; int code; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct TYPE_6__ {int width; int height; } ;
struct cx18 {int sd_av; TYPE_3__ params; int ana_capturing; int prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,struct v4l2_mbus_framefmt*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct cx18_open_id *VAR_7 = VAR_5;
 struct cx18 *VAR_8 = VAR_7->cx;
 struct v4l2_mbus_framefmt VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_3(&VAR_8->prio, VAR_7->prio);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;
 VAR_11 = VAR_6->fmt.pix.width;
 VAR_12 = VAR_6->fmt.pix.height;

 if (VAR_8->params.width == VAR_11 && VAR_8->params.height == VAR_12)
  return 0;

 if (FUNC_0(&VAR_8->ana_capturing) > 0)
  return -VAR_0;

 VAR_9.width = VAR_8->params.width = VAR_11;
 VAR_9.height = VAR_8->params.height = VAR_12;
 VAR_9.code = VAR_1;
 FUNC_4(VAR_8->sd_av, VAR_3, VAR_2, &VAR_9);
 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
