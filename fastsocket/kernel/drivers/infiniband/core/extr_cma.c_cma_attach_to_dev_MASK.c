
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int transport; } ;
struct TYPE_10__ {TYPE_3__ dev_addr; } ;
struct TYPE_9__ {TYPE_5__ addr; } ;
struct TYPE_6__ {TYPE_4__ route; TYPE_2__* device; } ;
struct rdma_id_private {int list; TYPE_1__ id; struct cma_device* cma_dev; } ;
struct cma_device {int id_list; TYPE_2__* device; int refcount; } ;
struct TYPE_7__ {int node_type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rdma_id_private *VAR_0,
         struct cma_device *VAR_1)
{
 FUNC_0(&VAR_1->refcount);
 VAR_0->cma_dev = VAR_1;
 VAR_0->id.device = VAR_1->device;
 VAR_0->id.route.addr.dev_addr.transport =
  FUNC_2(VAR_1->device->node_type);
 FUNC_1(&VAR_0->list, &VAR_1->id_list);
}
