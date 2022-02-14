
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_memory {int dummy; } ;
struct vhost_dev {int nvqs; TYPE_1__* vqs; } ;
struct TYPE_2__ {int mutex; int log_base; scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct vhost_memory*,int) ;

__attribute__((used)) static int FUNC_3(struct vhost_dev *VAR_0, struct vhost_memory *VAR_1,
       int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->nvqs; ++VAR_3) {
  int VAR_4;
  FUNC_0(&VAR_0->vqs[VAR_3].mutex);

  if (VAR_0->vqs[VAR_3].private_data)
   VAR_4 = FUNC_2(VAR_0->vqs[VAR_3].log_base, VAR_1,
       VAR_2);
  else
   VAR_4 = 1;
  FUNC_1(&VAR_0->vqs[VAR_3].mutex);
  if (!VAR_4)
   return 0;
 }
 return 1;
}
