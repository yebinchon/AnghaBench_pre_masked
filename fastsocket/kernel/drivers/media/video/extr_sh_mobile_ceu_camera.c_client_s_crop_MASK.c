
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* v4l2_dev; } ;
struct v4l2_rect {unsigned int width; unsigned int height; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_cropcap {struct v4l2_rect bounds; struct v4l2_rect c; } ;
struct v4l2_crop {struct v4l2_rect bounds; struct v4l2_rect c; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct v4l2_subdev*,struct v4l2_rect*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct device*,char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_3 (struct v4l2_rect*,struct v4l2_rect*) ;
 scalar_t__ FUNC_4 (struct v4l2_rect*,struct v4l2_rect*) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (struct v4l2_rect*,struct v4l2_rect*,int) ;
 int VAR_1 ;
 int FUNC_7 (scalar_t__*,unsigned int*,scalar_t__,int,unsigned int) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int ,struct v4l2_cropcap*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_3, struct v4l2_crop *VAR_4,
    struct v4l2_crop *VAR_5)
{
 struct v4l2_rect *VAR_6 = &VAR_4->c, *VAR_7 = &VAR_5->c;
 struct device *VAR_8 = VAR_3->v4l2_dev->dev;
 struct v4l2_cropcap VAR_9;
 int VAR_10;
 unsigned int VAR_11, VAR_12;

 FUNC_8(VAR_3, VAR_2, VAR_1, VAR_4);
 VAR_10 = FUNC_0(VAR_3, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;





 if (!FUNC_6(VAR_6, VAR_7, sizeof(*VAR_6))) {

  FUNC_1(VAR_8, "Camera S_CROP successful for %ux%u@%u:%u\n",
   VAR_6->width, VAR_6->height, VAR_6->left, VAR_6->top);
  return 0;
 }


 FUNC_2(VAR_8, "Fix camera S_CROP for %ux%u@%u:%u to %ux%u@%u:%u\n",
  VAR_7->width, VAR_7->height,
  VAR_7->left, VAR_7->top,
  VAR_6->width, VAR_6->height, VAR_6->left, VAR_6->top);


 VAR_10 = FUNC_8(VAR_3, VAR_2, VAR_0, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_7(&VAR_6->left, &VAR_6->width, VAR_9.bounds.left, 2,
         VAR_9.bounds.width);
 FUNC_7(&VAR_6->top, &VAR_6->height, VAR_9.bounds.top, 4,
         VAR_9.bounds.height);





 VAR_11 = FUNC_5(VAR_7->width, 2);
 VAR_12 = FUNC_5(VAR_7->height, 2);

 while (!VAR_10 && (FUNC_4(VAR_7, VAR_6) ||
   FUNC_3(VAR_7, VAR_6)) &&
        (VAR_9.bounds.width > VAR_11 || VAR_9.bounds.height > VAR_12)) {

  VAR_11 *= 2;
  VAR_12 *= 2;

  VAR_7->width = VAR_11;
  VAR_7->height = VAR_12;
  if (VAR_7->left > VAR_6->left)
   VAR_7->left = VAR_9.bounds.left;

  if (VAR_7->left + VAR_7->width < VAR_6->left + VAR_6->width)
   VAR_7->width = VAR_6->left + VAR_6->width -
    VAR_7->left;

  if (VAR_7->top > VAR_6->top)
   VAR_7->top = VAR_9.bounds.top;

  if (VAR_7->top + VAR_7->height < VAR_6->top + VAR_6->height)
   VAR_7->height = VAR_6->top + VAR_6->height -
    VAR_7->top;

  FUNC_8(VAR_3, VAR_2, VAR_1, VAR_5);
  VAR_10 = FUNC_0(VAR_3, VAR_7);
  FUNC_2(VAR_8, "Camera S_CROP %d for %ux%u@%u:%u\n", VAR_10,
   VAR_7->width, VAR_7->height,
   VAR_7->left, VAR_7->top);
 }


 if (FUNC_4(VAR_7, VAR_6) || FUNC_3(VAR_7, VAR_6)) {




  *VAR_7 = VAR_9.bounds;
  FUNC_8(VAR_3, VAR_2, VAR_1, VAR_5);
  VAR_10 = FUNC_0(VAR_3, VAR_7);
  FUNC_2(VAR_8, "Camera S_CROP %d for max %ux%u@%u:%u\n", VAR_10,
   VAR_7->width, VAR_7->height,
   VAR_7->left, VAR_7->top);
 }

 return VAR_10;
}
