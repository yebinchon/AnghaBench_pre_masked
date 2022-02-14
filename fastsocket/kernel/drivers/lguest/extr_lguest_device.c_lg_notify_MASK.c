
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {struct lguest_vq_info* priv; } ;
struct TYPE_2__ {int pfn; } ;
struct lguest_vq_info {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_2)
{




 struct lguest_vq_info *VAR_3 = VAR_2->priv;

 FUNC_0(VAR_0, VAR_3->config.pfn << VAR_1);
}
