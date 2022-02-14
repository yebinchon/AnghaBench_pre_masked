
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpfe_device {size_t std_index; int v4l2_dev; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int height; int width; } ;
struct v4l2_cropcap {int pixelaspect; TYPE_2__ defrect; TYPE_1__ bounds; int type; } ;
struct file {int dummy; } ;
struct TYPE_7__ {int pixelaspect; int height; int width; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct v4l2_cropcap*,int ,int) ;
 int FUNC_2 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_3 (struct file*) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
         struct v4l2_cropcap *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_3(VAR_4);

 FUNC_2(1, VAR_2, &VAR_7->v4l2_dev, "vpfe_cropcap\n");

 if (VAR_7->std_index > FUNC_0(VAR_3))
  return -VAR_0;

 FUNC_1(VAR_6, 0, sizeof(struct v4l2_cropcap));
 VAR_6->type = VAR_1;
 VAR_6->bounds.width = VAR_6->defrect.width =
  VAR_3[VAR_7->std_index].width;
 VAR_6->bounds.height = VAR_6->defrect.height =
  VAR_3[VAR_7->std_index].height;
 VAR_6->pixelaspect = VAR_3[VAR_7->std_index].pixelaspect;
 return 0;
}
