
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ top; scalar_t__ height; scalar_t__ left; scalar_t__ width; } ;
struct TYPE_2__ {scalar_t__ height; scalar_t__ width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_crop {scalar_t__ type; TYPE_1__ c; } ;
struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__ crop_current; struct v4l2_rect crop_bounds; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct saa7134_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7, struct v4l2_crop *VAR_8)
{
 struct saa7134_fh *VAR_9 = VAR_7;
 struct saa7134_dev *VAR_10 = VAR_9->dev;
 struct v4l2_rect *VAR_11 = &VAR_10->crop_bounds;

 if (VAR_8->type != VAR_4 &&
     VAR_8->type != VAR_5)
  return -VAR_1;
 if (VAR_8->c.height < 0)
  return -VAR_1;
 if (VAR_8->c.width < 0)
  return -VAR_1;

 if (FUNC_0(VAR_9->dev, VAR_2))
  return -VAR_0;
 if (FUNC_0(VAR_9->dev, VAR_3))
  return -VAR_0;

 if (VAR_8->c.top < VAR_11->top)
  VAR_8->c.top = VAR_11->top;
 if (VAR_8->c.top > VAR_11->top + VAR_11->height)
  VAR_8->c.top = VAR_11->top + VAR_11->height;
 if (VAR_8->c.height > VAR_11->top - VAR_8->c.top + VAR_11->height)
  VAR_8->c.height = VAR_11->top - VAR_8->c.top + VAR_11->height;

 if (VAR_8->c.left < VAR_11->left)
  VAR_8->c.left = VAR_11->left;
 if (VAR_8->c.left > VAR_11->left + VAR_11->width)
  VAR_8->c.left = VAR_11->left + VAR_11->width;
 if (VAR_8->c.width > VAR_11->left - VAR_8->c.left + VAR_11->width)
  VAR_8->c.width = VAR_11->left - VAR_8->c.left + VAR_11->width;

 VAR_10->crop_current = VAR_8->c;
 return 0;
}
