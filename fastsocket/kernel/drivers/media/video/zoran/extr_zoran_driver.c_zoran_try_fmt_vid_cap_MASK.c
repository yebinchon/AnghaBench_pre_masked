
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zoran_fh {struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct TYPE_4__ {scalar_t__ pixelformat; int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ fourcc; int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int,int *,int ,int ,int ,int ) ;
 TYPE_3__* VAR_7 ;
 int FUNC_4 (struct file*,struct zoran_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_8, void *VAR_9,
     struct v4l2_format *VAR_10)
{
 struct zoran_fh *VAR_11 = VAR_9;
 struct zoran *VAR_12 = VAR_11->zr;
 int VAR_13;
 int VAR_14;

 if (VAR_10->fmt.pix.pixelformat == VAR_6)
  return FUNC_4(VAR_8, VAR_11, VAR_10);

 FUNC_1(&VAR_12->resource_lock);

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
  if (VAR_7[VAR_14].fourcc == VAR_10->fmt.pix.pixelformat)
   break;

 if (VAR_14 == VAR_5) {
  FUNC_2(&VAR_12->resource_lock);
  return -VAR_4;
 }

 VAR_13 = FUNC_0(VAR_7[VAR_14].depth, 8);
 FUNC_3(
  &VAR_10->fmt.pix.width, VAR_3, VAR_1, VAR_13 == 2 ? 1 : 2,
  &VAR_10->fmt.pix.height, VAR_2, VAR_0, 0, 0);
 FUNC_2(&VAR_12->resource_lock);

 return 0;
}
