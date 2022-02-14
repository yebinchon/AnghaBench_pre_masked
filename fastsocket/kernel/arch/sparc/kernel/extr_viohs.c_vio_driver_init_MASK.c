
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vio_version {int dummy; } ;
struct vio_driver_state {char* name; int dev_class; int ver_table_entries; int timer; struct vio_driver_ops* ops; struct vio_version* ver_table; struct vio_dev* vdev; int lock; } ;
struct vio_driver_ops {int handshake_complete; int handle_attr; int send_attr; } ;
struct vio_dev {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int *,int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

int FUNC_2(struct vio_driver_state *VAR_2, struct vio_dev *VAR_3,
      u8 VAR_4, struct vio_version *VAR_5,
      int VAR_6, struct vio_driver_ops *VAR_7,
      char *VAR_8)
{
 switch (VAR_4) {
 case 129:
 case 128:
 case 131:
 case 130:
  break;

 default:
  return -VAR_0;
 }

 if (!VAR_7->send_attr ||
     !VAR_7->handle_attr ||
     !VAR_7->handshake_complete)
  return -VAR_0;

 if (!VAR_5 || VAR_6 < 0)
  return -VAR_0;

 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_2->lock);

 VAR_2->name = VAR_8;

 VAR_2->dev_class = VAR_4;
 VAR_2->vdev = VAR_3;

 VAR_2->ver_table = VAR_5;
 VAR_2->ver_table_entries = VAR_6;

 VAR_2->ops = VAR_7;

 FUNC_0(&VAR_2->timer, VAR_1, (unsigned long) VAR_2);

 return 0;
}
