
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_dev {int dummy; } ;
struct vhost_net {int tx_poll_state; scalar_t__ poll; TYPE_1__* vqs; struct vhost_dev dev; } ;
struct inode {int dummy; } ;
struct file {struct vhost_net* private_data; } ;
struct TYPE_2__ {int handle_kick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vhost_net*) ;
 struct vhost_net* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vhost_dev*,TYPE_1__*,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,struct vhost_dev*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_12, struct file *VAR_13)
{
 struct vhost_net *VAR_14 = FUNC_1(sizeof *VAR_14, VAR_1);
 struct vhost_dev *VAR_15;
 int VAR_16;

 if (!VAR_14)
  return -VAR_0;

 VAR_15 = &VAR_14->dev;
 VAR_14->vqs[VAR_7].handle_kick = VAR_10;
 VAR_14->vqs[VAR_6].handle_kick = VAR_8;
 VAR_16 = FUNC_2(VAR_15, VAR_14->vqs, VAR_5);
 if (VAR_16 < 0) {
  FUNC_0(VAR_14);
  return VAR_16;
 }

 FUNC_3(VAR_14->poll + VAR_7, VAR_11, VAR_3, VAR_15);
 FUNC_3(VAR_14->poll + VAR_6, VAR_9, VAR_2, VAR_15);
 VAR_14->tx_poll_state = VAR_4;

 VAR_13->private_data = VAR_14;

 return 0;
}
