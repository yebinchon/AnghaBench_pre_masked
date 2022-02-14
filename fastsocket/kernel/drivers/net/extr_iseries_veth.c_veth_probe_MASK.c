
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_device_id {int dummy; } ;
struct vio_dev {int unit_address; } ;
struct veth_port {int lpar_map; } ;
struct veth_lpar_connection {int kobject; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct veth_lpar_connection** VAR_1 ;
 struct net_device** VAR_2 ;
 int FUNC_2 (struct veth_lpar_connection*) ;
 struct net_device* FUNC_3 (int,struct vio_dev*) ;
 int FUNC_4 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_5(struct vio_dev *VAR_3, const struct vio_device_id *VAR_4)
{
 int VAR_5 = VAR_3->unit_address;
 struct net_device *VAR_6;
 struct veth_port *VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_3);
  return 1;
 }
 VAR_2[VAR_5] = VAR_6;

 VAR_7 = (struct veth_port*)FUNC_1(VAR_6);



 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct veth_lpar_connection *VAR_8;

  if (! (VAR_7->lpar_map & (1 << VAR_5)))
   continue;

  VAR_8 = VAR_1[VAR_5];
  if (!VAR_8)
   continue;

  FUNC_0(&VAR_8->kobject);
  FUNC_2(VAR_8);
 }

 return 0;
}
