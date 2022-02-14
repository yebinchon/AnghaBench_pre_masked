
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtnet_info {scalar_t__ pages; TYPE_2__* vdev; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_4__ {int (* del_vqs ) (TYPE_2__*) ;int (* reset ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct virtnet_info*) ;
 int FUNC_2 (struct virtnet_info*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct virtnet_info *VAR_1)
{
 VAR_1->vdev->config->reset(VAR_1->vdev);


 FUNC_1(VAR_1);

 VAR_1->vdev->config->del_vqs(VAR_1->vdev);

 while (VAR_1->pages)
  FUNC_0(FUNC_2(VAR_1, VAR_0), 0);
}
