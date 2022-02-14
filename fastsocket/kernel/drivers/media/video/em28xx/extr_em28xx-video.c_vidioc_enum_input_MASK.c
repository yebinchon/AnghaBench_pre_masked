
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {unsigned int index; int std; int type; int name; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {TYPE_1__* vdev; } ;
struct TYPE_4__ {size_t type; } ;
struct TYPE_3__ {int tvnorms; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_7, void *VAR_8,
    struct v4l2_input *VAR_9)
{
 struct em28xx_fh *VAR_10 = VAR_8;
 struct em28xx *VAR_11 = VAR_10->dev;
 unsigned int VAR_12;

 VAR_12 = VAR_9->index;
 if (VAR_12 >= VAR_3)
  return -VAR_0;
 if (0 == FUNC_0(VAR_12)->type)
  return -VAR_0;

 VAR_9->index = VAR_12;
 VAR_9->type = VAR_4;

 FUNC_1(VAR_9->name, VAR_6[FUNC_0(VAR_12)->type]);

 if ((VAR_2 == FUNC_0(VAR_12)->type) ||
  (VAR_1 == FUNC_0(VAR_12)->type))
  VAR_9->type = VAR_5;

 VAR_9->std = VAR_11->vdev->tvnorms;

 return 0;
}
