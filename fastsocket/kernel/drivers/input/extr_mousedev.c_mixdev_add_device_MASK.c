
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mousedev {int mixdev_open; int mixdev_node; int dev; } ;
struct TYPE_2__ {int mutex; scalar_t__ open; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mousedev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mousedev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_0->mutex);
 if (VAR_3)
  return VAR_3;

 if (VAR_0->open) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   goto out;

  VAR_2->mixdev_open = 1;
 }

 FUNC_0(&VAR_2->dev);
 FUNC_1(&VAR_2->mixdev_node, &VAR_1);

 out:
 FUNC_4(&VAR_0->mutex);
 return VAR_3;
}
