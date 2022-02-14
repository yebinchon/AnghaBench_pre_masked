
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int done_idx; int upend_idx; TYPE_1__* heads; int dev; } ;
struct TYPE_2__ {scalar_t__ len; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct vhost_virtqueue*,int ,int ) ;

int FUNC_1(struct vhost_virtqueue *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_3->done_idx; VAR_4 != VAR_3->upend_idx; VAR_4 = (VAR_4 + 1) % VAR_0) {
  if (VAR_3->heads[VAR_4].len == VAR_2) {
   VAR_3->heads[VAR_4].len = VAR_1;
   FUNC_0(VAR_3->dev, VAR_3,
        VAR_3->heads[VAR_4].id, 0);
   ++VAR_5;
  } else
   break;
 }
 if (VAR_5)
  VAR_3->done_idx = VAR_4;
 return VAR_5;
}
