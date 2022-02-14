
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_port {int dummy; } ;
struct vnet {int lock; } ;
struct sk_buff {int dummy; } ;


 struct vnet_port* FUNC_0 (struct vnet*,struct sk_buff*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct vnet_port *FUNC_3(struct vnet *VAR_0, struct sk_buff *VAR_1)
{
 struct vnet_port *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_2;
}
