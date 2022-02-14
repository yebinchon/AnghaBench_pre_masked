
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {struct lguest_vq_info* priv; } ;
struct TYPE_2__ {int irq; } ;
struct lguest_vq_info {int pages; TYPE_1__ config; } ;


 int FUNC_0 (int ,struct virtqueue*) ;
 int FUNC_1 (struct lguest_vq_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_4(struct virtqueue *VAR_0)
{
 struct lguest_vq_info *VAR_1 = VAR_0->priv;


 FUNC_0(VAR_1->config.irq, VAR_0);

 FUNC_3(VAR_0);

 FUNC_2(VAR_1->pages);

 FUNC_1(VAR_1);
}
