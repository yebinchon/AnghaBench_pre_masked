
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {size_t unit_address; } ;
struct veth_port {int lpar_map; int kobject; } ;
struct veth_lpar_connection {int kobject; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct veth_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct veth_lpar_connection** VAR_1 ;
 struct net_device** VAR_2 ;

__attribute__((used)) static int FUNC_5(struct vio_dev *VAR_3)
{
 struct veth_lpar_connection *VAR_4;
 struct net_device *VAR_5;
 struct veth_port *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2[VAR_3->unit_address];

 if (! VAR_5)
  return 0;

 VAR_6 = FUNC_3(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_4 = VAR_1[VAR_7];

  if (VAR_4 && (VAR_6->lpar_map & (1 << VAR_7))) {

   FUNC_2(&VAR_4->kobject);
  }
 }

 VAR_2[VAR_3->unit_address] = ((void*)0);
 FUNC_1(&VAR_6->kobject);
 FUNC_2(&VAR_6->kobject);
 FUNC_4(VAR_5);
 FUNC_0(VAR_5);

 return 0;
}
